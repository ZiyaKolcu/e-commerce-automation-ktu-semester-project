#pragma once
#include "../../common/common.h"
#include "identifier.h"

class Order : Identifier
{
public:
	const date& getOrderDate() const;
	const string& getSeller() const;
	const int& getCustomerIdentifier() const;

	void setOrderDate(const date& date);
	void setSeller(const string& seller);
	void setCustomerIdentifier(const int& customerIdentifier);

private:
	date _orderDate;
	string _seller;
	int _customerIdentifier;
};

