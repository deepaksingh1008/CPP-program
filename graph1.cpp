//#include<iostream>
/*#include<unordered_map>
#include<list>
using namespace std;
class graph{
     public :
     unordered_map<int,list<int>> adj;
     void add_edge(int u,int v,bool direction){
        adj[u].push_back(v);
        if(direction==0)
        {
            adj[v].push_back(u);
        }

     }
void printadjlist(){
    for(auto i:adj){
        cout<<i.first<<"->";
        for(auto j:i.second){
            cout<<j<<" ,";
        }
        cout<<endl;
    }
}



};
int main()
{
    int n;
    cout<<"enter the number of nodes"<<endl;
    cin>>n;
    cout<<"enter the number of edge"<<endl;
    int m;
    cin>>m;
    graph g;
    for(int i=0;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        g.add_edge(u,v,0);
    }
    g.printadjlist();
}*/
//#include<iostream>
/*#include<unordered_map>
#include<list>
using namespace std;

class graph{
       
       public :
       unordered_map<int,list<int>> adj;
       void add_edge(int v,int u,bool direction)
       {
           adj[v].push_back(u);
           if(direction==0)
           {
               adj[u].push_back(v);
           }
       }
       void printlist()
       {
           for(auto x: adj)
           {
               cout<<x.first<<"->";
               for(auto i:x.second)
               {
                   cout<<i<<" ";
               }
               cout<<endl;
           }
           
       }
};
int main()
{
    
}*/

//graph traversal
#include<iostream>
#include<vector>
#include<list>
using namespace std;
class graph{
   int v;
   vector<list<int>> adj;
   public :
        graph(int v);
        void addedge(int u,int w);
        void bfs(int s);

};
graph::graph(int v)
{
    this->v=v;
    adj.resize(v);
}
void graph::addedge(int u,int w){
    adj[u].push_back(w);
}
void graph::bfs(int s)
{
    vector<bool> visited;
    visited.resize(v,false);
    list<int> queue;
    visited[s]=true;
    queue.push_back(s);
    while(!queue.empty())
    {
        s=queue.front();
        cout<<s<<" ";
        queue.pop_front();
        for(auto adjecent:adj[s])
        {
            if(!visited[adjecent]){
                visited[adjecent]=true;
                queue.push_back(adjecent);
            }
        }
    }
}

int main()
{
    graph g1(4);
    g1.addedge(0,1);
    g1.addedge(0,2);
    g1.addedge(1,2);
    g1.addedge(2,0);
    g1.addedge(2,3);
    g1.addedge(3,3);
    

    return 0;

}