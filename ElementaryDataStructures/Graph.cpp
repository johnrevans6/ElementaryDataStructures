#include "Graph.h"
#include <iostream>


Graph::Graph(int deg){
	this->degree = deg;
	adj = new list<int>[deg];
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
}

void Graph::DFS(int s)
{
	bool* visited = new bool[degree];
	for (int i = 0; i < degree; i++)
	{
		visited[i] = false;
	}

	list<int> stack;

	visited[s] = true;
	stack.push_back(s);

	list<int>::iterator listit;

	while (!stack.empty())
	{
		s = stack.back();
		cout << s << " ";

		stack.pop_back();

		for (listit =adj[s].begin(); listit != adj[s].end(); listit++)
		{
			if (!visited[*listit])
			{
				visited[*listit] = true;
				stack.push_back(*listit);
			}
		}
		
	}
}

void Graph::BFS(int s)
{
	bool* visited = new bool[degree];
	for (int i = 0; i < degree; i++)
	{
		visited[i] = false;
	}

	list<int> queue;

	visited[s] = true;
	queue.push_back(s);

	list<int>::iterator listit;

	while (!queue.empty())
	{
		s = queue.front();
		cout << s << " ";
		queue.pop_front();
		
		for (listit = adj[s].begin(); listit != adj[s].end(); listit++)
		{
			if (!visited[*listit])
			{
				visited[*listit] = true;
				queue.push_back(*listit);
			}
		}

	}
}
