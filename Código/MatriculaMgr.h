#pragma once

#include "MatriculaDao.h"

class MatriculaMgr
{
  MatriculaDao *matriculaDao;

public:
  MatriculaDao &getMatriculaDao();
  void setMatriculaDao(MatriculaDao &matriculaDao);
  bool criar(Matricula &);
};