#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;
 
class Bank {
    string first_name, last_name , address, pancard_no,account_type;
    int adharcard_no;
    float balance;
public :
void menu();
void open_Account();
void deposite();
void withdraw();
void balance_enquiry();
void show_account_details();


  

};
void menu()
{
    cout << "--------------------------------------------------"<<endl;
    cout << "-------------------MAIN MENU----------------------"<<endl;
    cout << "--------------------------------------------------"<<endl;
    cout << "Press 1 to Open New Account\n";
    cout << "Press 2 to Deposite Money\n";
    cout << "Press 3 to Withdraw Money\n";
    cout << "Press 4 to Balance enquiry\n";
    cout << "Press 5 to Show Account Details\n";
    cout << "Press 6 to Quit\n";
    cout << "--------------------------------------------------"<<endl;
}

void Bank::open_Account()
{
    cout << "Enter First Name : \n";
    cin >>first_name;
    cout << "Enter Last Name : \n";
    cin >>last_name;
    cout << "Enter Pancard Number : \n";
    cin >>pancard_no;
    cout << "Enter Adharcard Number : \n";
    cin >>adharcard_no;
    cout << "Enter Account Type(Saving/Current) : \n";
    cin >>account_type;
    cout << "Enter Initial Amount To Deposite(>=1000 for Saving and >=2000 for current ) : \n";
    cin >>balance;
    cout << "Account Created Successfully...!!!\n";
    
   
}
void Bank::deposite()
{
    float amount;
    cout <<"Enter Amount To Deposite : \n";
    cin >>amount;
    balance+=amount;
    cout <<"Available Balance : "<<balance<<"\n";
    

}
void Bank::withdraw()
{
    float amount;
    cout<<"Enter Amount To Withdraw : \n";
    cin>>amount;
    balance-=amount;
    cout <<"Available Balance : "<<balance<<"\n";
}
    
void Bank::balance_enquiry()
{
    cout<<"Available Balance : "<<balance<<"\n";
    
}
void Bank::show_account_details()
{
    cout<<"First Name : "<<first_name<<"\n";
    cout<<"Last Name : "<<last_name<<"\n";
    cout<<"Pan Card Number : "<<pancard_no<<"\n";
    cout<<"Adhar Card Number : "<<adharcard_no<<"\n";
    cout<<"Account Type : "<<account_type<<"\n";
    cout<<"Available Balance : "<<balance<<"\n";
    
}
int main()
{
    Bank b;
    while(true)
    {
    menu();
    int choice;

    cout << "Enter your choice : ";
    cin >> choice;
    cout << "--------------------------------------------------"<<endl;
    if(choice==6)
    {
        cout << "Quited Successfully .....";
        break;
    }
    switch (choice) {
    case 1: {
             b.open_Account();
             break;
            }
    case 2: {
                b.deposite();
                break;
         }
    case 3: {
        b.withdraw();
        break;
    }
    case 4: {
        b.balance_enquiry();
        break;
    }
    
    case 5: {
       
       b.show_account_details();
       break;
    }
    default:
        cout<<"Wrong Input\n";
        break;
        
    }
    }
}
