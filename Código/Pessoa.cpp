#include "Pessoa.h"
Credencial *Pessoa::getCredencial()
{
  return credencial;
}
std::string Pessoa::getNome()
{
  return nome;
}
std::string Pessoa::Pessoa::getSobrenome()
{
  return sobrenome;
}
std::string Pessoa::getTelefoneCelular()
{
  return telefoneCelular;
}
std::string Pessoa::getTelefoneFixo()
{
  return telefoneFixo;
}
std::string Pessoa::getCpf()
{
  return cpf;
}
int Pessoa::getId()
{
  return id;
}

void Pessoa::setId(int id)
{
  this->id = id;
}
void Pessoa::setCredencial(Credencial *credencial)
{
  this->credencial = credencial;
}
void Pessoa::setNome(std::string nome)
{
  this->nome = nome;
}
void Pessoa::setSobrenome(std::string sobrenome)
{
  this->sobrenome = sobrenome;
}
void Pessoa::setTelefoneCelular(std::string telefoneCelular)
{
  this->telefoneCelular = telefoneCelular;
}
void Pessoa::setTelefoneFixo(std::string telefoneFixo)
{
  telefoneFixo = telefoneFixo;
}
void Pessoa::setCpf(std::string cpf)
{
  this->cpf = cpf;
}