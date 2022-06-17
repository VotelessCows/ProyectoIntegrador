/*
Proyecto creación de personajes de juego de Rol
Jorge Lazarini González
A00834023
16/06/20222
Esta es la clase mago, una de las clases hijas de clase Personaje.
Aquí se definen los métodos del mago, así como su función de atacar y defender.
*/

#ifndef MAGO_H
#define MAGO_H

#include <iostream>
#include <string>
#include "personaje.h"

using std::string;

//declaro objeto claseMago

class claseMago : public Personaje {

//variables de instancia

protected:
  string hechizoPrincipal;
  string habilidadMago;
  int tunicaMago;

  //declaracion de constructor por default

public:
  claseMago(string nombre, int nivelp, string personalidad, int vida, int intel, int fue , int def, string prin, string hab, int intelTu)
  :Personaje(nombre, nivelp, personalidad, vida, intel, fue, def){
    hechizoPrincipal = prin;
    habilidadMago = hab;
    tunicaMago = intelTu;
  }
// Declaraacion de metodos
  string getAtaque();
  void setAtaque(string hechizoPrincipal);
  string getHabilidad();
  void setHabilidad(string habilidadMago);
  int getTunica();
  void setTunica(int tunicaMago);

  void personajeAtaca();//Funcion que sobrecargará en clase abstracta
  void personajeDefiende(); // Funcion que sobrecargará en clase abstracta
};

//accessors

void claseMago::setAtaque(string prin) {
  hechizoPrincipal = prin;
}

string claseMago::getAtaque() {
  return hechizoPrincipal;
}

void claseMago::setHabilidad(string hab) {
  habilidadMago = hab;
}

string claseMago::getHabilidad() {
  return habilidadMago;
}

void claseMago::setTunica(int intelTu) {
  tunicaMago = intelTu;
}

int claseMago::getTunica(){
  return tunicaMago;
}

/*
personajeAtaca define que tipo de ataque y numero de danio que hará el personaje
utiliza los valores ingresados por el usuario para calcular el danio
@params
@return un ataque normal y un ataque de habilidad, utilizando atributos heredados.
*/

void claseMago::personajeAtaca() {

int op = 0;

//Usuario elige que usar

std::cout << "Que tipo de ataque deseas utilizar?" << std::endl;
std::cout << "1. Ataque normal." << std::endl;
std::cout << "2. Habilidad" << std::endl;
std::cin >> op;
float ataque, tot;

//Ataque normal

if (op == 1) {
  ataque = 1;
  tot = ataque * getInteligencia();
  std::cout << getName() << " utiliza " << getAtaque() << " y hace " << tot << " de danio!" << std::endl;
  }

  //Ataque de habilidad

  else if (op == 2) {
    ataque = 2;
    tot = ataque * (getInteligencia() + getTunica());
    std::cout << getName() << " utiliza " << getHabilidad() << " y hace " << tot << " de danio!" << std::endl;
  }
  else {
    while (op > 2 ) {   // En este loop, se revisa si el usuaria ingresa un aopcion valida de las que se presentan.
    std::cout << "Ingresa una opcion correcta!" << std::endl;
    std::cin >> op;

    //Ataque normal

    if (op == 1){
        ataque = 1;
        tot = ataque * getInteligencia();
        std::cout << getName() << " utiliza " << getAtaque() << " y hace " << tot << " de danio!" << std::endl;
      }

    //Ataque de habilidad
      else if (op == 2) {
        ataque = 2;
        tot = ataque * (getInteligencia() + getTunica());
        std::cout << getName() << " utiliza " << getHabilidad() << " y hace " << tot << " de danio!" << std::endl;
      }
    }
  }
}

/*
personajeDefiende es una funcion que define cuanto se defendera el personaje
utiliza los valores ingresados por usuario para calcular su defensa
@params
@return total de defensa.
*/

void claseMago::personajeDefiende() {
  float defend, tot;
  defend = 0.3;
  tot = defend * getDefensa();
  std::cout << getName() << " puede resistir " << tot << " puntos de danio!" << std::endl;
}

#endif
