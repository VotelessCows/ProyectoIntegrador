/*
Proyecto creación de personajes de juego de Rol
Jorge Lazarini González
A00834023
16/06/20222
Esta es la clase Paladin, una de las clases hijas de clase Personaje.
Aquí se definen los métodos del Paladin, así como su función de atacar y defender.
*/

#ifndef PALADIN_H
#define PALADIN_H

#include <iostream>
#include <string>
#include "personaje.h"

using std::string;

//declaro objeto clasePaladin

class clasePaladin : public Personaje {


//Variables de instancia

protected:

  string ataquePrincipal;
  string habilidadAtaque;
  int defensaArmadura;

  //declaracion de constructor por default

public:
  clasePaladin(string nombre, int nivelp, string personalidad, int vida, int intel, int fue, int def, string prin, string hab, int defA)
  :Personaje(nombre, nivelp, personalidad, vida, intel, fue, def){
    ataquePrincipal = prin;
    habilidadAtaque = hab;
    defensaArmadura = defA;
  }

  //Declaracion de metodos

string getAtaque();
void setAtaque(string ataquePrincipal);
string getHabilidad();
void setHabilidad(string habilidadAtaque);
int  getDefensaA();
void setDefensaA(int defA);

void personajeAtaca(); //Funcion que sobrecargará en clase abstracta
void personajeDefiende(); // Funcion que sobrecargará en clase abstracta

};

//accessors

void clasePaladin::setAtaque(string prin){
ataquePrincipal = prin;
}

string clasePaladin::getAtaque(){
  return ataquePrincipal;
}

void clasePaladin::setHabilidad(string hab){
  habilidadAtaque = hab;
}

string clasePaladin::getHabilidad() {
  return habilidadAtaque;
}

void clasePaladin::setDefensaA(int defA) {
  defensaArmadura = defA;
}

int clasePaladin::getDefensaA(){
  return defensaArmadura;
}

/*
personajeAtaca define que tipo de ataque y numero de danio que hará el personaje
@params
@return un ataque normal y un ataque de habilidad, utilizando atributos heredados.
*/

void clasePaladin::personajeAtaca() {
  float ataque, tot;
  ataque = 0.3;
  tot = ataque * getFuerza();
  std::cout << "Paladin utiliza " << getAtaque() << " y hace " << tot << " de danio!" << std::endl;
}

/*
personajeDefiende define que tipo de defensa y cuanto se cubre
utiliza los valores ingresados por el usuario para calcular el danio mitigado
@params
@return un stance de defensa y una defensa de habilidad, utilizando atributos heredados.
*/

void clasePaladin::personajeDefiende(){

  int op = 0;

  //Usuario elige que usar

  std::cout << "Que tipo de defensa deseas utilizar?" << std::endl;
  std::cout << "1. Defensa normal." << std::endl;
  std::cout << "2. Habilidad de defensa." << std::endl;
  std::cin >> op;
  float defend, tot;

//Ataque normal

  if (op == 1) {
    defend = 0.5;
    tot = defend * (getDefensa() + getDefensaA());
    std::cout << getName() << " se defiende y resiste " << tot << " puntos de danio!" << std::endl;
  }

  //Ataque de habilidad

  else if (op == 2) {
    defend = 1;
    tot = defend * (getDefensa() + getDefensaA());
    std::cout << getName() << " utiliza " << getHabilidad() << " y resiste " << tot << " puntos de danio!" << std::endl;
  }
  else { //En este loop, se revisa si el usuario ingresa una opcion valida de las que se presentan.
    while (op > 2 ) {
    std::cout << "Ingresa una opcion correcta!" << std::endl;
    std::cin >> op;

    //Otra vez, ataque normal

    if (op == 1){
        defend = 0.5;
        tot = defend * (getDefensa() + getDefensaA());
        std::cout << getName() << " se defiende y resiste " << tot << " puntos de danio!" << std::endl;
      }

      //Otra vez, ataque de habilidad

      else if (op == 2) {
        defend = 1;
        tot = defend * (getDefensa() + getDefensaA());
        std::cout << getName() << " se defiende y resiste " << tot << " puntos de danio!" << std::endl;
      }
    }
  }
}

#endif
