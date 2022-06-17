#ifndef MAGO_H
#define MAGO_H

#include <iostream>
#include <string>
#include "personaje.h"

using std::string;

class claseMago : public Personaje {
protected:
  string hechizoPrincipal;
  string habilidadMago;
  int tunicaMago;
public:
  claseMago(string nombre, int nivelp, string personalidad, int vida, int intel, int fue , int def, string prin, string hab, int intelTu)
  :Personaje(nombre, nivelp, personalidad, vida, intel, fue, def){
    hechizoPrincipal = prin;
    habilidadMago = hab;
    tunicaMago = intelTu;
  }

  string getAtaque();
  void setAtaque(string hechizoPrincipal);
  string getHabilidad();
  void setHabilidad(string habilidadMago);
  int getTunica();
  void setTunica(int tunicaMago);

  void personajeAtaca();
  void personajeDefiende();
};

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
void claseMago::personajeAtaca() {

int op = 0;

std::cout << "Que tipo de ataque deseas utilizar?" << std::endl;
std::cout << "1. Ataque normal." << std::endl;
std::cout << "2. Habilidad" << std::endl;
std::cin >> op;
float ataque, tot;

if (op == 1) {
  ataque = 1;
  tot = ataque * getInteligencia();
  std::cout << getName() << " utiliza " << getAtaque() << " y hace " << tot << " de danio!" << std::endl;
  }

  else if (op == 2) {
    ataque = 2;
    tot = ataque * (getInteligencia() + getTunica());
    std::cout << getName() << " utiliza " << getHabilidad() << " y hace " << tot << " de danio!" << std::endl;
  }
  else {
    while (op > 2 ) {
    std::cout << "Ingresa una opcion correcta!" << std::endl;
    std::cin >> op;
    if (op == 1){
        ataque = 1;
        tot = ataque * getInteligencia();
        std::cout << getName() << " utiliza " << getAtaque() << " y hace " << tot << " de danio!" << std::endl;
      }
      else if (op == 2) {
        ataque = 2;
        tot = ataque * (getInteligencia() + getTunica());
        std::cout << getName() << " utiliza " << getHabilidad() << " y hace " << tot << " de danio!" << std::endl;
      }
    }
  }
}

void claseMago::personajeDefiende() {
  float defend, tot;
  defend = 0.3;
  tot = defend * getDefensa();
  std::cout << getName() << " puede resistir " << tot << " puntos de danio!" << std::endl;
}

#endif
