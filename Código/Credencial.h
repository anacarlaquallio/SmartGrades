#pragma once

#include <iostream>
#include <string>

class Credencial
{
private:
    int id;
    std::string login;
    std::string senha;
    std::string emailDeRecuperacao;

public:
    int getId();
    std::string getLogin();
    std::string getSenha();
    std::string getEmailDeRecuperacao();

    void setId(int);
    void setLogin(std::string);
    void setSenha(std::string);
    void setEmailDeRecuperacao(std::string);
};