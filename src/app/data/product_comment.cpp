#include "product_comment.h"

const int& ProductComment::getOrderIdentifier() const
{
    return _orderIdentifier;
}

const int& ProductComment::getProductIdentifier() const
{
    return _productIdentifier;
}

const string& ProductComment::getComment() const
{
    return _comment;
}

const char& ProductComment::getPoint() const
{
    return _point;
}

void ProductComment::setOrderIdentifier(const int& orderIdentifier)
{
    _orderIdentifier = orderIdentifier;
}

void ProductComment::setProductIdentifier(const int& productIdentifier)
{
    _productIdentifier = productIdentifier;
}

void ProductComment::setComment(const string& comment)
{
    _comment = comment;
}

void ProductComment::setPoint(const char& point)
{
    _point = point;
}
