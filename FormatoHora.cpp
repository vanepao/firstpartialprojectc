//
// Created by Melissa Marián Granados Gómez on 13/02/18.
//

#include "FormatoHora.h"

FormatoHora::FormatoHora() {
    this->horas = horas;
    this->minutos = minutos;
    this->segundos = segundos;
}

std::string FormatoHora::to_String() {

    return  std::to_string(horas) + ":" + std::to_string(minutos) + ":" + std::to_string(segundos);
}

bool FormatoHora::validaHrs(int horas) {
    this->horas = horas;
    if ( 0 < horas <= 23){
        return true;
    }
}

bool FormatoHora::validaMS(int minutos, int segundos) {
    this->minutos=minutos;
    this->segundos=segundos;

    if (0 < minutos <= 59, 0 < segundos <=59){
        return true;
    }
}

int FormatoHora::getHora() {
    return horas;
}

int FormatoHora::getMinuto() {
    return minutos;
}

int FormatoHora::getSegundo() {
    return segundos;
}

void FormatoHora::setHora(int horas) {
    this ->horas = horas;
}

void FormatoHora::setMinuto(int minutos) {
    this -> minutos = minutos;
}

void FormatoHora::setSegundo(int segundos) {
    this -> segundos = segundos;
}
