//
// Created by Melissa Marián Granados Gómez on 13/02/18.
//

#ifndef PROYECTOPARCIAL_MATERIA_H
#define PROYECTOPARCIAL_MATERIA_H

#include <string>
#include "Horario.h"
#include "Profesor.h"

class Materia {

private:

    std::string nombremateria;
    std::string clave;
    Horario *horario;
    Profesor *maestro;

public:

    Materia ();

    Materia (std::string nombremateria, std::string clave);

    Materia (std::string nombremateria, std::string clave, Horario horario, Profesor maestro);

    void setHorario (Horario horario);
    void setMaestro(Profesor maestro);

    std::string getNombreMateria ();
    std::string getClave();
    Horario getHorario();
    Profesor getMaestro();
    std::string to_String();



};


#endif //PROYECTOPARCIAL_MATERIA_H
