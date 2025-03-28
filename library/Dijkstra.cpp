// author: Yuichiro Kurose

auto dijkstra = [&]() -> vector<int> {
  vector<int> dist(n, inf);
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que;
  dist[start] = 0;
  que.push(make_pair(0, start));
  while (!que.empty()) {
    int u = que.top().second;
    que.pop();
    for (auto [v, w] : g[u]) {
      if (dist[v] > dist[u] + w) {
        dist[v] = dist[u] + w;
        que.push(make_pair(dist[v], v));
      }
    }
  }
  return dist;
};
