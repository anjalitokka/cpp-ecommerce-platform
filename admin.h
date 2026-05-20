#ifndef ADMIN_H
#define ADMIN_H

#include "user.h"
#include "product.h"
#include <vector>

class Admin : public User{
    public:
     void addProduct(vector<Product>& products);
};

#endif
