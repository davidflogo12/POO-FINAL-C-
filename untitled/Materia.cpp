//
// Created by balta on 16/02/2018.
//

#include "Materia.h"
Materia::Materia(std::string noMat, std::string clave) {
    this->nombre = noMat;
    this->clave = clave;
}
Materia::Materia(std::string noMat, std::string clave, Horario horario, Profesor maestro, Profesor maestro1)
        : maestro(maestro1) {
    this->clave= clave;
    this->horario = horario;
    this->maestro = maestro;
    this->nombre = clave;
}

void Materia::setNombre(std::string nombre) {
    Materia::nombre = nombre;
    Materia::clave = clave;
}

void Materia::setMaestro(Profesor maestro) {
    Materia::maestro = maestro;
}
std::string Materia::getNombre() {
    return this->nombre;
}

std::string Materia::getClave(){
    return this->clave;
}

Horario Materia::getHorario(){
    return this->horario;
}

Profesor Materia::getMaestro(){
    return this->maestro;
}

std::string Materia::to_string() {
    return std::__cxx11::string();
}

Materia::Materia(std::string noMat, std::string clave, Horario horario, Profesor maestro) {

}
