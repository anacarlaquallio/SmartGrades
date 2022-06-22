#include "Matricula.h"

std::string Matricula::getSituacao()
{
  return situacao;
}
std::string Matricula::getDataInicio()
{
  return dataInicio;
}
std::string Matricula::getDataFechamento()
{
  return dataFechamento;
}
std::string Matricula::getDataConclusao()
{
  return dataConclusao;
}

int Matricula::getId()
{
  return id;
}

Aluno *Matricula::getAluno()
{
  return aluno;
}

void Matricula::setId(int id)
{
  this->id = id;
}

void Matricula::setSituacao(std::string situacao)
{
  this->situacao = situacao;
}

void Matricula::setDataInicio(std::string dataInicio)
{
  this->dataInicio = dataInicio;
}

void Matricula::setDataFechamento(std::string dataFechamento)
{
  this->dataFechamento = dataFechamento;
}

void Matricula::setDataConclusao(std::string dataConclusao)
{
  this->dataConclusao = dataConclusao;
}

void Matricula::setAluno(Aluno *aluno)
{
  this->aluno = aluno;
}