#pragma once
#include "../../common/common.h"
#include "identifier.h"

class Product : Identifier
{
public:
	const int& getId() const;
	const string& getName() const;
	const currency& getPrice() const;
	const string& getDescription() const;
	const string& getCategory() const;

	void setId(const int& id);
	void setName(const string& name);
	void setPrice(const currency& price);
	void setDescription(const string& description);
	void setCategory(const string& category);


private:
	int _id;
	string _name;
	currency _price;
	string _description;
	string _category;
};
