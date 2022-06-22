#include "Turma.h"

std::string Turma::getNome()
{
  return nome;
}
std::string Turma::getNivel()
{
  return nivel;
}
std::string Turma::getDataTermino()
{
  return dataTermino;
}
std::string Turma::getDataAbertura()
{
  return dataAbertura;
}
int Turma::getId()
{
  return id;
}

int Turma::getMatriculasCount()
{
  return matriculasCount;
}

Matricula *Turma::getMatriculas()
{
  return this->matriculas;
}

void Turma::setId(int id)
{
  this->id = id;
}
void Turma::setNome(std::string nome)
{
  this->nome = nome;
}
void Turma::Turma::setNivel(std::string nivel)
{
  this->nivel = nivel;
}
void Turma::setDataTermino(std::string dataTermino)
{
  this->dataTermino = dataTermino;
}
void Turma::setDataAbertura(std::string dataAbertura)
{
  this->dataAbertura = dataAbertura;
}
void Turma::matriculasCountAddOne()
{
  matriculasCount = matriculasCount + 1;
}