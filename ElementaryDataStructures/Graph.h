#include <list>
using namespace std;
#ifndef GRAPH
#define GRAPH


class Graph{
public:
	Graph(int deg);
	void addEdge(int v,int w);
	void BFS(int s);
	void DFS(int s);

private:
	int degree;
	list<int>* adj;
};




#endif