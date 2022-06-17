  /*
  Proyecto creación de personajes de juego de Rol
  Jorge Lazarini González
  A00834023
  16/06/20222

  Este es el main, donde se corre todo el programa. El objetivo del
  proyecto es un programa en el cual se puedan crear Personajes
  para un juego de rol utilizando la programacion orientada a objetos.
  Dependiendo del tipo de personaje y sus atributos es cuanto daño el personaje
  hará y mitigará.

  */
  #include "barbaro.h" //bibliotecas para mi proyecto
  #include "mago.h"
  #include "personaje.h"
  #include "paladin.h"
  #include "grupocampana.h"
  #include <stdlib.h> //para utilizar std
  #include <iostream> //para imprimir
  #include <string>


  using std::string;

  //Funcion Main

  int main() {

    grupoCampana CAMP("Grupo de DND");


  //Declaramos variables temporales para construir objetos
    string t_nombre = "",t_personalidad = "", t_prin = "", t_hab = "";
    int t_nivelp = 0, t_vida = 0, t_intel = 0, t_fue = 0, t_def = 0, t_defA = 0, t_tun = 0;



  std::cout << "Bienvenido al creador de Personajes para tu juego de Rol!" << std::endl;
  std::cout << "Puedes crear varios personajes, pero por el momento empezaremos por crear uno." << std::endl;
  std::cout << "Deseas crear un personaje? Da 1." << std::endl;
  std::cout << "Para imprimir tu grupo da 2." << '\n';
  std::cout << "Salir. 3" << '\n';

  int opcion = 0;

  while (opcion < 3 && opcion > -1) {

    std::cin >> opcion;

  //Opciones de creacion o impresion para usuario
    switch (opcion) {
      case 1:{
        int opcion2 = 0;
        std::cout << "1. Crear un Barbaro" << '\n';
        std::cout << "2. Crear un Paladin" << '\n';
        std::cout << "3. Crear un Mago" << '\n';
        std::cout << "4. Menu principal" << '\n';
        std::cin >>opcion2;

        if (opcion2 == 1) {

          //Creacion del Barbaro

          std::cout << "Introduce el nombre de tu Barbaro: " << '\n';
          std::cin >> t_nombre;
          std::cout << "Introduce el nivel: " << '\n';
          std::cin >> t_nivelp;
          std::cout << "Introduce su tipo de personalidad (Solo una, Ejemplo, Enojon): " << '\n';
          std::cin >> t_personalidad;
          t_vida=100;   //Vida es predeterminada
          std::cout << "Introduce la inteligencia: " << '\n';
          std::cin >> t_intel;
          std::cout << "Introduce la Fuerza: " << '\n';
          std::cin >> t_fue;
          std::cout << "Introduce la defensa: " << '\n';
          std::cin >> t_def;
          t_prin = "Axe slash"; //Ataque principal es predeterminado
          t_hab = "Barbarian Rage"; //Habilidad predeterminada

          Personaje *temp_barbaro = new claseBarbaro(t_nombre,t_nivelp,t_personalidad,t_vida,t_intel,t_fue,t_def,t_prin,t_hab); //Creacion de objeto tipo Barbaro
          temp_barbaro -> personajeAtaca();   //Funcion de Polimorfismo
          std::cout <<'\n';
          temp_barbaro -> personajeDefiende(); //Funcion de Polimorfismo
          std::cout <<'\n';

          //Se agrega un objeto tipo Barbaro a la lista

          CAMP.addPersonaje(temp_barbaro);

          std::cout << "Personaje creado!" << std::endl;
          std::cout << "==========================================" << std::endl;
          std::cout << "Regresando..." << std::endl;
          std::cout << "Crear otro personaje? Da 1." << std::endl;
          std::cout << "Para imprimir tu grupo da 2." << '\n';
          std::cout << "Salir. 3" << '\n';

        }

        // Creacion del Paladin
        else if (opcion2 == 2) {
          std::cout << "Introduce el nombre de tu Paladin: " << '\n';
          std::cin >> t_nombre;
          std::cout << "Introduce el nivel: " << '\n';
          std::cin >> t_nivelp;
          std::cout << "Introduce su tipo de personalidad (Solo una, Ejemplo, Enojon): " << '\n';
          std::cin >> t_personalidad;
          t_vida=100;  //Vida es predeterminada
          std::cout << "Introduce la inteligencia: " << '\n';
          std::cin >> t_intel;
          std::cout << "Introduce la Fuerza: " << '\n';
          std::cin >> t_fue;
          std::cout << "Introduce la defensa: " << '\n';
          std::cin >> t_def;
          t_prin = "Sword slash"; //Ataque principal es predeterminado
          t_hab = "Paladins Guard"; //Habilidad predeterminada
          std::cout << "Introduce los puntos de armadura del paladin" << '\n';
          std::cin >> t_defA;

          Personaje *temp_paladin = new clasePaladin(t_nombre,t_nivelp,t_personalidad,t_vida,t_intel,t_fue,t_def,t_prin,t_hab,t_defA); //Creacion de objeto tipo Paladin

          temp_paladin -> personajeDefiende(); //Funcion de Polimorfismo
          std::cout <<'\n';
          temp_paladin -> personajeAtaca(); //Funcion de Polimorfismo
          std::cout <<'\n';

          //Se agrega un objeto tipo Paladin a la lista

          CAMP.addPersonaje(temp_paladin);

          std::cout << "Personaje creado!" << std::endl;
          std::cout << "==========================================" << std::endl;
          std::cout << "Regresando..." << std::endl;
          std::cout << "Crear otro personaje? Da 1." << std::endl;
          std::cout << "Para imprimir tu grupo da 2." << '\n';
          std::cout << "Salir. 3" << '\n';

        }

        //Creacion del Mago

        else if (opcion2 == 3) {
          std::cout << "Introduce el nombre de tu Mago: " << '\n';
          std::cin >> t_nombre;
          std::cout << "Introduce el nivel: " << '\n';
          std::cin >> t_nivelp;
          std::cout << "Introduce su tipo de personalidad (Solo una, Ejemplo, Enojon): " << '\n';
          std::cin >> t_personalidad;
          t_vida=100; //Vida es predeterminada
          std::cout << "Introduce la inteligencia: " << '\n';
          std::cin >> t_intel;
          std::cout << "Introduce la Fuerza: " << '\n';
          std::cin >> t_fue;
          std::cout << "Introduce la defensa: " << '\n';
          std::cin >> t_def;
          t_prin = "Rayo magico"; //Ataque principal es predeterminado
          t_hab = "Bola de Fuego"; //Habilidad predeterminada
          std::cout << "Introduce los puntos de la tunica del Mago (Le da mas inteligencia)" << '\n';
          std::cin >> t_tun;

          Personaje *temp_mago = new claseMago(t_nombre,t_nivelp,t_personalidad,t_vida,t_intel,t_fue,t_def,t_prin,t_hab,t_tun); //Creacion de objeto tipo Mago

          temp_mago -> personajeAtaca(); //Funcion de Polimorfismo
          std::cout <<'\n';
          temp_mago -> personajeDefiende(); //Funcion de Polimorfismo
          std::cout <<'\n';

          //Se agrega un objeto tipo mago a la lista

          CAMP.addPersonaje(temp_mago);

          std::cout << "Personaje creado!" << std::endl;
          std::cout << "==========================================" << std::endl;
          std::cout << "Regresando..." << std::endl;
          std::cout << "Crear otro personaje? Da 1." << std::endl;
          std::cout << "Para imprimir tu grupo da 2." << '\n';
          std::cout << "Salir. 3" << '\n';

        }

        else {
          //Indica que el usuario no creo nada

          std::cout << "Regresando..." << std::endl;
          std::cout << "Crear otro personaje? Da 1." << std::endl;
          std::cout << "Para imprimir tu grupo da 2." << '\n';
          std::cout << "Salir. 3" << '\n';

        }
        break;

      }

      //Imprime la lista

      case 2:{
        std::cout<<CAMP.getName()<<":";
        CAMP.printEquipo();
        break;
      }

      //Termina el programa

      case 3:{
        opcion=4;
        break;
      }
    }
  }
    return 0;
}
