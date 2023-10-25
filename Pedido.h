#include <iostream>
using namespace std;
#include "Cliente.h"
#include "Articulo.h"

class Pedido {
private: 
Cliente clientePedido;
Articulo articuloPedido;

public:
Pedido(Cliente cliente, Articulo articulo) {
  clientePedido = cliente;
  articuloPedido = articulo;
}


Pedido() {
  clientePedido = Cliente();
  articuloPedido = Articulo();
  }
  Cliente getCliente() {
    return clientePedido;
  }
  Articulo getArticulo() {
    return articuloPedido;
  }
  void setCliente(Cliente cliente) {
    clientePedido = cliente;
  }
  void setArticulo(Articulo articulo) {
    articuloPedido = articulo;
  }

  void ImprimeInfoCliente() {
    cout << "Información del Cliente" << endl;
    clientePedido.ImprimeCliente();
  }


      void checaTipodeCliente() {
      
      if (clientePedido.getVisita() > 5)
        {
          clientePedido.setMembresia("Platino");
        }
        else if (clientePedido.getVisita() >= 3)
        {
          clientePedido.setMembresia("Oro");
        }
        else if (clientePedido.getVisita() >= 2)
        {
          clientePedido.setMembresia("Bronce");
        }
      
    }
};