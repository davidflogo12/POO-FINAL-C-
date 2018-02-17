//
// Created by balta on 16/02/2018.
//

#ifndef UNTITLED_PROFESOR_H
#define UNTITLED_PROFESOR_H

#include "Persona.h"
#include "Horario.h"
#include <string>
#include <array>
#include <iostream>

class Profesor : virtual public Persona{
private:
    std::string nomina;
    Horario horario;

public:
    Profesor();
    Profesor(std::string &a, std::string &b, char &c, std::string &nom);

    void setHorario(Horario);

    Horario getHorario();
    std::string getNomina();



};
#endif //UNTITLED_PROFESOR_H
