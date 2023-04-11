/*#include"bits/stdc++.h"
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

const int N = 1e5+2, MOD=1e9+7;
//representation of graphs


 signed main(){
      int  n,m;
      cin>>n>>m;
      vvi adj(n+1,vi(n+1,0));
      rep(i,0,m){
        int x,y;
        cin>>x>>y;
        adj[x][y]=1;
        adj[y][x]=1;
      }
      cout<<"adjacency matrix of above graph is given by :"<<endl;
      rep(i,1,n+1){
       rep(j,1,n+1)
         cout<<adj[i][j]<<"  ";
        cout<<endl;

      }

      return 0;
 }*/


/* #include"bits/stdc++.h"
 using namespace std;

 int main(){
         int a[100][100],m,n,i;
         cout<<"enter the number of edge:";
         cin>>n;
         for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            a[x][y]=1;
            a[y][x]=1;
         }

    cout<<"the adjacency matrix is "<<endl;
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
 }*/

 //representation of graph using list;

#include"bits/stdc++.h"
#include<list>
using namespace std;
int main(){
    list<int>a[5];
    for(int i=0;i<5;i++){
        int x,y;
        cin>>x,y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for(int i=0;i<5;i++){
    for(auto z: a[i]){
    cout<<z<<" ";
    }
    cout<<endl;
}
}
