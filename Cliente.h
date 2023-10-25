#include <iostream>
using namespace std;

class Cliente {
    string Nombre, Genero, Mail, Membresia;
    int Edad, CodigoPostal, Visita;

public:
    Cliente(string nombre, string genero, string mail, int edad, int codigopostal, int visita, string membresia) {
      Nombre = nombre;
      Genero = genero;
      Mail = mail;
      Edad = edad;
      CodigoPostal = codigopostal;
      Visita = visita;
      Membresia = membresia;
    }

    Cliente() {
      Nombre = "Nombre";
      Mail = "Mail";
      Genero = "Genero";
      Edad = 0;
      CodigoPostal = 0;
      Visita = 0;
      Membresia = "Nuevo";
    }

    string getNombre() {
      return Nombre;
    }
    string getGenero() {
      return Genero;
    }
    string getMail() {
      return Mail;
    }
    string getMembresia() {
        return Membresia;
    }
    int getEdad() {
      return Edad;
    }
    int getCodigoPostal() {
        return CodigoPostal;
    }
    int getVisita() {
        return Visita;
    }

    void setNombre(string nombre) {
        Nombre = nombre;
    }
    void setGenero(string genero) {
        Genero = genero;
    }
    void setMail(string mail) {
        Mail = mail;
    }
    void setEdad(int edad) {
        Edad = edad;
    }
    void setCodigoPostal(int codigopostal) {
        CodigoPostal = codigopostal;
    }
    void setVisita(int visita) {
        Visita = visita;
    }
    void setMembresia(string membresia) {
        Membresia = membresia;
    }


    void ImprimeCliente() {
      cout << "Nombre: " << Nombre << endl;
      cout << "Genero: " << Genero << endl;
      cout << "Mail: " << Mail << endl;
      cout << "Edad: " << Edad << endl;
      cout << "Codigo Postal: " << CodigoPostal << endl;
      cout << "Visitas: " << Visita << endl;
      }

    void incrementarVisita() {
      Visita += 1;
    }    
};