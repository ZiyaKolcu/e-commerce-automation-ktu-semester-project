#include "product.h"

const int& Product::getId() const
{
    return _id;
}

const string& Product::getName() const
{
    return _name;
}

const currency& Product::getPrice() const
{
    return _price;
}

const string& Product::getDescription() const
{
    return _description;
}

const int& Product::getCategoryIdentifier() const
{
    return _categoryIdentifier;
}

void Product::setId(const int& id)
{
    _id = id;
}

void Product::setName(const string& name)
{
    _name = name;
}

void Product::setPrice(const currency& price)
{
    _price = price;
}

void Product::setDescription(const string& description)
{
    _description = description;
}

void Product::setCategoryIdentifier(const int& categoryIdentifier)
{
    _categoryIdentifier = categoryIdentifier;
}
