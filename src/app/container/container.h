#pragma once
#include "../../common/common.h"
#include <memory>
#include <vector>
#include <functional>
#include <stdexcept>

template <class T>
class Container
{
public:
	using Data = T;
	using Ptr = std::shared_ptr<Data>;
	using Vector = std::vector<Ptr>;
	using Func = std::function<bool(Ptr& i)>;
	using Iterator = typename Vector::iterator;

	Container() : _counter{0} {}

	class AlreadyExistError : public std::logic_error {
	public:
		AlreadyExistError() : std::logic_error("The item already exists!") {}
	};
	class ItemNotFoundError : public std::logic_error {
	public:
		ItemNotFoundError() : std::logic_error("The item not found!") {}
	};
	
	Vector search(Func data) {
		Vector result;
		for (auto& i : _container)
		{
			if (data(i)) {
				result.push_back(i);
			}
		}
		return result;
	}

	void remove(int identifier) {
		for (auto i = _container.begin(); i != _container.end(); i++)
		{
			auto& data = *i;
			if (data.getIdentifier() == identifier) {
				remove(i);
			}
		}
		throw ItemNotFoundError();
	}
	void remove(Iterator itemLocation) {
		_container.erase(itemLocation);
	}
	void add(Ptr item) {
		if (item.getIdentifier() == invalid) {
			_container.push_back(item);
			item.setIdentifier(_counter++);
		} else {
			auto result = search([item](Ptr& i) {
				return i.getIdentifier() == item.getIdentifier();
			});
			if (result.empty())
			{
				_container.push_back(item);
				_counter = std::max(_counter, item.getIdentifier()) + 1;
			}
			else {
				throw AlreadyExistError();
			}
		}
	}

	Ptr createNewPlace() {
		return std::make_shared<Data>();
	}

private:
	Vector _container;
	int _counter;
};


