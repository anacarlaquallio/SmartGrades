#include "Funcionario.h"

std::string Funcionario::getDataAdmissao()
{
  return dataAdmissao;
}
std::string Funcionario::getDataDemissao()
{
  return dataDemissao;
}
std::string Funcionario::getFolhaDePagamento()
{
  return folhaDePagamento;
}

int Funcionario::getId()
{
  return id;
}

void Funcionario::setId(int id)
{
  this->id = id;
}
void Funcionario::setDataAdmissao(std::string dataAdmissao)
{
  this->dataAdmissao = dataAdmissao;
}
void Funcionario::setDataDemissao(std::string dataDemissao)
{
  this->dataDemissao = dataDemissao;
}
void Funcionario::setFolhaDePagamento(std::string folhaDePagamento)
{
  this->folhaDePagamento = folhaDePagamento;
}