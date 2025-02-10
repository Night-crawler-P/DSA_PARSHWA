//Lowercase or Uppercase 
#include<iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter your character " << endl;
    cin >> c;
    int asci=(int)c;    
    if (asci>=65 && asci<=90 )
    {
        cout << "The Character is Uppercase " << endl;
        
    }else if (asci>=97 && asci<=122)

    {
        cout << "The Character is lowercase " << endl;
        
    }else
    {
        cout << "Please enter a valid english alphabet " << endl;
        
    }
    
    
    
    
    return 0;
}