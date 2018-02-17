#include <iostream>
#include "Alumno.h"º


int main() {
Alumno alumni= *new Alumno("Melissa","08 de Febrero de 1998",'F',"A01410584","2015");
    FormatoHora formatohora= *new FormatoHora(8,45,3);
    FormatoHora formatohorafin= *new FormatoHora(10,30,1);
    Horario cuentahorario= *new Horario(formatohora,formatohorafin,"Aulas 3");
    Profesor profe= *new Profesor("León","26 de Septiembre de 1975",'H',"14101485");
    Materia materiamate= *new Materia("Matemáticas","12345",cuentahorario, profe);
    Materia materiaf= *new Materia("Fisica","35674",cuentahorario,profe);
    Materia materiaC= *new Materia("Sistemas","35674",cuentahorario,profe);
    Materia materiamusica= *new Materia("Música","35674",cuentahorario,profe);
    Materia materiar= *new Materia("REDES","35674",cuentahorario,profe);

    Materia materias [6]= {materiamate,materiaf,materiaC,materiamusica,materiar,};
    alumni.setMaterias(materias);
    std::cout<<alumni.to_String();

}