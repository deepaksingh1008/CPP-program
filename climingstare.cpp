#include<iostream>
using namespace std;
int countStair(long long s)
{

    if(s<0)
    {
        return 0;
    }
    if(s==0)
    {

        return 1;
    }
   // else{
        return countStair(s-1)+countStair(s-2);
    //}
}

int main()
{
    long long stair;
    cout<<"enter the number of stair "<<endl;
    cin>>stair;
    cout<<countStair(stair);

    return 0;

}
