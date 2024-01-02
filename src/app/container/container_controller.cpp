#include "container_controller.h"

Controller& Controller::controller()
{
    static Controller controller;
    return controller;
}

StoreContainer& Controller::getStores()
{
    return _stores;
}

ProductContainer& Controller::getProducts() 
{
    return _products;
}

CustomerContainer& Controller::getCustomers() 
{
    return _customers;
}

OrderContainer& Controller::getOrders() 
{
    return _orders;
}

OrderProductContainer& Controller::getOrderProducts() 
{
    return _orderProducts;
}

ProductCommentContainer& Controller::getProductComments() 
{
    return _productComments;
}

ProductCategoryContainer& Controller::getProductCategories()
{
    return _productCategory;
}
