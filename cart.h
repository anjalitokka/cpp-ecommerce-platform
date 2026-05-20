#ifndef CART_H
#define CART_H

#include<bits/stdc++.h>
#include "product.h"
using namespace std;

class Cart{
  private:
  vector<Product> cartItems;

  public:
    void addToCart(Product p);
    void viewCart();
    float checkout(string username);
};

#endif
