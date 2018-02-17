//
// Created by balta on 16/02/2018.
//

#include "Horario.h"

Horario::Horario() {
    this->inicio = FormatoHora(0, 0, 0);
    this->fin = FormatoHora(0, 0, 0);
    this->aulas = "";
}
Horario::Horario(FormatoHora inicio, FormatoHora fin , std::string aulas){
    this-> inicio = inicio;
    this->aulas = aulas;
    this->fin = fin;
}
    Horario::Horario(int hi,int mi,int si,int hf,int mf,int sf){
        this->inicio = FormatoHora(hi, mi, si);
        this->fin = FormatoHora(hf, mf, sf);
        this->aulas = "";

    }
void Horario::setAula(std::string aula){
    this-> aulas =aula;
}
FormatoHora Horario::getiInicio(){
    return this->inicio;
}
FormatoHora Horario::getFin(){
    return this-> fin;

}
std::string Horario::getaula(){
    return this-> aulas;
}
FormatoHora Horario::calculaDuracion() {
    int h1 = this->getiInicio().getHora();
    int m1 = this->getiInicio().getMin();
    int s1 = this->getiInicio().getSeg();
    int h2 = this->getFin().getHora();
    int m2 = this->getFin().getMin();
    int s2 = this->getFin().getSeg();

    if (m2 < m1) {
        h2 = h2-1;
        m2 = m2+60;
    }

    if (s2 < s1) {
        m2 = m2-1;
        s2 = s2+60;
    }

    return  FormatoHora(h2-h1, m2-m1, s2-s1);

}
std::string Horario::to_string(){
    return "de "+this->getiInicio().to_string()+" a "+this->getFin().to_string()+" "+this->getaula();

}