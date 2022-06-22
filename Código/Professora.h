#pragma once

#include "Funcionario.h"

class Professora : public Funcionario
{
private:
    int id;
    std::string formacao;
    std::string nivelToefl;

public:
    int getId();
    std::string getFormacao();
    std::string getNivelToefl();

    void setId(int);
    void setFormacao(std::string);
    void setNivelToefl(std::string);
};