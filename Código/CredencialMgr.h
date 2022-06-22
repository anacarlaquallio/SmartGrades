#pragma once

#include "CredencialDao.h"

class CredencialMgr
{
  CredencialDao *credencialDao;

public:
  CredencialDao *getCredencialDao();
  void setCredencialDao(CredencialDao &credencialDao);
  bool cadastrar(Credencial &);
};