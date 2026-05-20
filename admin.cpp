#include "admin.h"

void Admin:: addProduct(vector<Product>&products){
    int id,stock;
    string name;
    float price;

    cout<<"Enter Product ID:  ";
    cin>>id;

    cout<<"Enter Product name: ";
    cin>>name;

    cout << "Enter Product Price: ";
    cin >> price;

    cout << "Enter Stock: ";
    cin >> stock;

    Product p(id,name,price,stock);

    products.push_back(p);

    cout<<"Product Added Successfullyy!"<<endl;
}
