//
// Created by Melissa Marián Granados Gómez on 13/02/18.
//

#include "Materia.h"




Materia::Materia(std::string nombremateria, std::string clave) {
    this -> nombremateria = nombremateria;
    this -> clave = clave;
}

Materia::Materia(std::string nombremateria, std::string clave, Horario horario, Profesor maestro){
    this -> nombremateria = nombremateria;
    this -> clave = clave;
    *this -> horario = horario;
    *this -> maestro = maestro;

}

std::string Materia::getNombreMateria(){
    return nombremateria ;
}

std::string Materia::getClave() {
    return clave;
}

Horario Materia::getHorario() {

    return *this->horario;
}

Profesor Materia::getMaestro() {

    return *this->maestro;
}

std::string Materia::to_String() {
    std::string temporal;
    temporal = "Nombre:" + nombremateria + "Clave" + clave + "Maestro";
     return temporal;
}

void Materia::setHorario(Horario horario) {
*this -> horario = horario;
}

void Materia::setMaestro(Profesor maestro) {
*this -> maestro = maestro;
}

Materia::Materia() {


}
