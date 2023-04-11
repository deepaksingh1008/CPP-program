#include<iostream>
using namespace std;
class Heap{
    public :
    int arr[100];
    int size;
    Heap()
    {
        arr[0]=-1;
        size=0;
    }
    void MaxHeap(int val)
    {
        size=size+1;
        int index=size;
        arr[index]=val;
        while(index>1)
        {
            int parent=index/2;
            if(arr[parent]<arr[index])
            {
                swap(arr[parent],arr[index]);
            }
            index=index-1;
        }

    }
    void PrintMaxHeap()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<"  ";
        }
    }
   void DeleteMaxHeap()
   {
       if(size==0)
       {
           cout<<"noting to be deleted";
           return;
       }
       arr[1]=arr[size];
       size=size-1;
       int i=1;
       while(i<size)
       {
           int left=i*2;
           int right=i*2+1;
           if(left<size&&arr[left]>arr[i])
           {
               swap(arr[left],arr[i]);
               i=left;
           }
           else if(right<size&&arr[right]>arr[i])
           {
               swap(arr[right],arr[i]);
               i=right;
           }
           else
           {
               return;
           }
       }
       
   }
};
int main()
{
    Heap h1;
    h1.MaxHeap(50);
    h1.MaxHeap(55);
    h1.MaxHeap(53);
    h1.MaxHeap(52);
     h1.MaxHeap(54);
     //h1.MaxHeap(80);
   h1.PrintMaxHeap();
  h1.DeleteMaxHeap();
   cout<<"\n";
   h1.PrintMaxHeap();
   return 0;
}