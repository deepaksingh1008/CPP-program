#include<iostream>
using namespace std;
void reverseString(string &s,int i,int j)
{
    if(j<i)
    {
        return;
    }
    swap(s[i],s[j]);
    i++;
    j--;
    reverseString(s,i,j);
}

int main()
{

    string s="deepak";
    int l=s.length()-1;
    reverseString(s,0,l);
    cout<<s;
    return 0;
}
