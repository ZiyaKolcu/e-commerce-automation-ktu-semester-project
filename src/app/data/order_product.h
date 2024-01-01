#pragma once
#include "../../common/common.h"
#include "identifier.h"

class OrderProduct : Identifier
{
public:
	const int& getOrderIdentifier() const;
	const int& getProductIdentifier() const;
	const count& getOrderCount() const;
	const currency& getUnitPrice() const;

	void setOrderIdentifier(const int& orderIdentifier);
	void setProductIdentifier(const int& productIdentifier);
	void setOrderCount(const count& orderCount);
	void setUnitPrice(const currency& unitPrice);


private:
	int _orderIdentifier;
	int _productIdentifier;
	count _orderCount;
	currency _unitPrice;
};