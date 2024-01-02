#include "order.h"
#include "../container/container_controller.h"

const date& Order::getOrderDate() const
{
    return _orderDate;
}

const int& Order::getSellerIdentifier() const
{
    return _sellerIdentifier;
}

const int& Order::getCustomerIdentifier() const
{
    return _customerIdentifier;
}

const int& Order::getProductIdentifier() const
{
    return _productIdentifier;
}


void Order::setOrderDate(const date& date)
{
    _orderDate = date;
}

void Order::setSellerIdentifier(const int& seller)
{
    _sellerIdentifier = seller;
}

void Order::setCustomerIdentifier(const int& customerIdentifier)
{
    _customerIdentifier = customerIdentifier;
}

void Order::setProductIdentifier(const int& productIdentifier)
{
    _productIdentifier = productIdentifier;
}
