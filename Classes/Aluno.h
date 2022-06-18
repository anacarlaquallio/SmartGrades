#pragma once

#include "Usuario.h"

class Aluno : public Usuario
{
private:
    int id;
    std::string dataMatricula;
    std::string nivel;
    std::string contatoResponsavel;

public:
    int getId();
    std::string getDataMatricula();
    std::string getNivel();
    std::string getContatoResponsavel();

    void setId(int);
    void setDataMatricula(std::string);
    void setNivel(std::string);
    void setContatoResponsavel(std::string);
};