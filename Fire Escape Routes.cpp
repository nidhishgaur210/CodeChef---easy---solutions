#include<iostream>
#include<vector>
#define mod 1000000007
using namespace std;

vector<int> adjacency_list[100001];
int visited[100001];
int connected_component_size;

void DFS(int n){
    visited[n] = 1;
    connected_component_size++;
    for(int child : adjacency_list[n]){
        if(visited[child]==0){
            DFS(child);
        }
    }

}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n, e, a , b;
        cin>>n>>e;
        for(int i=1; i<=n; i++){
            visited[i] = 0;
            adjacency_list[i].clear();
        }

        for(int i=1; i<=e; i++){
            cin>>a>>b;
            adjacency_list[a].push_back(b);
            adjacency_list[b].push_back(a);
        }

        int count = 0;
        long long int ans = 1;
        for(int i=1; i<=n; i++){
            if(visited[i]==0){
                connected_component_size = 0;
                DFS(i);
                count++;

                ans = (ans * connected_component_size)%mod;
            }
        }
        cout<<count<<" "<<ans<<endl;

    }
    return 0;
}