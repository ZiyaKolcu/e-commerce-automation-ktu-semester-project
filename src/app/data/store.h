#pragma once
#include "../../common/common.h"
#include "identifier.h"

class Store : public Identifier
{
public:
	const string& getAddress() const;
	const string& getPhoneNumber() const;
	const string& getAdmin() const;

	void setAddress(const string& address);
	void setPhoneNumber(const string& phoneNumber);
	void setAdmin(const string& admin);
	
private:
	string _address;
	string _phoneNumber;
	string _admin;
};

