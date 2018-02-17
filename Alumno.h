//
// Created by Melissa Marián Granados Gómez on 13/02/18.
//

#ifndef PROYECTOPARCIAL_ALUMNO_H
#define PROYECTOPARCIAL_ALUMNO_H


#include <string>
#include "Materia.h"
#include "Persona.h"


class Alumno: virtual public Persona {

private:

    std::string matricula;
    std::string gene;
    Materia materias [6];

public:

    Alumno();

    Alumno(std::string nombre, std::string fechaNac, char genero, std::string matricula, std::string gene );
    void setMaterias(Materia materias []);
    Materia getMateria();
    std::string getMatricula();
    std::string getGene();
    std::string to_String();
};


#endif //PROYECTOPARCIAL_ALUMNO_H
