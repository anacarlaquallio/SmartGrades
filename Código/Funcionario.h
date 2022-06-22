#pragma once

#include "Usuario.h"

class Funcionario : public Usuario
{
private:
    int id;
    std::string dataAdmissao;
    std::string dataDemissao;
    std::string folhaDePagamento;

public:
    int getId();
    std::string getDataAdmissao();
    std::string getDataDemissao();
    std::string getFolhaDePagamento();

    void setId(int);
    void setDataAdmissao(std::string);
    void setDataDemissao(std::string);
    void setFolhaDePagamento(std::string);
};