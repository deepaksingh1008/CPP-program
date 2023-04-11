#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int> a1;
    cout<<"enter the size of vector:";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        a1.push_back(a);
    }
    for(auto x : a1)
    {
        cout<<x<<"  ";
    }
    cout<<endl;
    int maxsum=0;
    int currentsum=0;
    for(int i=0;i<n;i++)
    {
        currentsum=a1[i];
        if(maxsum<currentsum)
        {
            maxsum=currentsum;
        }
        cout<<maxsum<<" ";
    }

    return 0;
}
