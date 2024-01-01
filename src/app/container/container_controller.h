#pragma once
#include "containers.h"

class Controller {
public:
	static Controller& controller();

	StoreContainer& getStores();
	ProductContainer& getProduct();
	CustomerContainer& getCustomer();
	OrderContainer& getOrder();
	OrderProductContainer& getOrderProduct();
	ProductCommentContainer& getProductComment();
	ProductCategoryContainer& getProductCategory();

private:
	StoreContainer _stores;
	ProductContainer _products;
	CustomerContainer _customers;
	OrderContainer _orders;
	OrderProductContainer _orderProducts;
	ProductCommentContainer _productComments;
	ProductCategoryContainer _productCategory;
};