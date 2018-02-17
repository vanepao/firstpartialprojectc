//
// Created by Melissa Marián Granados Gómez on 13/02/18.
//

#ifndef PROYECTOPARCIAL_HORARIO_H
#define PROYECTOPARCIAL_HORARIO_H

#include "FormatoHora.h"


class Horario {

private:

    FormatoHora inicio;
    FormatoHora fin;
    std::string aula;


public:


    Horario (FormatoHora inicio, FormatoHora fin, std::string aula);
    Horario (int horasf, int minutosf, int segundosf, int horasi, int minutosi, int segundosi);

    std::string getAula ();
    void setAula(std::string aula);

    FormatoHora getInicio();
    void setInicio(FormatoHora inicio);

    FormatoHora getFin();
    void setFin(FormatoHora fin);

    FormatoHora CalculaDuracion();

    std::string to_String();




};


#endif //PROYECTOPARCIAL_HORARIO_H
