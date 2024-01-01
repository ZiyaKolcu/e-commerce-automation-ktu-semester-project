#include "product_category.h"

const string& ProductCategory::getCategory() const
{
    return _category;
}

void ProductCategory::setCategory(const string& category)
{
    _category = category;
}
