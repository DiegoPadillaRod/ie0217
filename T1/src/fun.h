#ifndef UNTITLED_FUN_H
#define UNTITLED_FUN_H

#include <string>
#include <vector>
class QA {
public:
    std::string pregunta;
    std::string respuesta;

    QA (std::string = "", std::string = "");

    bool match(std::string);

    std::string toString ();
};


#endif //UNTITLED_FUN_H