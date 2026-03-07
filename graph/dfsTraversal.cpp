#include <iostream>
#include <vector>
using namespace std;


 void solve(vector<vector<int>>&adj,vector<int>&ans,vector<int>&visit,int node){
       visit[node]=1;
       ans.push_back(node);
       for(int i=0;i<adj[node].size();i++){
           if(!visit[adj[node][i]]){
               solve(adj,ans,visit,adj[node][i]);
           }
       }
   }
  
    vector<int> dfs(vector<vector<int>>& adj) {
        vector<int>ans;
        int n=adj.size();
        vector<int>visit(n,0);
        for(int i=0;i<n;i++){
            if(!visit[i]){
                solve(adj,ans,visit,i);
            }
        }
        return ans;
    }

int main(){
    vector<vector<int>> adj = {{2, 3, 1}, {0}, {0, 4}, {0}, {2}};
    vector<int>ans=dfs(adj);
}    