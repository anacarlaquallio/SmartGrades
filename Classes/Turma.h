#pragma once

#include <iostream>
#include <string>
#include "Matricula.h"

#define MAX_MATRICULAS 10

class Turma
{
private:
    int id;
    Matricula *matriculas[MAX_MATRICULAS];
    int matriculasCount = 0;
    std::string nome;
    std::string nivel;
    std::string dataTermino;
    std::string dataAbertura;

public:
    int getId();
    Matricula *getMatriculas();
    int getMatriculasCount();
    std::string getNome();
    std::string getNivel();
    std::string getDataTermino();
    std::string getDataAbertura();

    void setId(int);
    void matriculasCountAddOne();
    void setNome(std::string);
    void setNivel(std::string);
    void setDataTermino(std::string);
    void setDataAbertura(std::string);
};