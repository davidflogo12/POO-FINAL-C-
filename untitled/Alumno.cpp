//
// Created by balta on 16/02/2018.
//

#include "Alumno.h"
#include "Horario.h"

Alumno::Alumno() {
    this->matricula="";
    this->gene="";

}

Alumno::Alumno(std::string &mat, std::string &gen, char &c, std::string &b, std::string &a) {
    this->matricula = mat;
    this->gene = gen;
    this->Persona::genero = c;
    this->Persona::nombre = a;
    this->Persona::fechaNac = b;

}

Horario Alumno::getHorario() {
    return this->horario;
}

std::string Alumno::getMatricula() {
    return this->matricula;
}

std::string Alumno::getGene() {
    return this->gene;
}

void Alumno::setHorario(Horario horario) {
this->horario=horario;
}

void Alumno::setMaterias(Materia **materias) {
this->materias[] = materias[6];
}

Materia* Alumno::getMaterias() {
    return this->materias;
}

