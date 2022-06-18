#pragma once

#include "Pessoa.h"
#include <iostream>
#include <string>

class Usuario
{
private:
    int id;
    Pessoa *pessoa;
    std::string dataCadastro;

public:
    int getId();
    Pessoa getPessoa();
    std::string getDataCadastro();

    void setId(int);
    void setPessoa(Pessoa *);
    void setDataCadastro(std::string);
};