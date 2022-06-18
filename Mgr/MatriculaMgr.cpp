#include "../Mgr/MatriculaMgr.h"
#include "../Dao/MatriculaDao.h"

MatriculaDao &MatriculaMgr::getMatriculaDao()
{
  return *this->matriculaDao;
}

bool MatriculaMgr::criar(Matricula &matricula)
{
  return this->matriculaDao->criar(matricula);
}
