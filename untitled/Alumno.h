//
// Created by balta on 15/02/2018.
//

#ifndef UNTITLED_ALUMNO_H
#define UNTITLED_ALUMNO_H


#include "Persona.h"
#include "Horario.h"
#include "Materia.h"
#include <iostream>
#include <string>
#include <array>

class Alumno : virtual public Persona{
private:
    //Atributos
    std::string matricula, gene;
    Horario horario;
    Materia materias[6] = {};
public:
    //Constructor
    Alumno();
    //Metodos
    Alumno(std::string &mat, std::string &gen, char &c, std::string &b, std::string &a);
    Materia*materia;


    void setHorario(Horario);
    void setMaterias(Materia **);

    Horario getHorario();
    Materia* getMaterias();
    std::string getMatricula();
    std::string getGene();
};


#endif //PROYECTO_ALUMNO_H


