#include "CredencialDao.h"

bool CredencialDao::criar(Credencial &credencial)
{
  if (this->credenciaisCount == MAX_CREDENCIAIS)
    return false;
  credencial.setId(this->credenciaisCount);
  this->credenciais[this->credenciaisCount++] = &credencial;
  return true;
}

Credencial *CredencialDao::buscar(int idCredencial)
{
  for (int i = 0; i < this->credenciaisCount; i++)
  {
    if (this->credenciais[i]->getId() == idCredencial)
      return this->credenciais[i];
  }
  return NULL;
}