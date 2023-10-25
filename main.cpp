#include <iostream>
using namespace std;

#include "Pedido.h"


Cliente clientes[10];
Articulo articulos[10];
Pedido pedidos[10];

int numCliente = 0;
int visita = 0;
int numPedido = 0;



void AltaCliente() {
    cout << endl;
    string nombre, genero, mail, membresia;
    int edad, codigopostal, visita;

    string continuar = "Si";
    while (continuar == "Si") {
      cout << "Favor de llenar la siguiente información del cliente:" << endl;

      cout << "Nombre: ";
      cin >> nombre;
      cout << "Genero: ";
      cin >> genero;
      cout << "Mail: ";
      cin >> mail;
      cout << "Edad: ";
      cin >> edad;
      cout << "Codigo Postal: ";
      cin >> codigopostal;
      
      //cout << "Cuantas visitas ha realizado?";
      //cin >> visitas;
      //TipodeCliente(visitas);

      clientes[numCliente] = Cliente(nombre, genero, mail, edad, codigopostal, 0, "Nuevo");
      
      numCliente += 1;

      cout << endl;
      cout << "Se ha registrado correctamente, su numero de cliente es: " << numCliente << endl;
      cout << "Deseas dar de alta otro cliente? (Si/No): ";
      cin >> continuar;

      }

}

void HacerPedido() {
    cout << endl;
    int cliente;
    cout << "Ingrese su numero de cliente: ";
    cin >> cliente;
    string articulo;
    cout << "Ingrese el articulo a comprar: ";
    cin >> articulo;

    articulos[numPedido] = Articulo(articulo);
    pedidos[numPedido] = Pedido(clientes[cliente-1],articulos[numPedido]);
    
    cout << endl;
    cout << "Tu pedido fue realizado con éxito!" << endl;
    cout << "Numero de pedido: " << numPedido+1 << endl;

    clientes[cliente].incrementarVisita();
    cout << clientes[cliente].getVisita() << endl;
    pedidos[numPedido].checaTipodeCliente();

    numPedido += 1;


    cout << endl;

}


void DesplegarInformacionCliente(){
    cout << endl;
    string visita;
    string cliente;
    int index;
    cout << "Ingrese su mail: ";
    cin >> cliente;
    cout << "Los articulos comprados son:" << endl;      
    for (int i = 0; i < 10; i++) {
        if (pedidos[i].getCliente().getMail() == cliente) {
            index = i;
            cout << pedidos[i].getArticulo().getArticulo_() << endl;
            visita = pedidos[i].getCliente().getMembresia();
        }
    }
    cout << clientes[index].getVisita() << endl;
    


}



int main() {
int opcion = 0;
    while (opcion != 5) {
        cout << endl << "Registra clientes y pedidos" << endl
                    << "................................" << endl;
        cout << endl 
             << "1) Dar de alta cliente" << endl
             << "2) Hacer Pedido" << endl
             << "3) Desplegar Información de Pedidos" << endl
             << "4) Salir" << endl
             << "Elige una opción: ";      
        cin >> opcion;

        if (opcion == 1) {
            AltaCliente();
        }
        else if (opcion == 2) {
            HacerPedido();
        }
        else if (opcion == 3) {
            DesplegarInformacionCliente();
        }
        else if (opcion == 5) {}

        else {
            cout << endl << "Favor de ingresar una opción válida" << endl;
        }

    }

            
};
    

  