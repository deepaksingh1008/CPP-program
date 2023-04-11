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
bool checkPalindrone(string s,int i,int j)
{
    if(i>j)
    {
        return true;
    }
    if(s[i]!=s[j])
    {
        return false;
    }
    else{
        i++;
        j--;
        return checkPalindrone(s,i,j);
    }

}
int main()
{

    string s="abbbccbbba";
    string n=s;
    int l=s.length()-1;
   // reverseString(s,0,l);
   /*if(n==s)
   {
       cout<<n<<"  is palindrone";
   }
   else{
    cout<<n<<"  is not palindrone";
   }*/
   bool ans= checkPalindrone(s,0,l);
   cout<<ans;
       return 0;
}

