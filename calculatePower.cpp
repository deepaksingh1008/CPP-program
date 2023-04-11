#include<iostream>
using namespace std;
int calPower(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    if(b==1)
    {
        return a;
    }
    int ans = calPower(a,b/2);
    if(b%2==0)
    {
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }

}
int main()
{
    int a,b;
    cout<<"enter the number :";
    cin>>a;
    cout<<"enter the power :";
    cin>>b;
    int ans = calPower(a,b);
    cout<<a<<"^"<<b<< " = "<<ans;



    return 0;
}
