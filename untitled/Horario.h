//
// Created by balta on 16/02/2018.
//

#ifndef UNTITLED_HORARIO_H
#define UNTITLED_HORARIO_H

#include "FormatoHora.h"
class Horario {
private:
    FormatoHora inicio;
    FormatoHora fin;
    std::string aulas;
public:
    Horario();
    Horario(FormatoHora, FormatoHora, std::string aulas);
    Horario(int hi,int mi,int si,int hf,int mf,int sf);

    void setAula(std::string aula);
    FormatoHora getiInicio();
    FormatoHora getFin();
    std::string getaula();
    FormatoHora calculaDuracion();
    std::string to_string();

};

#endif //UNTITLED_HORARIO_H
