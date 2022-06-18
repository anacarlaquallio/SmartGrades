#include "MatriculaDao.h"

bool MatriculaDao::criar(Matricula &matricula)
{
  if (this->matriculasCount == MAX_MATRICULAS)
    return false;
  this->matriculas[this->matriculasCount++] = &matricula;
  return true;
}

Matricula *MatriculaDao::buscar(int idMatricula)
{
  for (int i = 0; i < this->matriculasCount; i++)
  {
    if (this->matriculas[i]->getId() == idMatricula)
      return this->matriculas[i];
  }
  return NULL;
}