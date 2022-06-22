#include "MatriculaMgr.h"
#include "MatriculaDao.h"

MatriculaDao &MatriculaMgr::getMatriculaDao()
{
  return *this->matriculaDao;
}

bool MatriculaMgr::criar(Matricula &matricula)
{
  return this->matriculaDao->criar(matricula);
}

void MatriculaMgr::setMatriculaDao(MatriculaDao &matriculaDao)
{
  this->matriculaDao = &matriculaDao;
}