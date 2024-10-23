// Title: A Login and Registration System Programmed in C++
// PROJECT FOR C/C++ PROGRAMMING TUTORIAL


#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
#include <functional>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include "login.h"
using namespace std;

void login::Login()
{
    /* string count;
    string username, password, id, recordPass, recordSecurity;
    system("clear");
    cout << "\n\t\t\t Please enter the username and password: " << endl;
    cout << "\t\t\t USERNAME: ";
    cin >> username;
    cout << "\t\t\t PASSWORD: ";
    cin >> password;

    string loginHash = password;
    hash<string> mystdhash;
    int loginHashPassword = mystdhash(loginHash); */
  // ******************Enter your code here ***********************
}

void login::Registration()
{
    string regUser, regPassword, regId, regPass, securityQuestion, regSecure, regCount;
    system("clear");
    cout << "\n\t\t\t Enter Username: ";
    cin >> regUser;
    cout << "\t\t\t Enter Password: ";
    cin >> regPassword;
    cout << "\t\t\t Security Question: What was your favorite childhood movie?: ";
    cin.ignore();
    getline(cin, securityQuestion);

    string hashing = regPassword;
    hash<string> mystdhash;
    int hashPassword = mystdhash(hashing);

    string secureHashing = securityQuestion;
    hash<string> mystdhash2;
    int securityHash = mystdhash2(secureHashing);

    ifstream input("data.txt");
    input.seekg(0, ios::end);

    if (input.tellg() == 0)
    {
        ofstream f1("data.txt", ios::app);
        if(!f1){
            cerr<<"Error opening file for writing."<<endl;
            return;
        }
        f1 << regUser << ' ' << hashPassword << ' ' << securityHash << endl;
        system("clear");
        cout << "\n\t\t\t Registration successful!\n";
        return;
    }
    else
    {
        ifstream input("data.txt");
        if(!input){
            cerr<<"Error opening file to reading."<<endl;
            return;
        }
        while (input >> regId >> regPass >> regSecure)
        {
            if (regUser == regId)
            {
                string decision;
                cout << "\n\t\tUsername already taken.\n";
                cout << "\t\tEnter 1 to enter a new one\n";
                cout << "\t\tEnter 2 to go back to the menu\n";
                cout << "\n\t\tEnter choice: ";
                cin >> decision;

                if (decision == "1")
                {
                    Registration();
                }
                else if (decision == "2")
                {
                    system("clear");
                    cout << "\tReturning to menu\n";
                    return;
                }
                else
                {
                    system("clear");
                    cout << "\tInvalid Entry, returning to menu." << endl;
                    return;
                }
            }
            else
            {
                regCount = "1";
            }
        }
        if (regCount == "1")
        {
            ofstream f1("data.txt", ios::app);
            f1 << regUser << ' ' << hashPassword << ' ' << securityHash << endl;
            system("clear");
            cout << "\n\t\t\t Registration successful!\n";
            return;
        }
    }
}

void login::DrunkGame()
{
    srand(time(0));
    const int size = 60;
    cout << "Enter a letter to begin \n ";
    char x;
    cin >> x;
    int position = size / 2;
    while (true)
    {
        cout << "|START|";
        for (int i = 0; i < size; i++)
        {
            if (i == position)
                cout << x;
            else
                cout << " ";
        }
        cout << "|END|" << endl;
        int move = rand() % 3 - 1;
        position = position + move;
        if (position < 1)
        {
            cout << "Guess you were too drunk to make it to the end..." << endl;
            break;
        }
        if (position > size - 1)
        {
            cout << "You might be drunk, but you made it to the end!" << endl;
            break;
        }
        for (int sleep = 0; sleep < 1000000; ++sleep)
            ;
    }
   //system("pause");
   //system("clear");
}

void login::ForgotPassword()
{
    #ifdef _WIN32
            system("cls");
    #else
            system("clear");
    #endif
/*     string forgotChoice, count, secondCount;
    
    cout << "\n\t\t\tPress 1 to enter USERNAME\n";
    cout << "\t\t\tPress 2 to go back to MENU\n";
    cout << "\n\t\t\tEnter choice: ";
    cin >> forgotChoice; */

    //*******************Enter your code here*************************
}

void login::DeleteLine(string userDelete)
{
    string line;
    ifstream myFile;
    myFile.open("data.txt");
    ofstream temp;
    temp.open("temp.txt");
    while (getline(myFile, line))
    {
        if (line.substr(0, userDelete.size()) != userDelete)
        {
            temp << line << endl;
        }
    }
    myFile.close();
    temp.close();
    remove("data.txt");
    rename("temp.txt", "data.txt");
}
