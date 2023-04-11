// #include<iostream>
// #include<vector>
// #include<list>
// using namespace std;
// class graph{
//    int v;
 /*  vector<list<int>> adj;
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

    cout<<"following is breadth first search starting vertx 2"<<endl;
    g1.bfs(2);
    

    return 0;

}*/

// dfs

#include<iostream>
#include<list>
#include<vector>
using namespace std;
class graph{
    private :
    int v;
    vector<list<int>> adj;
    public :
    graph(int v);
    void addedge(int u,int w);
    void dfs(int s);
    

};
graph::graph(int v)
{
    this->v=v;
    adj.resize(v);
}
void graph::addedge(int u,int w){
    adj[u].push_back(w);
}
void graph::dfs(int s)
{
    list<int> stack;
    vector<bool> visited;
    visited.resize(v,false);
    visited[s]=true;
    stack.push_back(s);
    while(!stack.empty())
    {
        s=stack.back();
        cout<<s<<" ";
        stack.pop_back();
        for(auto adjecent:adj[s])
        {
            if(!visited[adjecent]){
                 visited[adjecent]=true;
                 stack.push_back(adjecent);
            }
        }
    }



}
int main()
{
  graph g(4);
  g.addedge(0,1);
  
  g.addedge(1,4);
  g.addedge(2,0);
  g.addedge(2,3);
  g.addedge(3,3);
  cout<<"dfs traversal is "<<endl;
  g.dfs(2);

  return 0;
}