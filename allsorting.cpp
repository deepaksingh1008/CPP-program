#include<iostream>
using namespace std;
void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"    ";
    }
    cout<<endl;

}
void merging(int a[],int low,int high,int mid)
{
    int i=low;
    int j=0;
    int b[10];
    int k=mid+1;
    while(i<=mid&&k<=high)
    {
        if(a[i]>a[k]){
            b[j]=a[k];
          j++;
          k++;
        }
        else{
            b[j]=a[i];
            j++;
            i++;
        }
    }
    while(i<=mid)
    {
        b[j]=a[i];
        j++;
        i++;
    }
    while(k<=high)
    {
        b[j]=a[k];
        j++;
        k++;
    }
    for(int i=low;i<=high;i++)
    {
        a[i]=b[i];
    }
    printarray(a,high+1);
}
void mergesort(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merging(a,low,high,mid);
    }
}
void slectionsort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {

        for(j=i+1;j<n;j++)
        {
             if(a[i]>a[j])
                {
                    temp=a[i];
                        a[i]=a[j];
                    a[j]=temp;
                }
        }
    }
    printarray(a,n);
}

void bubblesort(int a[],int n)
{

    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i+1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    }
    printarray(a,n);
}
void insertionsort(int a[],int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        int temp=a[i];
        j=i-1;
        while(a[j]>temp&&j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;

    }
    printarray(a,n);
}
int main()
{
    int a[]={9,8,7,6,5};
  //  cout<<"enter the size of array:";
    //cin>>n;
    //cout<<"enter the element in array"<<endl;
   // for(i=0;i<n;i++)
    //{
      //  cin>>a[i];
   // }
    printarray(a,5);
  //  insertionsort(a,5);
  //  bubblesort(a,5);
  //  slectionsort(a,5);
    mergesort(a,0,4);



    return 0;

}
