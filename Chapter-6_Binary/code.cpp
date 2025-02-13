#include<iostream>
using namespace std;

int dectoBin(int num ){
    int answer=0;
    int power=1;

    while (num>0)
    {
        int rem=num%2;
        num=num/2;
        answer+=(rem*power);
        power*=10;
    }
    return answer;
    
}

int main()
{
    int number;
    cout << "Enter Your Number " << endl;
    cin >> number;
    int binary=dectoBin(number);
    cout << "Binary of " << number << " is "<<binary<<endl;
    return 0;
}