#pragma once

#include "../Dao/BoletimDao.h"

class BoletimMgr
{
  BoletimDao *boletimDao;

public:
  BoletimDao &getBoletimDao();
  bool cadastrar(Boletim &);
};