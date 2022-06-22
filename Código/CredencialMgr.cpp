

#include "CredencialMgr.h"
#include "CredencialDao.h"

bool CredencialMgr::cadastrar(Credencial &credencial)
{
  return this->credencialDao->criar(credencial);
}

void CredencialMgr::setCredencialDao(CredencialDao &credencialDao)
{
  this->credencialDao = &credencialDao;
}