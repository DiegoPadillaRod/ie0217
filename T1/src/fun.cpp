#include "header.hpp"
#include <iostream>
#include <sstream>
using namespace std;

QA::QA (string question, string answer) {
    this->pregunta = question;
    this->respuesta = answer;
}



string QA::toString (){
    stringstream r;
    r << respuesta << endl;
    return r.str ();
}


