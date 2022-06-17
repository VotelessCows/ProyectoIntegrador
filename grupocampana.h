/*
Proyecto creación de personajes de juego de Rol
Jorge Lazarini González
A00834023
16/06/20222
Esta es la clase grupCampana, una clase lista para guardar personajes.
Aquí se definen los métodos de la lista.
*/
#ifndef GRUPOCAMPANA_H
#define GRUPOCAMPANA_H

#include "personaje.h"
#include <iostream>
#include <string>
#include <list>

using std::string;

//declaro objeto grupoCampana

class grupoCampana {
private:
  string name;
  std::list <Personaje*> listaCampana;
public:
  grupoCampana();
  grupoCampana(string name);
  void addPersonaje(Personaje *p);
  void printEquipo();
  string getName();
};

grupoCampana::grupoCampana(){
  name="";
}

grupoCampana::grupoCampana(string nam){
  name=nam;
}

/*Para la funcion printEquipo, cree una lista, en lugar de un arreglo
El ciclo for recorre la lista donde se van agregando los Personajes
la lista recibe apuntadores de la clase Personaje, y utiliza sus metodos para
imprimir su nombre, nivel, personlaidad y todos sus atributos
*/
void grupoCampana::printEquipo(){
  std::list<Personaje*>::iterator i;
    for (i = listaCampana.begin(); i != listaCampana.end(); i++) {
      std::cout <<'\n';
      std::cout<<(*i)->getName() << std::endl;
      std::cout << "Nivel: " << (*i) ->getNivel() << std::endl;
      std::cout << "Personalidad: " << (*i) -> getPersonalidad() << std::endl;
      std::cout << "Vida: " << (*i) -> getVida() << std::endl;
      std::cout << "Inteligencia: " << (*i) -> getInteligencia() << std::endl;
      std::cout << "Fuerza: " << (*i) -> getFuerza() << std::endl;
      std::cout << "Defensa:" << (*i) -> getDefensa() << std::endl;
    }
}

void grupoCampana::addPersonaje(Personaje *p){
  listaCampana.push_back(p);
}

string grupoCampana::getName(){
  return name;
}
#endif
