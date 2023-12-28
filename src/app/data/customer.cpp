#include "customer.h"

const string& Customer::getName() const
{
    return _name;
}

const string& Customer::getAddress() const
{
    return _address;
}

const string& Customer::getPhoneNumber() const
{
    return _phoneNumber;
}

const string& Customer::getEmail() const
{
    return _email;
}

const string& Customer::getPassword() const
{
    return _password;
}

void Customer::setName(const string& name)
{
    _name = name;
}

void Customer::setAddress(const string& address)
{
    _address = address;
}

void Customer::setPhoneNumber(const string& phoneNumber)
{
    _phoneNumber = phoneNumber;
}

void Customer::setEmail(const string& email)
{
    _email = email;
}

void Customer::setPassword(const string& password)
{
    _password = password;
}
