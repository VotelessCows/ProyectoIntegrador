#ifndef PALADIN_H
#define PALADIN_H

#include <iostream>
#include <string>
#include "personaje.h"

using std::string;

class clasePaladin : public Personaje {
protected:

  string ataquePrincipal;
  string habilidadAtaque;
  int defensaArmadura;


public:
  clasePaladin(string nombre, int nivelp, string personalidad, int vida, int intel, int fue, int def, string prin, string hab, int defA)
  :Personaje(nombre, nivelp, personalidad, vida, intel, fue, def){
    ataquePrincipal = prin;
    habilidadAtaque = hab;
    defensaArmadura = defA;
  }

string getAtaque();
void setAtaque(string ataquePrincipal);
string getHabilidad();
void setHabilidad(string habilidadAtaque);
int  getDefensaA();
void setDefensaA(int defA);

void personajeAtaca();
void personajeDefiende();

};

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

void clasePaladin::personajeAtaca() {
  float ataque, tot;
  ataque = 0.3;
  tot = ataque * getFuerza();
  std::cout << "Paladin utiliza " << getAtaque() << " y hace " << tot << " de danio!" << std::endl;
}

void clasePaladin::personajeDefiende(){

  int op = 0;

  std::cout << "Que tipo de defensa deseas utilizar?" << std::endl;
  std::cout << "1. Defensa normal." << std::endl;
  std::cout << "2. Habilidad de defensa." << std::endl;
  std::cin >> op;
  float defend, tot;

  if (op == 1) {
    defend = 0.5;
    tot = defend * (getDefensa() + getDefensaA());
    std::cout << getName() << " se defiende y resiste " << tot << " puntos de danio!" << std::endl;
  }

  else if (op == 2) {
    defend = 1;
    tot = defend * (getDefensa() + getDefensaA());
    std::cout << getName() << " utiliza " << getHabilidad() << " y resiste " << tot << " puntos de danio!" << std::endl;
  }
  else {
    while (op > 2 ) {
    std::cout << "Ingresa una opcion correcta!" << std::endl;
    std::cin >> op;
    if (op == 1){
        defend = 0.5;
        tot = defend * (getDefensa() + getDefensaA());
        std::cout << getName() << " se defiende y resiste " << tot << " puntos de danio!" << std::endl;
      }
      else if (op == 2) {
        defend = 1;
        tot = defend * (getDefensa() + getDefensaA());
        std::cout << getName() << " se defiende y resiste " << tot << " puntos de danio!" << std::endl;
      }
    }
  }
}

#endif
