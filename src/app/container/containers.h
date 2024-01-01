#pragma once
#include "container.h"
#include "../../common/common.h"

#define DATA(D) \
using D ## Container = Container<D>; \
using D ## Ptr = D ## Container::Ptr; \
using D ## Vector = D ## Container::Vector; \
using D ## Func = D ## Container::Func; \
using D ## NotFound = D ## Container::ItemNotFoundError; \
using D ## AlreadyExist = D ## Container::AlreadyExistError; 

DATA(Store)
DATA(Product)
DATA(Customer)
DATA(Order)
DATA(OrderProduct)
DATA(ProductComment)
DATA(ProductCategory)
