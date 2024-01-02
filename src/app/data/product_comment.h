#pragma once
#include "../../common/common.h"
#include "identifier.h"
 
class ProductComment : public Identifier
{
public:
	const int& getOrderIdentifier() const;
	const int& getProductIdentifier() const;
	const string& getComment() const;
	const char& getPoint() const;

	void setOrderIdentifier(const int& orderIdentifier);
	void setProductIdentifier(const int& productIdentifier);
	void setComment(const string& comment);
	void setPoint(const char& point);


private:
	int _orderIdentifier;
	int _productIdentifier;
	string _comment;
	char _point;
};

