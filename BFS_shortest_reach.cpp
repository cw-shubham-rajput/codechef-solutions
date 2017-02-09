// Program to print BFS traversal from a given source vertex. BFS(int s)
// traverses vertices reachable from s.
#include<iostream>
#include <list>

using namespace std;

// This class represents a directed graph using adjacency list representation
class Graph
{
	int V; // No. of vertices
	list<int> *adj; // Pointer to an array containing adjacency lists
public:
    int *level;
	Graph(int V); // Constructor
	void addEdge(int v, int w); // function to add an edge to graph
	void BFS(int s); // prints BFS traversal from a given source s
};

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V+1];
	level = new int[V+1];
	for(int i=1; i<=V; i++)
    {
        level[i] = 0;
    }
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); // Add w to v’s list.
}

void Graph::BFS(int s)
{
	// Mark all the vertices as not visited
	bool *visited = new bool[V+1];
	for(int i = 1; i <= V; i++)
		visited[i] = false;

	// Create a queue for BFS
	list<int> queue;

	// Mark the current node as visited and enqueue it
	visited[s] = true;
	queue.push_back(s);
	level[s] = 0;

	// 'i' will be used to get all adjacent vertices of a vertex
	list<int>::iterator i;

	while(!queue.empty())
	{
		// Dequeue a vertex from queue and print it
		s = queue.front();
		//cout << s << " ";
		queue.pop_front();

		// Get all adjacent vertices of the dequeued vertex s
		// If a adjacent has not been visited, then mark it visited
		// and enqueue it
		for(i = adj[s].begin(); i != adj[s].end(); ++i)
		{
			if(!visited[*i])
			{
				visited[*i] = true;
				queue.push_back(*i);
				level[*i] = level[s] + 1;
			}
		}
	}
}

// Driver program to test methods of graph class
int main()
{
	// Create a graph given in the above diagram
	int q;
	cin >> q;
	while(q>0)
    {
        int n,m;
        cin >> n >> m;
        Graph g(n);
        int u,v,s;
        for(int i=1; i<=m; i++)
        {
            cin >> u >> v;
            g.addEdge(u, v);
            g.addEdge(v, u);
        }
        cin >> s;
        g.BFS(s);
        for(int i=1; i<=n; i++)
        {
            if(i!=s)
            {
                if(g.level[i]==0)
                {
                    cout << -1 << " ";
                }
                else cout << g.level[i]*6 << " ";
            }
        }
        cout << endl;
        q--;
    }
	return 0;
}
