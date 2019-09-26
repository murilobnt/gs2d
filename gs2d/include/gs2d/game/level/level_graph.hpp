#ifndef GS_LEVEL_GRAPH_HPP
#define GS_LEVEL_GRAPH_HPP

#include <bits/stdc++.h>
#include <iostream>
#include <list>
#include <memory>
#include <vector>

namespace gs {

class LevelGraph {
private:
  int V;
  std::list<unsigned short> *adjacents;
  std::vector<short> *distance;

public:
  explicit LevelGraph(int V);
  ~LevelGraph();
  void add_edge(unsigned short s, unsigned short k);
  void bfs(unsigned short s);
  void apsp();
  void print_distances();
};

} // namespace gs

#endif
