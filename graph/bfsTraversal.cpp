#include<iostream>
#include<vector>
#include<queue>
using namespace std;


vector<int> bfs(vector<vector<int>> &adj) {
    vector<int> ans;
    int n = adj.size();

    vector<int> visit(n, 0);
    queue<int> q;

    q.push(0);
    visit[0] = 1;

    while(!q.empty()) {
        int node = q.front();
        q.pop();

        ans.push_back(node);

        for(int i = 0; i < adj[node].size(); i++) {
            int neigh = adj[node][i];
            if(!visit[neigh]) {
                visit[neigh] = 1;
                q.push(neigh);
            }
        }
    }

    return ans;
}


int main(){
    vector<vector<int>> adj = {{2, 3, 1}, {0}, {0, 4}, {0}, {2}};
    vector<int>ans=bfs(adj);
}