/*
 * @file fun.cpp
 * @authors Diego Padilla.
 * @date 13/9/2023
 */
#include "fun.h"
#include <iostream>
#include <sstream>
using namespace std;

// Construcutor que pertenece a QA
QA::QA (string question, string answer) {
    this->pregunta = question;
    this->respuesta = answer;
}

// Buscando coincidencias 
bool QA::match(std::string matcheo){
    size_t posicion = pregunta.find(matcheo);
    size_t posicion2 = respuesta.find(matcheo);
    if (posicion != std::string::npos || posicion2 != std::string::npos) {
        return true;
    }
    return false;
}

// Devolviendo pregunta y respuesta 
string QA::toString (){
    stringstream r;
    r <<"La pregunta es:\n "<<pregunta<<endl;
    r << "R/ "<< respuesta << endl;
    return r.str ();
}


