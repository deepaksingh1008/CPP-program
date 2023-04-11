#include<iostream>
using namespace std;

class linklist
{
public:
    int data;
    linklist *next;

    linklist(int val)
    {
        data=val;
        next=NULL;
    }
};
void display(linklist* start )
{
    while(start!=NULL)
    {
        cout<<start->data<<"-->";
        start=start->next;
    }

}
int main()
{
   linklist* start;
   start=new linklist(5);
   start->next=new linklist(6);
   start->next->next=new linklist(7);
   display(start);
   return 0;

}
