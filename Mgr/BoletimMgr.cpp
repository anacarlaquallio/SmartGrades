#include "../Mgr/BoletimMgr.h"
#include "../Dao/BoletimDao.h"

BoletimDao &BoletimMgr::getBoletimDao()
{
  return *this->boletimDao;
}

bool BoletimMgr::cadastrar(Boletim &boletim)
{
  return this->boletimDao->criar(boletim);
}
