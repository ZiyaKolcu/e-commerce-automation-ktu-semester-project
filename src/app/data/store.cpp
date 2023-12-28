#include "store.h"

const string& Store::getAddress() const
{
    return _address;
}

const string& Store::getPhoneNumber() const
{
    return _phoneNumber;
}

const string& Store::getAdmin() const
{
    return _admin;
}

void Store::setAddress(const string& address)
{
    _address = address;
}

void Store::setPhoneNumber(const string& phoneNumber)
{
    _phoneNumber = phoneNumber;
}

void Store::setAdmin(const string& admin)
{
    _admin = admin;
}
