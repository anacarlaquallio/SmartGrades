#include "BoletimMgr.h"
#include "BoletimDao.h"

BoletimDao &BoletimMgr::getBoletimDao()
{
  return *this->boletimDao;
}

bool BoletimMgr::cadastrar(Boletim &boletim)
{
  return this->boletimDao->criar(boletim);
}
