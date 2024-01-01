#pragma once
#include "../../common/common.h"
#include "identifier.h"

class Customer : Identifier
{
public:
	const string& getName() const;
	const string& getAddress() const;
	const string& getPhoneNumber() const;
	const string& getEmail() const;
	const string& getPassword() const;

	void setName(const string& name);
	void setAddress(const string& address);
	void setPhoneNumber(const string& phoneNumber);
	void setEmail(const string& email);
	void setPassword(const string& password);

private:
	string _name;
	string _address;
	string _phoneNumber;
	string _email;
	string _password;
};


