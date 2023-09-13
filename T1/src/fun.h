/*
 * @file fun.h
 * @authors Diego Padilla.
 * @date 13/9/2023
 */
#ifndef UNTITLED_FUN_H
#define UNTITLED_FUN_H

#include <string>
#include <vector>
/**
 * @brief Clase que que se encargara de una pregunta y su respuesta.
 */
class QA {
public:
    std::string pregunta; 
    std::string respuesta;

    QA (std::string = "", std::string = "");

    bool match(std::string);

    std::string toString ();
};


#endif //UNTITLED_FUN_H