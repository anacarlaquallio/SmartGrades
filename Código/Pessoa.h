#pragma once

#include "Credencial.h"
#include <iostream>
#include <string>

class Pessoa
{
private:
    int id;
    Credencial *credencial;
    std::string nome;
    std::string sobrenome;
    std::string cpf;
    std::string telefoneCelular;
    std::string telefoneFixo;

public:
    int getId();
    Credencial *getCredencial();
    std::string getNome();
    std::string getSobrenome();
    std::string getTelefoneCelular();
    std::string getTelefoneFixo();
    std::string getCpf();

    void setId(int);
    void setCredencial(Credencial *);
    void setNome(std::string);
    void setSobrenome(std::string);
    void setTelefoneCelular(std::string);
    void setTelefoneFixo(std::string);
    void setCpf(std::string);
};