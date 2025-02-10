// Basic if-else statements

#include<iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age " << endl;
    
    cin >> age;
    
    if (age >= 18)
    {
        cout << "You Are eligible" << endl;
        
    }else
    {
        cout << "You are not eligible " << endl;
        
    }
    
        
    return 0;
}