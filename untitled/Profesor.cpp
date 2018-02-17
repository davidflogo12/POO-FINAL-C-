//
// Created by balta on 16/02/2018.
//

#include "Profesor.h"

Profesor::Profesor() {
    this->Persona::nombre = "";
    this->Persona::fechaNac = "";
    this->Persona::genero = 1;
    this->nomina = "";
}

void Profesor::setHorario(Horario) {
    this->horario;
}


Horario Profesor::getHorario() {
    return this->horario;
}


std::string Profesor::getNomina() {
    return nomina;
}

Profesor::Profesor(std::string &a, std::string &b, char &c, std::string &nom) {

}

