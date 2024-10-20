#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define RFOR(i, a, b) for (int i=a; i>=b; i--)
# define all(x) (x).begin(), (x).end()
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define zeus ios_base::sync_with_stdio(false); cin.tie(NULL);

/*
QUESTION =>
Given n, i.e. total number of nodes in an undirected graph numbered from 1 to n and an integer e, i.e. total number of edges in the graph. 
Calculate the total number of connected components in the graph. 
A connected component is a set of vertices in a graph that are linked to each other by paths.
*/

const int N = 1e5+10;
vector <int> graph[N];
// vector <vector<int>> cc;
vector <int> current_cc;
bool vis[N];

void dfs (int vertex) {
    /** Take action on vertex after entering
     *  the vertex
    **/
    vis[vertex] = true;
    // current_cc.push_back(vertex);

    for (int child : graph[vertex]) {
        /** Take action on child before entering
         *  the child node
        **/
        if (vis[child]) continue;


        dfs(child);
        /** Take action on child after exiting
         *  the child node
        **/

    }
    /** Take action on vertex after exiting
     *  the vertex
    **/
}

int main(){
    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int v1, v2; cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    int ct = 0;
    for (int i = 1; i <= n; i++) {
        if (vis[i]) continue;
        // current_cc.clear();
        dfs(i);
        // cc.push_back(current_cc);
        ct++;
    }
    cout << ct << endl;
}