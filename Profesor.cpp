//
// Created by Melissa Marián Granados Gómez on 13/02/18.
//

#include "Profesor.h"


Profesor::Profesor(std::string nombre, std::string fechaNac, char genero, std::string nomina) : Persona (nombre, fechaNac, genero) {
    this -> nomina = nomina;
}


std::string Profesor::to_String() {
    std::string temporal;
    temporal = "Nombre" + getNombre() + "FechaNac" + getFechaNac() + "Genero" + getGenero() + "Nomina" + nomina;
    return temporal;
}

Profesor::Profesor() {

}




