//
// Created by Melissa Marián Granados Gómez on 13/02/18.
//

#include "Alumno.h"


Alumno::Alumno(std::string nombre, std::string matricula, char genero, std::string fechaNac, std::string gene): Persona (nombre, fechaNac, genero) {
  this -> matricula =matricula;
    this -> gene = gene;
}


void Alumno::setMaterias(Materia materias[]) {
    *this -> materias = materias[6];
}


Materia Alumno::getMateria() {
    return *this -> materias;
}

std::string Alumno::getMatricula() {
    return this -> matricula;
}

std::string Alumno::getGene() {
    return this-> gene;
}

std::string Alumno::to_String() {
    std::string temporal;
    temporal = getNombre() + matricula + getGenero() +  getFechaNac() + gene;
    return temporal;
}

Alumno::Alumno() {

}

