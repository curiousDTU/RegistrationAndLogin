// Title: A Login and Registration System Programmed in C++
// PROJECT FOR C/C++ PROGRAMMING TUTORIAL


#pragma once
//#include<iostream>
#include <string>
using namespace std;

class login
{
private:
    void DrunkGame();
    void DeleteLine(string username);
    void retrieveData(string username, string loginHashPassword);//Add a function for reading the file
    //  and checking the user and password

public:
    void Login();
    void Registration();
    void ForgotPassword();
    
    
};