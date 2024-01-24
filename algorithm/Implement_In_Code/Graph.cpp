#include <iostream>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Graph 
{
private:
	unordered_map<string, unordered_set<string>> adjList;

public:

	bool addVertex(string vertex)
	{
		if(adjList.count(vertex) == 0)
		{
			adjList[vertex];
			return true;
		}
		return false;
	}

	bool addEdge(string vertex1, string vertex2)
	{
		if (adjList.count(vertex1) != 0 && adjList.count(vertex2) != 0)
		{
			// vertex1에다가 vertex2 값을 대입
			// vertex2에다가 vertex1 값을 대입
			adjList.at(vertex1).insert(vertex2);
			adjList.at(vertex2).insert(vertex1);
			return true;
		}
		return false;
	}

	bool removeEdge(string vertex1, string vertex2)
	{
		if (adjList.count(vertex1) != 0 && adjList.count(vertex2) != 0)
		{
			adjList.at(vertex1).erase(vertex2);
			adjList.at(vertex2).erase(vertex1);
			return true;
		}
		return false;
	}

	bool removeVertex(string vertex)
	{
		if (adjList.count(vertex) == 0) return false;
		for (auto otherVertex : adjList.at(vertex))
		{
			adjList.at(otherVertex).erase(vertex);
		}
		adjList.erase(vertex);
		return true;
	}

	void printGraph()
	{
		for (auto [vertex,edges]: adjList)
		{
			cout << vertex << " : [ ";
			for (auto edge : edges)
			{
				cout << edge << " ";
			}
			cout << "]" << endl;
		}
	}


};


int main()
{

	Graph* MyGraph = new Graph();

	MyGraph->addVertex("A");
	MyGraph->addVertex("B");
	MyGraph->addVertex("C");
	MyGraph->addVertex("D");

	MyGraph->addEdge("A","B");
	MyGraph->addEdge("A","C");
	MyGraph->addEdge("B","D");
	MyGraph->addEdge("C","D");
	MyGraph->addEdge("A","D");

	MyGraph->printGraph();
	MyGraph->removeVertex("D");
	MyGraph->printGraph();
	//MyGraph->removeEdge("A", "B");
	//MyGraph->printGraph();
	
	return 0;
}