//
// Created by Melissa Marián Granados Gómez on 13/02/18.
//

#ifndef PROYECTOPARCIAL_PERSONA_H
#define PROYECTOPARCIAL_PERSONA_H


#include <string>

class Persona
{
private:
    std::string nombre;
    std::string fechaNac;
    char genero;
    float estatura;
    float peso;

public:

    Persona(std::string nombre, std::string fechaNac, char genero);

    Persona();

    void setEstatura(float estatura);
    void setPeso (float peso);
    std::string getNombre();
    std::string getFechaNac();
    char getGenero();
    float getEstatura();
    float getPeso();
    std::string to_String();


};


#endif //PROYECTOPARCIAL_PERSONA_H
