#include "Usuario.h"

Pessoa *Usuario::getPessoa()
{
  return pessoa;
}
std::string Usuario::getDataCadastro()
{
  return dataCadastro;
}
int Usuario::getId()
{
  return id;
}

void Usuario::setId(int id)
{
  this->id = id;
}

void Usuario::setPessoa(Pessoa *pessoa)
{
  this->pessoa = pessoa;
}
void Usuario::setDataCadastro(std::string dataCadastro)
{
  this->dataCadastro = dataCadastro;
}