// C++ program to print connected components in
// an undirected graph
#include <iostream>
#include <list>
using namespace std;
 
// Graph class represents a undirected graph
// using adjacency list representation
class Graph {
    int V; // No. of vertices
 
    // Pointer to an array containing adjacency lists
    list<int>* adj;
 
    // A function used by DFS
    void DFSUtil(int v, bool visited[]);
 
public:
    Graph(int V); // Constructor
    ~Graph();
    void addEdge(int v, int w);
    void connectedComponents();
};
 
// Method to print connected components in an
// undirected graph
void Graph::connectedComponents()
{
    // Mark all the vertices as not visited
    bool* visited = new bool[V];
    int count = 0;
    for (int v = 0; v < V; v++)
        visited[v] = false;
 
    for (int v = 0; v < V; v++) {
       
        if (visited[v] == false) {
            // print all reachable vertices
            // from v
            DFSUtil(v, visited);
            count++;
            cout << "\n\n";
        }
        
    }
    cout << "This is the final" << count;
    delete[] visited;
}
 
void Graph::DFSUtil(int v, bool visited[])
{
    // Mark the current node as visited and print it
    visited[v] = true;
    cout << v << " ";
 
    // Recur for all the vertices
    // adjacent to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
Graph::~Graph() { delete[] adj; }
 
// method to add an undirected edge
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}
 
// Driver code
int main()
{
    // Create a graph given in the above diagram
    Graph g(101); // 5 vertices numbered from 0 to 4
    g.addEdge(1,83);
    g.addEdge(1 ,86);
    g.addEdge(3, 4);
    g.addEdge(3 ,56);
    g.addEdge(4 ,21);
    g.addEdge(4 ,52);
    g.addEdge(4 ,90);
    g.addEdge(5 ,56);
    g.addEdge(5 ,86);
    g.addEdge(5 ,99);
    g.addEdge(6, 8);
    g.addEdge(6 ,36);
    g.addEdge(6 ,37);
    g.addEdge(6 ,43);
    g.addEdge(6 ,77);
    g.addEdge(7 ,45);
    g.addEdge(7 ,75);
    g.addEdge(9 ,42);
    g.addEdge(9 ,90);
    g.addEdge(9 ,99);
    g.addEdge(10 ,48);
    g.addEdge(10 ,51);
    g.addEdge(10 ,62);
    g.addEdge(11 ,27);
    g.addEdge(11 ,57);
    g.addEdge(11 ,83);
    g.addEdge(11 ,99);
    g.addEdge(12 ,41);
    g.addEdge(12 ,70);
    g.addEdge(13 ,38);
    g.addEdge(13 ,57);
    g.addEdge(13 ,78);
    g.addEdge(14 ,22);
    g.addEdge(14 ,37);
    g.addEdge(16 ,61);
    g.addEdge(16 ,88);
    g.addEdge(17 ,24);
    g.addEdge(17 ,32);
    g.addEdge(17 ,34);
    g.addEdge(17 ,35);
    g.addEdge(17 ,42);
    g.addEdge(17 ,54);
    g.addEdge(18 ,35);
    g.addEdge(19 ,25);
    g.addEdge(19 ,68);
    g.addEdge(19 ,81);
    g.addEdge(19 ,99);
    g.addEdge(20 ,39);
    g.addEdge(20 ,52);
    g.addEdge(21 ,84);
    g.addEdge(25 ,54);
    g.addEdge(26 ,56);
    g.addEdge(26 ,61);
    g.addEdge(27 ,55);
    g.addEdge(28 ,47);
    g.addEdge(29 ,50);
    g.addEdge(30 ,62);
    g.addEdge(31 ,49);
    g.addEdge(31 ,80);
    g.addEdge(34 ,52);
    g.addEdge(34 ,56);
    g.addEdge(35 ,69);
    g.addEdge(36 ,42);
    g.addEdge(37 ,60);
    g.addEdge(40 ,99);
    g.addEdge(42 ,63);
    g.addEdge(42 ,71);
    g.addEdge(42 ,79);
    g.addEdge(42 ,84);
    g.addEdge(43 ,45);
    g.addEdge(43 ,54);
    g.addEdge(44 ,65);
    g.addEdge(45 ,57);
    g.addEdge(47 ,94);
    g.addEdge(47 ,96);
    g.addEdge(48 ,75);
    g.addEdge(49 ,85);
    g.addEdge(50 ,100);
    g.addEdge(51 ,85);
    g.addEdge(51 ,100);
    g.addEdge(52 ,97);
    g.addEdge(54 ,64);
    g.addEdge(54 ,86);
    g.addEdge(58 ,61);
    g.addEdge(59 ,74);
    g.addEdge(59 ,79);
    g.addEdge(62 ,92);
    g.addEdge(64 ,94);
    g.addEdge(65 ,71);
    g.addEdge(65 ,78);
    g.addEdge(65 ,84);
    g.addEdge(68 ,81);
    g.addEdge(69 ,85);
    g.addEdge(71 ,80);
    g.addEdge(77 ,84);
    g.addEdge(78 ,99);
    g.addEdge(84 ,97);
    g.addEdge(86 ,92);
    g.addEdge(91 ,93);
    g.addEdge(95 ,97);


    cout << "Following are connected components \n";
    g.connectedComponents();
 
    return 0;
}
