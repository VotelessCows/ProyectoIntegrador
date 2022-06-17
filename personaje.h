/*
Proyecto creación de personajes de juego de Rol
Jorge Lazarini González
A00834023
16/06/20222
Esta clase define el tipo objeto personaje, la cual contiene las clases heredadas.
*/

#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>
#include <string>


using std::string;

// Declaracion de clase Personaje, clase abstracta

class Personaje {

// Variables de instancia

protected:
  string Nombre;
  int NivelP;
  string Personalidad;
  int Vida;
  int Inteligencia;
  int Fuerza;
  int Defensa;

// declaración de metodos del objeto

public:
Personaje(string nombre, int nivelp, string personalidad, int vida, int intel, int fue, int def); // constructor
void crearPersonaje();
string getName();
void setName(string nombre);
string getPersonalidad();
void setPersonalidad(string personalidad);
int getNivel();
void setNivel(int nivelp);
int getVida();
void setVida(int vida);
int getInteligencia();
void setInteligencia(int intel);
int getFuerza();
void setFuerza(int fue);
int getDefensa();
void setDefensa(int def);

virtual void personajeAtaca() = 0; // metódos abstractos serán sobreescritos
virtual void personajeDefiende() = 0;
};

//constructor por default

Personaje::Personaje(string nombre, int nivelp, string personalidad, int vida, int intel, int fue, int def){
  Nombre = nombre;
  NivelP = nivelp;
  Personalidad = personalidad;
  Vida = vida;
  Inteligencia = intel;
  Fuerza = fue;
  Defensa = def;
}

// metodos de acceso para el objeto, se tienen los getters y setters.

void Personaje::setName(string nombre){
Nombre = nombre;
}

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

void Personaje::setInteligencia(int intel){
  Inteligencia = intel;
}

int Personaje::getInteligencia(){
  return Inteligencia;
}

void Personaje::setFuerza(int fue){
  Fuerza = fue;
}

int Personaje::getFuerza(){
  return Fuerza;
}

void Personaje::setDefensa(int def){
  Defensa = def;
}

int Personaje::getDefensa() {
    return Defensa;
}

#endif
