//
// Created by balta on 16/02/2018.
//

#ifndef UNTITLED_MATERIA_H
#define UNTITLED_MATERIA_H

#include <iostream>
#include <string>
#include "Horario.h"
#include "Profesor.h"

class Materia {

private:
    std::string nombre;
    std::string clave;
    Horario horario;
    Profesor maestro;

public:
    Materia(std::string noMat, std::string clave);
    Materia(std::string noMat, std::string clave, Horario horario, Profesor maestro);

    void setNombre(std::string nombre);

    void setMaestro(Profesor maestro);

    std::string getNombre();
    std::string getClave();
    Horario getHorario();
    Profesor getMaestro();

    std::string to_string();

}

;
#endif //UNTITLED_MATERIA_H
