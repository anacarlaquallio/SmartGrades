#pragma once

#include "BoletimDao.h"

class BoletimMgr
{
  BoletimDao *boletimDao;

public:
  BoletimDao &getBoletimDao();
  bool cadastrar(Boletim &);
};