#include "order_product.h"

const int& OrderProduct::getOrderIdentifier() const
{
    return _orderIdentifier;
}

const int& OrderProduct::getProductIdentifier() const
{
    return _productIdentifier;
}

const count& OrderProduct::getOrderCount() const
{
    return _orderCount;
}

const currency& OrderProduct::getUnitPrice() const
{
    return _unitPrice;
}

void OrderProduct::setOrderIdentifier(const int& orderIdentifier)
{
    _orderIdentifier = orderIdentifier;
}

void OrderProduct::setProductIdentifier(const int& productIdentifier)
{
    _productIdentifier = productIdentifier;
}

void OrderProduct::setOrderCount(const count& orderCount)
{
    _orderCount = orderCount;
}

void OrderProduct::setUnitPrice(const currency& unitPrice)
{
    _unitPrice = unitPrice;
}
