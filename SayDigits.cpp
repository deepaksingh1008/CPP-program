#include<iostream>
using namespace std;
void sayDigit(int *arr,int n)
{
    if(n==0)
    {
        return;
    }
    int digit=n%10;
    n=n/10;
    cout<<arr[digit]<<"   ";
    sayDigit(arr,n);
}

int main()
{
    string  arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    cout<<"\n";
    sayDigit(arr,n);
    return 0;


}
