#include "product.h"

Product::Product(){
    id =0;
    name="";
    price = 0;
    stock =0;
}

Product::Product(int id,string name,float price,int stock){
    this->id = id;
    this->name = name;
    this->price = price;
    this->stock = stock;
}
int Product::getId(){
    return id;
}

string Product::getName(){
    return name;
}
float Product::getPrice(){
    return price;
}
int Product::getStock(){
    return stock;
}

void Product::setStock(int stock){
    this->stock = stock;
}
void Product::displayProduct(){
    cout<<"ID: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Price: Rs"<<price<<endl;
    cout<<"Stock: "<<stock<<endl;
    cout<<"_________________________________"<<endl;
}

