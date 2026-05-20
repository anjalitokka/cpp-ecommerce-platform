#ifndef PRODUCT_H
#define PRODUCT_H

#include<bits/stdc++.h>
using namespace std;

class Product{
    private:
     int id;
     string name;
     float price;
     int stock;

    public:
     Product();
     Product(int id,string name,float price,int stock);
     
     int getId();
     string getName();
     float getPrice();
     int getStock();
     void setStock(int stock);

     void displayProduct();
};

#endif
