//WAF to calculate sum and products of all numbers in an array 
int sum(int arr[],int n){
    int sum=0;
    for(int i =0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}


int product(int arr[],int n){
    int product=1;
    for(int i =0;i<n;i++){
        product=product*arr[i];
    }
    return product;

}

#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,7,8,11,15};
    int n=sizeof(arr)/sizeof(int);
    cout << "The sum of all elements in this array is - " << sum(arr,n)<<endl;
    cout << "The product of all elements in this array is - " << product(arr,n)<<endl;
    


    return 0;
}