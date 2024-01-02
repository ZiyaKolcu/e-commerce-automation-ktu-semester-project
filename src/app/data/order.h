#pragma once
#include "../../common/common.h"
#include "../container/containers.h"
#include "identifier.h"

class Order : public Identifier
{
public:
	const date& getOrderDate() const;
	const int& getSellerIdentifier() const;
	const int& getCustomerIdentifier() const;
	const int& getProductIdentifier() const;

	ProductPtr getProduct() const;

	void setOrderDate(const date& date);
	void setSellerIdentifier(const int& seller);
	void setCustomerIdentifier(const int& customerIdentifier);
	void setProductIdentifier(const int& productIdentifier);

private:
	date _orderDate;
	int _sellerIdentifier;
	int _customerIdentifier;
	int _productIdentifier;
};

