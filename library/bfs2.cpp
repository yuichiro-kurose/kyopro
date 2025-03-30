// author: Yuichiro Kurose

auto bfs = [&]() -> vector<vector<int>> {
  vector<vector<int>> dist(h, vector<int>(w, -1));
  queue<pair<int, int>> que;
  dist[0][0] = 0;
  que.push(make_pair(0, 0));
  while (!que.empty()) {
    auto p = que.front();
    que.pop();
    int x = p.first, y = p.second;
    for (int d = 0; d < 4; d++) {
      int nx = x + dx[d], ny = y + dy[d];
      if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
        continue;
      }
      if (s[nx][ny] == '#') {
        continue;
      }
      if (dist[nx][ny] != -1) {
        continue;
      }
      dist[nx][ny] = dist[x][y] + 1;
      que.push(make_pair(nx, ny));
    }
  }
  return dist;
};
