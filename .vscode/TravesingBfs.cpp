#include"bits/stdc++.h"
using namespace std;
class Graph{
    public :
    vector<vector<int,list<int>>> adj;
    void addEdge(int u,int v,bool direction){
        adj[u].push_back(v);
        if(direction==0)
        {
            adj[v].push_back(u);
        }

    }
    void printList()
    {
        for(auto i : adj)
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
    cout<<"enter the number of nodes";
    cin>>n;
    int m;
    cout<<"enter the number of vertex";
    cin>>m;
    Graph g;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);

    }
    g.printList();

    return 0;

}