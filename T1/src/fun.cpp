#include "fun.h"
#include <iostream>
#include <sstream>
using namespace std;

QA::QA (string question, string answer) {
    this->pregunta = question;
    this->respuesta = answer;
}

bool QA::match(std::string matcheo){
    size_t posicion = pregunta.find(matcheo);
    size_t posicion2 = respuesta.find(matcheo);
    if (posicion != std::string::npos || posicion2 != std::string::npos) {
        return true;
    }
    return false;
}

string QA::toString (){
    stringstream r;
    r <<"La pregunta es:\n "<<pregunta<<endl;
    r << "R/ "<< respuesta << endl;
    return r.str ();
}


