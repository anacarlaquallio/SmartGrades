#include "Credencial.h"

std::string Credencial::getLogin()
{
  return login;
}
std::string Credencial::getSenha()
{
  return senha;
}
std::string Credencial::getEmailDeRecuperacao()
{
  return emailDeRecuperacao;
}

int Credencial::getId()
{
  return id;
}

void Credencial::setId(int id)
{
  this->id = id;
}

void Credencial::setLogin(std::string login)
{
  this->login = login;
}

void Credencial::setSenha(std::string senha)
{
  this->senha = senha;
}

void Credencial::setEmailDeRecuperacao(std::string emailRecuperacao)
{
  this->emailDeRecuperacao = emailRecuperacao;
}