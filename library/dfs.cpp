// author: Yuichiro Kurose

auto dfs = [&](auto dfs, int u) -> void {
  vis[u] = true;
  for (int v : g[u]) {
    if (vis[v]) {
      continue;
    }
    dfs(dfs, v);
  }
};
