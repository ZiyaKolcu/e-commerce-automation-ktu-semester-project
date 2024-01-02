#include "Seller.h"

const int& Seller::getStoreIdentifier() const
{
    return _storeIdentifier;
}

void Seller::setStoreIdentifier(const int& storeIdentifier)
{
    _storeIdentifier = storeIdentifier;
}
