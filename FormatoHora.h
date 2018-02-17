//
// Created by Melissa Marián Granados Gómez on 13/02/18.
//

#ifndef PROYECTOPARCIAL_FORMATOHORA_H
#define PROYECTOPARCIAL_FORMATOHORA_H

#include <string>

class FormatoHora {

private:

    int horas;
    int minutos;
    int segundos;

    bool validaHrs(int horas);
    bool validaMS (int minutos, int segundos);

public:


    FormatoHora();
    FormatoHora(int horas, int minutos, int segundos);

    int getHora();
    int getMinuto();
    int getSegundo();

    void setHora(int horas);
    void setMinuto(int minutos);
    void setSegundo(int segundos);




    std::string to_String();

};


#endif //PROYECTOPARCIAL_FORMATOHORA_H
