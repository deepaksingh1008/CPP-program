#include<iostream>
using namespace std;
printarray(int a[],int n)
{

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";

    }
    cout<<"\n";
}

int max_sum_subarray(int a[],int n)
{
    int currentsum=0;
    int maxsum=0;                                        //{ 2,-1,5,-4,6,7,}
    for(int i=0;i<n;i++)
    {
        currentsum+=a[i];
        if(currentsum>maxsum)
        {
            maxsum=currentsum;
        }
        if(currentsum<0)
        {
            currentsum=0;
        }
    }
    return maxsum;

}

int main()
{
   int a[10];
   int n,i;
   cout<<"enter the size of array:";
   cin>>n;
   cout<<"enter the element in array neagative or positive"<<endl;
   for(i=0;i<n;i++)
   {
       cin>>a[i];

   }
   printarray(a,n);
   int m=max_sum_subarray(a,n);
   cout<<m;

    return 0;
}

