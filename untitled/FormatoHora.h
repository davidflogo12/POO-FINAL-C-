//
// Created by balta on 16/02/2018.
//

#ifndef UNTITLED_FORMATOHORA_H
#define UNTITLED_FORMATOHORA_H

#include <iostream>
class FormatoHora {
private:
    int horas;
    int minutos;
    int segundos;

public:
    FormatoHora();
    FormatoHora( int horas, int minutos, int segundos);
    std::string to_string();
    int getHora();
    int getMin();
    int getSeg();

private:
    bool validarHrs(int);
    bool validarMs(int);

};


#endif //UNTITLED_FORMATOHORA_H
