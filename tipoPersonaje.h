#ifndef TIPOPERSONAJE_H
#define TIPOPERSONAJE_H

#include <iostream>
#include <string>
#include "personaje.h"

using std::string;

class tipoPersonaje : public Personaje {
private:
  string ClasPer;
  string nuevaClas;
  tipoPersonaje(string nombre, int nivelp, string personalidad, int vida, string clasepersonaje)
  :Personaje(nombre, nivelp, personalidad, vida){}

public:
  void setClase(string clasePersonaje);
  string getClase();
  void cambiarClase(string nuevaClas);
  string cambioClase();
};

void tipoPersonaje::setClase(string clasepersonaje){
  ClasPer = clasepersonaje;
}
string tipoPersonaje::getClase(){
  return ClasPer;
}

void tipoPersonaje::cambiarClase(string nuevaClas){
  ClasPer = nuevaClas;
}

string tipoPersonaje::cambioClase(){
  std::cout << "La clase de tu personaje es:" << ClasPer << std::endl;
  return 0;
}

class atributosPersonaje {
private:
  string nombreAtributo;
  int valorAtributo;
  int valorExperiencia;
  string lista_atributos[1000];

};


#endif
