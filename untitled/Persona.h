//
// Created by balta on 16/02/2018.
//

#ifndef UNTITLED_PERSONA_H
#define UNTITLED_PERSONA_H
#include <iostream>
#include <string>


class Persona {
protected:
    std::string nombre, fechaNac;
    char genero;
    float estatura, peso;
public:
    Persona();
    Persona(std::string &a, std::string &b, char &c);

    void setEstatura(float estatura);
    void setPeso(float peso);

    const std::string &getNombre() const;
    const std::string &getFechaNac() const;
    char getGenero() const;
    float getEstatura() const;
    float getPeso() const;

//virtual std::string toString() = 0;
}
;
#endif //UNTITLED_PERSONA_H
