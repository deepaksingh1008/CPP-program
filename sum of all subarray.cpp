#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a1;
    int n;
    cout<<"enter the size of vector:";
    cin>>n;
    cout<<"enter the element in vector"<<endl;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        a1.push_back(m);
    }
    for(auto x : a1)
    {
        cout<<x<<"   ";
    }
    cout<<endl;
    int sum=0;
    for(int i=0;i<n;i++)
    {
         sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=a1[j];
            cout<<sum<<"  ";
        }

    }


    return 0;

}
