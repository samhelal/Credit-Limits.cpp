/*4. 4.14 (Credit Limits) Develop a C++ program that will determine whether a
department-store customer has exceeded the credit limit on a charge account. 
For each customer, the following facts are available: 
A. Account number (an integer) 
B. Balance at the beginning of the month
C. Total of all items charged by this customer this month 
D. Total of all credits applied to this customer's account this month 
E. Allowed credit limit( c++ how to program)*/
#include<iostream>
using namespace std ;
#include <iomanip>
int main (){
    int accountNumber(0);
    
    cout << "\nEnter account number (or -1 to quit): " ;
    cin >> accountNumber ;

    while ( accountNumber != -1) {
        double beginningBalance(0) ,totalCharges(0),
        totalCredits(0) , creditLimit(0) ,newBalance(0);
       cout << "Enter beginning balance: " ;
       cin >> beginningBalance ;
       cout << "Enter total charges: " ;
       cin >> totalCharges ;
       cout << "Enter total credits: " ;
       cin >> totalCredits ;
       cout << "Enter credit limit: " ;
       cin >> creditLimit ;
       newBalance = (beginningBalance + totalCharges - totalCredits) ;
       cout << "\nNew balance is " << newBalance ;
       if(totalCredits>creditLimit){
           cout << " Credit Limit Exceeded \n" ;
       }
       cout << "\nEnter account number (or -1 to quit): " ;
       cin >> accountNumber ;
    }
}