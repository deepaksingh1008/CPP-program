#include<iostream>
using namespace std;

int main()
{
    vector<int> a1;
    cout<<"enter the element in vector:";
    int n;
    cin>>n;
    cout<<"enter the element  in vector"<<endl;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        a1.push_back(a);

    }
    for(auto x  : a1)
    {
        cout<<x;

    }
    cout<<endl;
    int c=-19999;
    int v=0;
    for(int i=0;i<n;i++)
    {
         c=a1[i+1]-a[i];

        for(int j=0;j<n;j++)
        {

        }
    }
}
