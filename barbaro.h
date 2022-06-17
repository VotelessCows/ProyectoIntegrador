/*
Proyecto creación de personajes de juego de Rol
Jorge Lazarini González
A00834023
16/06/20222
Esta es la clase barbaro, una de las clases hijas de clase Personaje.
Aquí se definen los métodos del barbaor, así como su función de atacar y defender.
*/

#ifndef BARBARO_H
#define BARBARO_H

#include <iostream>
#include <string>
#include "personaje.h"

using std::string;

//declaro objeto claseBarbaro

class claseBarbaro : public Personaje {

//Variables de instancia

protected:
  string ataquePrincipal;
  string habilidadAtaque;

//Declaracion de constructor por default

public:
  claseBarbaro(string nombre, int nivelp, string personalidad, int vida, int intel, int fue, int def, string prin, string hab)
  :Personaje(nombre, nivelp, personalidad, vida, intel, fue, def){
    ataquePrincipal = prin;
    habilidadAtaque = hab;
  }

//Declaracion de metodos

string getAtaque();
void setAtaque(string ataquePrincipal);
string getHabilidad();
void setHabilidad(string habilidadAtaque);


void personajeAtaca(); //Funcion que sobrecargará en clase abstracta
void personajeDefiende(); // Funcion que sobrecargará en clase abstracta

};

void claseBarbaro::setAtaque(string prin){
  ataquePrincipal = prin;
};

string claseBarbaro::getAtaque(){
  return ataquePrincipal;
}

void claseBarbaro::setHabilidad(string hab){
  habilidadAtaque = hab;
}

string claseBarbaro::getHabilidad(){
  return habilidadAtaque;
}

void claseBarbaro::personajeAtaca() {

int op = 0;

std::cout << "Que tipo de ataque deseas utilizar?" << std::endl;
std::cout << "1. Ataque normal." << std::endl;
std::cout << "2. Habilidad" << std::endl;
std::cin >> op;
float ataque, tot;

if (op == 1) {
  ataque = 0.5;
  tot = ataque * getFuerza();
  std::cout << getName() << " utiliza " << getAtaque() << " y hace " << tot << " de danio!" << std::endl;
  }

  else if (op == 2) {
    ataque = 1;
    tot = ataque * getFuerza();
    std::cout << getName() << " utiliza " << getHabilidad() << " y hace " << tot << " de danio!" << std::endl;
  }
  else {
    while (op > 2 ) {
    std::cout << "Ingresa una opcion correcta!" << std::endl;
    std::cin >> op;
    if (op == 1){
        ataque = 0.5;
        tot = ataque * getFuerza();
        std::cout << getName() << " utiliza " << getAtaque() << " y hace " << tot << " de danio!" << std::endl;
      }
      else if (op == 2) {
        ataque = 1;
        tot = ataque * getFuerza();
        std::cout << getName() << " utiliza " << getHabilidad() << " y hace " << tot << " de danio!" << std::endl;
      }
    }
  }
}

void claseBarbaro::personajeDefiende() {
  float defend, tot;
  defend = 0.5;
  tot = defend * getDefensa();
  std::cout << getName() << " puede resistir " << tot << " puntos de danio!" << std::endl;
}


#endif
