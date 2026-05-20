#include "user.h"

void User::registerUser(){
    ofstream file("users.text",ios::app);

    cout<<"Enter username: ";
    cin>>username;

    cout<<"Enter password: ";
    cin>>password;

    file << username <<" "<<password<<endl;

    file.close();

    cout<<"Registration successful!" << endl;
}

bool User::login(){
    string u,p;
    string fileuser,filepass;

    cout<<"Enter username: ";
    cin>>u;
    cout<<"Enter password: ";
    cin>>p;

    ifstream file("users.text");

    while(file>>fileuser>>filepass){
        if(u==fileuser && p ==filepass){
            username =u;
            password = p;
            cout<<"Login Successful!"<<endl;
            return true;
        }
    }
    cout<<"Invalid Credentials!"<<endl;
    return false;

}

string User::getUsername(){
    return username;
}
