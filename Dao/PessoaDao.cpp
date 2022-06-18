#include "PessoaDao.h"

bool PessoaDao::criar(Pessoa &pessoa)
{
  if (this->pessoasCount == MAX_PESSOAS)
    return false;
  this->pessoas[this->pessoasCount++] = &pessoa;
  return true;
}
Pessoa *PessoaDao::buscar(std::string cpf)
{
  for (int i = 0; i < pessoasCount; i++)
  {
    if (this->pessoas[i]->getCpf() == cpf)
      return this->pessoas[i];
  }
  return NULL;
}