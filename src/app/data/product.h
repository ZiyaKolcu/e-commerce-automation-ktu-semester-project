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
	const int& getCategoryIdentifier() const;

	void setId(const int& id);
	void setName(const string& name);
	void setPrice(const currency& price);
	void setDescription(const string& description);
	void setCategoryIdentifier(const int& categoryIdentifier);


private:
	int _id;
	string _name;
	currency _price;
	string _description;
	int _categoryIdentifier;
};
