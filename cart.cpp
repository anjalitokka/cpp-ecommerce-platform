#include<bits/stdc++.h>
#include "cart.h"

void Cart::addToCart(Product p){
    cartItems.push_back(p);
    cout<<"Product Added To Cart!"<<endl;
}

void Cart::viewCart(){
    if(cartItems.empty()){
        cout<<"Cart is Empty!"<<endl;
        return;
    }
    for(int i=0;i<cartItems.size();i++){
        cartItems[i].displayProduct();
    }
}

float Cart::checkout(string username){
    float total = 0;

    ofstream file("orders.txt",ios::app);

    for(int i=0;i<cartItems.size();i++){
        total+=cartItems[i].getPrice();

        file<<username<<" bought"<<cartItems[i].getName()<<endl;
    }
    file.close();

    cout<<"Checkout Successful!"<<endl;
    cout<<"Total Bill: Rs"<<total<<endl;

    cartItems.clear();

    return total;
}
