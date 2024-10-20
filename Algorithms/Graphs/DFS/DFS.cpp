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

const int N = 1e5+10;
vector <int> graph[N];
bool vis[N];

void dfs (int vertex) {
    /** Take action on vertex after entering
     *  the vertex
    **/
    vis[vertex] = true;

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
}