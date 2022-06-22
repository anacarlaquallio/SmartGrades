#include "Professora.h"

std::string Professora::getFormacao()
{
  return formacao;
}
std::string Professora::getNivelToefl()
{
  return nivelToefl;
}
int Professora::getId()
{
  return id;
}

void Professora::setId(int id)
{
  this->id = id;
}
void Professora::setFormacao(std::string formacao)
{
  this->formacao = formacao;
}
void Professora::setNivelToefl(std::string nivelToefl)
{
  this->nivelToefl = nivelToefl;
}