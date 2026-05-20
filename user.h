#ifndef USER_H
#define USER_H

#include<bits/stdc++.h>
using namespace std;

class User{
    protected:
     string username;
     string password;
    
    public:
     void registerUser();
     bool login();
     string getUsername(); 
};

#endif
