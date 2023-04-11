#include<iostream>
using namespace std;

int findPower(int n)
{

    if(n==0){
        return 1;
    }
    else{
        return 2*findPower(n-1);
    }
}

int main()
{

    int n;
    cout<<"enter the number :";
    cin>>n;
    cout<<"the power of given number = "<<findPower(n);
    return 0;
}
