//
// Created by Melissa Marián Granados Gómez on 13/02/18.
//

#ifndef PROYECTOPARCIAL_PROFESOR_H
#define PROYECTOPARCIAL_PROFESOR_H

#include "Materia.h"
#include "Persona.h"
#include "Alumno.h"


#include <string>

class Profesor: virtual public Persona {

private:

    std::string nomina;

public:

    Profesor();
    Profesor (std::string nombre, std::string fechaNac, char genero, std::string nomina);
    std::string to_String();

};


#endif //PROYECTOPARCIAL_PROFESOR_H
