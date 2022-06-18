#pragma once

#include <iostream>
#include <string>

class Boletim
{
private:
    int id;
    float *notas[10];
    std::string comentarios;
    std::string dataCriacao;
    std::string semestreReferencia;

public:
    int getId();
    float *getNotas();
    std::string getComentarios();
    std::string getDataCriacao();
    std::string getSemestreReferencia();

    void setId(int);
    void setNotas(float *);
    void setComentarios(std::string);
    void setDataCriacao(std::string);
    void setSemestreReferencia(std::string);
};