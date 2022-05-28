#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>
#include <string>

using std::string;

class Personaje {

private:
  string Nombre;
  int NivelP;
  string Personalidad;
  int Vida;
  string lista_personajes[1000];

public:
Personaje(string nombre, int nivelp, string personalidad, int vida);
void crearPersonaje();
string getName();
void setName(string nombre);
string getPersonalidad();
void setPersonalidad(string personalidad);
int getNivel();
void setNivel(int nivelp);
int getVida();
void setVida(int vida);
};

Personaje::Personaje(string nombre, int nivelp, string personalidad, int vida){
  Nombre = nombre;
  NivelP = nivelp;
  Personalidad = personalidad;
  Vida = vida;
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
void Personaje::setVida(int vida){
  Vida = vida;
}
int Personaje::getVida(){
  return Vida;
}

#endif
