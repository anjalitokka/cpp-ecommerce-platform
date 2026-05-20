#include<bits/stdc++.h>
#include "product.h"
#include "user.h"
#include "cart.h"
#include "admin.h"
using namespace std;

void displayProducts(vector<Product>& products){
    cout<<"           Products          "<<endl;

    for(int i=0;i<products.size();i++){
        products[i].displayProduct();
    }
}

int main(){
    vector<Product> products;
    products.push_back(Product(1,"Laptop",50000,10));
    products.push_back(Product(2,"Mouse",500,20));
    products.push_back(Product(3,"Keyboard",1500,15));

    User user;
    Cart cart;
    Admin admin;

    int choice;

    while(true){
        cout<<"                ECOMMERCE SYSTEM                  "<<endl;
        cout<<"1.Register"<<endl;
        cout<<"2.Login"<<endl;
        cout<<"3.View Products"<<endl;
        cout<<"4.Add To Cart"<<endl;
        cout<<"5.View Cart"<<endl;
        cout<<"6.Checkout"<<endl;
        cout<<"7.Admin Add Product"<<endl;
        cout<<"8.Exit"<<endl;

        cout<<"Enter choice: ";
        cin>>choice;
        if(choice ==1){
            user.registerUser();
        }
        else if(choice==2){
            user.login();
        }
        else if(choice ==3){
            displayProducts(products);
        }
        else if(choice ==4){
            int id;
            cout<<"Enter Product ID to Add: ";
            cin>>id;

            bool found = false;
            for(int i=0;i<products.size();i++){
                if(products[i].getId()==id){
                    cart.addToCart(products[i]);
                    found =true;
                    break;
                }
            }
            if(!found)
               cout<<"Product Not Found!"<<endl;
        }
        else if(choice ==5){
            cart.viewCart();
        }
        else if(choice==6){
            cart.checkout(user.getUsername());
        }
        else if(choice == 7){
            admin.addProduct(products);
        }
        else if (choice == 8){
            cout << "Thank You For Using The System!" << endl;
            break;
        }
        else
          cout<<"Invalid Choice!"<<endl;

    }

    return 0;
}

