#pragma once
#include "containers.h"
#include "../data/product.h"

class Controller {
public:
	static Controller& controller();

	StoreContainer& getStores();
	ProductContainer& getProducts();
	CustomerContainer& getCustomers();
	OrderContainer& getOrders();
	OrderProductContainer& getOrderProducts();
	ProductCommentContainer& getProductComments();
	ProductCategoryContainer& getProductCategories();

private:
	StoreContainer _stores;
	ProductContainer _products;
	CustomerContainer _customers;
	OrderContainer _orders;
	OrderProductContainer _orderProducts;
	ProductCommentContainer _productComments;
	ProductCategoryContainer _productCategory;
};