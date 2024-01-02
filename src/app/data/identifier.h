#pragma once
#include "../../common/common.h"

class Identifier
{
protected:
    int _identifier;

public:
    int getIdentifier() const;
    void setIdentifier(const int& identifier);
};
