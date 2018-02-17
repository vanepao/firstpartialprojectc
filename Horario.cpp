//
// Created by Melissa Marián Granados Gómez on 13/02/18.
//

#include "Horario.h"

Horario::Horario(int horasf, int minutosf, int segundosf, int horasi, int minutosi, int segundosi) {
    inicio = *new FormatoHora(horasi, minutosi, segundosi);
    // instanciar
    fin = *new FormatoHora(horasf, minutosf, segundosf);

    aula = "";


}


FormatoHora Horario::getInicio() {
    return this->inicio;
    //asterisco va antes de this para indicar variable "esta clase"
}

void Horario::setInicio(FormatoHora inicio) {

    this ->inicio = inicio;
}

FormatoHora Horario::getFin() {
    return this -> fin;
}

void Horario::setFin(FormatoHora fin) {
this -> fin = fin;
}

FormatoHora Horario::CalculaDuracion() {
    int HI = inicio.getHora();
    int MI = inicio.getMinuto();
    int SI = inicio.getSegundo();
    int HF = fin.getHora();
    int MF = fin.getMinuto();
    int SF = fin.getSegundo();

    if (MF<MI) {
        HF = HF - 1;
        MF = MF + 60;
    } else {
        HF = HF;
        MF = MF;
    }

    if (SF<SI){
        MF = MF -1;
        SF = SF + 60;
    } else {
        MF = MF;
        SF = SF;
    }

    return *new FormatoHora (HF-HI, MF-MI, SF-SI);

}

std::string Horario::getAula() {
    return aula;
}

void Horario::setAula(std::string aula) {
this ->aula = aula;
}

Horario::Horario(FormatoHora inicio, FormatoHora fin, std::string aula) {
   this -> inicio = inicio;
    this ->fin = fin;
    this ->aula = aula;
}

std::string Horario::to_String() {
    std::string temporal = "";
    temporal = "De:" + this->inicio.to_String()+"a"+this->fin.to_String();
    return temporal;
}


