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

ProductContainer& Controller::getProduct() 
{
    return _products;
}

CustomerContainer& Controller::getCustomer() 
{
    return _customers;
}

OrderContainer& Controller::getOrder() 
{
    return _orders;
}

OrderProductContainer& Controller::getOrderProduct() 
{
    return _orderProducts;
}

ProductCommentContainer& Controller::getProductComment() 
{
    return _productComments;
}
