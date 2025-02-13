#include<iostream>
using namespace std;

int Bintodec(int num ){
    int answer=0;
    int power=1;
    if (num>=0)
    {while (num>0)
        {
            int rem=num%10;
            num=num/10;
            answer+=(rem*power);
            power*=2;
        }
        return answer;
        
    }
    else{
        cout << "You are Entering a negative number try 2's Complement " << endl;
    }
    }
    

    

int main()
{
    int binary;
    cout << "Enter Your Number " << endl;
    cin >> binary;
    int num=Bintodec(binary);
    cout << "Decimal of " << binary << " is "<<num<<endl;
    return 0;
}