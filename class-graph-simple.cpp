#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdexcept>
#include <vector>

class Vertex;

class Edge
{
    friend class Vertex;

private:
    double value = 0.0;
    Vertex *target = nullptr;

public:
    Edge() = default;
    Edge(double poids, Vertex *cible) : value(poids), target(cible){};

    int obtenir_index_target() const
    {
        return target ? target->index : -1; // -1 si pointeur nul
    }
};

class Graph;

class Vertex
{
    friend class Edge;
    friend class Graph;

private:
    int index;
    std::vector<Edge> edges;

public:
    Vertex(int nom) : index(nom){};

    void add_edge(Vertex *cible, double valeur)
    {
        edges.push_back(Edge(valeur, cible));
    }

    void visite() // visite sommets voisins
    {
        for (const Edge &edge : edges)
        {
            int targetIndex = edge.obtenir_index_target();
            if (targetIndex != -1)
            {
                std::cout << "Sommet cible : " << targetIndex << std::endl;
            }
        }
    }
};

class Graph
{
private:
    std::vector<Vertex> vertexes;

public:
    void add_vertex(int nom)
    {
        vertexes.push_back(Vertex(nom));
    }

    void add_edge(int source, int target, double poids)
    {
        Vertex *sourceVertex = nullptr;
        Vertex *targetVertex = nullptr;

        for (Vertex &vertex : vertexes)
        {
            if (vertex.index == source)
            {
                sourceVertex = &vertex;
            }
            if (vertex.index == target)
            {
                targetVertex = &vertex;
            }
        }

        sourceVertex->add_edge(targetVertex, poids);
    }

    void parcourir_graph() // Parcourt tous les sommets du graphe
    {
        for (const Vertex &vertex : vertexes)
        {
            vertex.visite();
        }
    }
};
