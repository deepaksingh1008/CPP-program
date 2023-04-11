#include"bits\stdc++.h"
using namespace std;
class Graph{
    public :
    vector<list<int>> adj;
    void addEdge(int u,int v,bool direction)
    {
         adj[u].push_back(v);
         if(direction==0)
         {
            adj[v].push_back(u);

         }
    }
    void printGraph()
    {
        for(auto i :adj)
        {
            cout<<i<<"->";
            for(auto j : i)
            {
                cout<<j<<",";
            }
            cout<<endl;
        }
    }
   
};
int main()
{
    int n;
    cout<<"enter the number of node"<<endl;
    cin>>n;
    int m;
    cout<<"enter the number of edge"<<endl;
    cin>>m;
    Graph g;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
    g.printGraph();
    return 0;
}