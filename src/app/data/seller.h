#pragma once
#include "../../common/common.h"
#include "identifier.h"

class Seller : public Identifier
{
public:
	const int& getStoreIdentifier() const;

	void setStoreIdentifier(const int& storeIdentifier);

private:
	string _name;
	int _storeIdentifier;
};

