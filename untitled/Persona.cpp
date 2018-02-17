//
// Created by balta on 16/02/2018.
//


#include "Persona.h"

Persona::Persona() {
    Persona::estatura;
    Persona::fechaNac;
    Persona::genero;
    Persona::nombre;
    Persona::peso;
}

Persona::Persona(std::string &a, std::string &b, char &c){
    Persona::nombre = a;
    Persona::fechaNac = b;
    Persona::genero = c;

}

void Persona::setEstatura(float estatura) {
    Persona::estatura = estatura;
}

void Persona::setPeso(float peso) {
    Persona::peso = peso;
}

const std::string &Persona::getNombre() const {
    return nombre;
}

const std::string &Persona::getFechaNac() const {
    return fechaNac;
}

char Persona::getGenero() const {
    return genero;
}

float Persona::getEstatura() const {
    return estatura;
}

float Persona::getPeso() const {
    return peso;
}
