#pragma once

#include "../Dao/MatriculaDao.h"

class MatriculaMgr
{
  MatriculaDao *matriculaDao;

public:
  MatriculaDao &getMatriculaDao();
  void setMatriculaDao(MatriculaDao &matriculaDao);
  bool criar(Matricula &);
};