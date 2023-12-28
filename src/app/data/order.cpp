#include "order.h"

const date& Order::getOrderDate() const
{
    return _orderDate;
}

const string& Order::getSeller() const
{
    return _seller;
}

const int& Order::getCustomerIdentifier() const
{
    return _customerIdentifier;
}

void Order::setOrderDate(const date& date)
{
    _orderDate = date;
}

void Order::setSeller(const string& seller)
{
    _seller = seller;
}

void Order::setCustomerIdentifier(const int& customerIdentifier)
{
    _customerIdentifier = customerIdentifier;
}
