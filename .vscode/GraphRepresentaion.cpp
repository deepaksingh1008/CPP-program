#include"bits/stdc++.h"
using namespace std;
class Graph{
    public :
   unordered_map<int,list<int>>adj;
   void addEdge(int u,int v,bool direction)
   {
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
        cout<<i.first<<"->";
        for(auto j :i.second)
        {
            cout<<j<<" ,";
        }
        cout<<endl;
    }
   }
   void BFS(int edge,int s)
   {
    vector<bool> visited;
    visited.resize(edge,false);
    queue<int> Queue;
    vector<int>ans;
   // for(int i=0;i<edge;i++)
    //{
        
        Queue.push(s);
        visited[s]=true;
        while(!Queue.empty())
        {
            int front=Queue.front();
            ans.push_back(front);
            Queue.pop();
            for(auto j : adj[s])
            {
                if(visited[j]!=true)
                {
                    Queue.push(j);
                    visited[j]=true;
                }
            }
        }
        //}
    //}
    for(auto i : ans)
    {
        cout<<i<<" ";
    }

   }


};
int main()
{
    int n;
    cout<<"enter the number of node"<<endl;
    cin>>n;
    int m;
    Graph g;
    cout<<"enter the number of vertex"<<endl;
    cin>>m;

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
    g.printList();
    g.BFS(m,0);
    //g.printBFS();

    return 0;
}



