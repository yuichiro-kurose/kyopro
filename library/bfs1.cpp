// author: Yuichiro Kurose

auto bfs = [&]() -> vector<int> {
  vector<int> dist(n, -1);
  queue<int> que;
  dist[0] = 0;
  que.push(0);
  while (!que.empty()) {
    int u = que.front();
    que.pop();
    for (int v : g[u]) {
      if (dist[v] == -1) {
        dist[v] = dist[u] + 1;
        que.push(v);
      }
    }
  }
  return dist;
};
