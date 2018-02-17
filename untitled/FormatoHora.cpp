//
// Created by balta on 16/02/2018.
//

#include "FormatoHora.h"

FormatoHora::FormatoHora(){
    this->horas=0;
    this->minutos=0;
    this->segundos=0;
}

FormatoHora::FormatoHora(int horas, int minutos, int segundos) {
    if (validarHrs(horas)){
        this->horas = horas;
    }
    if (validarMs(minutos)){
        this->minutos = minutos;
    }
    if (validarMs(segundos)){
        this->segundos = segundos;
    }
}
bool FormatoHora::validarHrs(int horas){
return (horas >=0 and horas<=23);
}

bool FormatoHora::validarMs(int minutos) {
    return (minutos >= 0 and minutos <= 59);
}
int FormatoHora::getHora(){
    return this->horas;
}
int FormatoHora::getMin(){
    return this->minutos;
}
int FormatoHora::getSeg(){
    return this->segundos;
}
std::string FormatoHora::to_string() {
    std::string segundos;
    std::string minutos;
    std::string horas;
    if(this->segundos < 10){
        segundos = "0"+this->segundos;
    }else{
        segundos = ""+this->segundos;
    }
    if(this->minutos < 10){
        minutos = "0"+this->minutos;
    }else{
        minutos = ""+this->minutos;
    }
    if(this->horas < 10){
        horas = "0"+this->horas;
    }else{
        horas = ""+this->horas;
    }
    return horas+":"+minutos+":"+segundos;
}

