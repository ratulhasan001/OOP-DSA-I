#include <bits/stdc++.h>
using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, e;
    cin >> n >> e;
    int g[n + 1][n + 1];
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            g[i][j] = 0;
        }
    }
    while(e--) {
        char u, v;
        cin >> u >> v;
        g[u - 'A' + 1][v - 'A' + 1] = 1;
        g[v - 'A' + 1][u - 'A' + 1] = 1;
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << g[i][j] << " ";
        } 
        cout << '\n';
    }

    
    return 0;
}