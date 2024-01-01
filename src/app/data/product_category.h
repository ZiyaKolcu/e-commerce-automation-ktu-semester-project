#pragma once
#include "../../common/common.h"
#include "identifier.h"

class ProductCategory : Identifier
{
public:
	const string& getCategory() const;

	void setCategory(const string& category);

private:
	string _category;
};

