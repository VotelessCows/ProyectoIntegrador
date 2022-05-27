#ifndef HEADERPROYECTO_H
#define HEADERPROYECTO_H

#include <iostream>
#include <string>

using std::string;

class Personaje {

private:
  string Nombre;
  int NivelP;
  string Personalidad;
  string lista_personajes[1000];

public:
Personaje(string nombre, int nivelp, string personalidad);
void crearPersonaje();
string getName();
void setName(string nombre);
string getPersonalidad();
void setPersonalidad(string personalidad);
int getNivel();
void setNivel(int nivelp);
};

Personaje::Personaje(string nombre, int nivelp, string personalidad){
  Nombre = nombre;
  NivelP = nivelp;
  Personalidad = personalidad;
}

void Personaje::setName(string nombre){
Nombre = nombre;
};

string Personaje::getName(){
  return Nombre;
}
void Personaje::setPersonalidad(string personalidad) {
  Personalidad = personalidad;
}
string Personaje::getPersonalidad(){
  return Personalidad;
}
void Personaje::setNivel(int nivelp){
  NivelP = nivelp;
}
int Personaje::getNivel(){
  return NivelP;
}

class tipoPersonaje : public Personaje {
private:
  string ClasPer;
  string nuevaClas;
  tipoPersonaje(string nombre, int nivelp, string personalidad, string clasepersonaje)
  :Personaje(nombre, nivelp, personalidad){}

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
