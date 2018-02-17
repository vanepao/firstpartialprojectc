//
// Created by Melissa Marián Granados Gómez on 13/02/18.
//

#include "Persona.h"



Persona::Persona(std::string nombre, std::string fechaNac, char genero) {
    this -> nombre = nombre;
    this -> fechaNac = fechaNac;
    this -> genero = genero;
}

void Persona::setEstatura(float estatura) {
this->estatura =estatura;
}

std::string Persona::getNombre() {
    return nombre;
}

void Persona::setPeso(float peso) {
    this ->peso = peso;
}

std::string Persona::getFechaNac() {
    return fechaNac;
}

char Persona::getGenero() {
    return genero;
}

float Persona::getEstatura() {
    return estatura;
}

float Persona::getPeso() {
    return peso;
}

std::string Persona::to_String() {
    return 0;
}

Persona::Persona() {

}

