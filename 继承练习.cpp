//#include <algorithm>
//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//
//const int maxn = 1005;
//vector<int> Gp[maxn], Gs[maxn], to[maxn];
//int n, m, vis[maxn], ans = 0;
//
//int deep = 0;
//void DFS(vector<int> G[maxn], int u, int scr)
//{
//    for (int i = 0; i < G[u].size(); ++i) {
//        if (!vis[G[u][i]]) {
//            vis[G[u][i]] = true;
//            DFS(G, G[u][i], scr);
//        }
//    }
//    to[scr].push_back(u);
//}
//
//int main()
//{
//    cin >> n >> m;
//    for (int i = 0, u, v; i < m; ++i) {
//        cin >> u >> v;
//        Gp[u - 1].push_back(v - 1);
//        Gs[v - 1].push_back(u - 1);
//    }
//    for (int i = 0; i < n; ++i) {
//        memset(vis, 0, sizeof(vis));
//        DFS(Gp, i, i);
//    }
//    for (int i = 0; i < n; ++i) {
//        memset(vis, 0, sizeof(vis));
//        DFS(Gs, i, i);
//    }
//    for (int i = 0; i < n; ++i) {
//        memset(vis, 0, sizeof(vis));
//        for (int j = 0; j < to[i].size(); ++j) {
//            vis[to[i][j]] = 1;
//        }
//        bool flag = false;
//        for (int j = 0; j < n; ++j) {
//            if (vis[j] == 0) flag = true;
//        }
//        if (flag == false) ans++;
//    }
//    cout << ans;
//}