/*
You are given a list of cities. 
Each direct connection between two cities has its transportation cost (an integer bigger than 0). 
The goal is to find the paths of minimum cost between pairs of cities. 
Assume that the cost of each path (which is the sum of costs of all direct connections belongning to this path) 
is at most 200000. 
The name of a city is a string containing characters a,...,z and is at most 10 characters long.
*/

#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
template <class T>
class Nodo{
    public:
        T id;
        unordered_map<Nodo<T> *, int> arcos;        //los mapas llevan una llave(en este caso la llave es el nodo al que va) y un valor 

    Nodo(){
        id = NULL;
    }

    Nodo(T value){
        id = value;
    }

    void agregarArco(Nodo<T> *next, int peso){       // agregar arco con peso
        arcos[next]=peso;

    }

    void agregarArco(Nodo<T> *next){                // sobre carga de arco sin peso 
        arcos[next]=1;
    }

    void print(){
        cout<<id<<": ";
        for(auto i: arcos){                         // iterador automatico version corta
            cout<<i.first->id<<", "<<i.second<<"; ";

        }
        cout<<endl;
    }
};

template <class T>
class Graph{
    public:
    unordered_map<T, Nodo<T> *> vertices;

    void agregarVertice(T id){
        Nodo<T> *nuevo = new Nodo<T>(id);
        if(vertices.find(id) == vertices.end()){
            vertices[id] = nuevo;
        }else{
            cout<<"el nodo ya existe"<<endl;
        }

    }
    void agregarArco(T idFuente, T idDestino, int peso){
        vertices[idFuente]->agregarArco(vertices[idDestino], peso); //arco dirigido
        // vertices[idDestino]->agregarArco(vertices[idFuente], peso)   // agregando esto se vuelve no dirigido
    }
    void imprimirGrafo(){
        for(auto i: vertices){
            i.second->print();  // i es un par de id con nodo //  i.first te da el id   // i.second te da un apuntador a un nodo    // accede al metodo print del nodo 
        }

    }

};


int minDistance(Graph<int> grafo, int c1, int c2, int peso){
    if(c1 == c2){
        return;
    }
    else{
        int menor = peso, ct;
        for(auto i : grafo.vertices[c1]->arcos){
            if(i.first->id == c2){
                return peso;
            }
            else if(menor > i.second){

            }
            cout<<i.second
        }
        
    }
}

int main(){
    int s, n;
    Graph <int> grafo;
    cin>>s;
    cin>>n;
    map<string, int>ciudades;
    for (int i = 0; i < s; i++)
    {
        for(int j = 0; j < n; j++){
            grafo.agregarVertice(j+1);
        }
        grafo.imprimirGrafo();
        for (int j = 0; j < n; j++)
        {
            string nombre;

            cin>>nombre;
            ciudades[nombre] = j+1;
            int vecinos;
            cin>>vecinos;
            for(int z = 0; z<vecinos;z++){
                int v,p;
                cin>>v>>p;
                grafo.agregarArco(j+1,v,p);
            }
        }
        int caminos;
        cin>>caminos;
        for(int j = 0; j<caminos ; j++){
            string c1, c2;
            cin.ignore();
            cin>>c1>>c2;
            minDistance(grafo, ciudades[c1], ciudades[c2], 0);
        }

    }
    grafo.imprimirGrafo();
    return 0;
}