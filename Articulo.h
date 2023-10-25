#include <iostream>
using namespace std;


class Articulo {
private:
  string Articulos;

public:
  Articulo(string articulos) {
    Articulos = articulos;
  }  
  
  Articulo() {
    Articulos = "No hay articulo";
  }

  string getArticulo_() {
    return Articulos;
  }

  void setArticulo(string artiuclos) {
    Articulos = artiuclos;
  }

  void DespligaArticulo() {
    cout << "Articulo: " << Articulos << endl; 
    
  }
};