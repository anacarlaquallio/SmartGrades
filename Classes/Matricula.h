#pragma once

#include "Aluno.h"
#include <iostream>
#include <string>

class Matricula
{
private:
    int id;
    Aluno *aluno;
    std::string situacao;
    std::string dataInicio;
    std::string dataFechamento;
    std::string dataConclusao;

public:
    int getId();
    Aluno *getAluno();
    std::string getSituacao();
    std::string getDataInicio();
    std::string getDataFechamento();
    std::string getDataConclusao();

    void setId(int);
    void setAluno(Aluno *);
    void setSituacao(std::string);
    void setDataInicio(std::string);
    void setDataFechamento(std::string);
    void setDataConclusao(std::string);
};