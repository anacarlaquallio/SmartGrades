#pragma once

#include "../Dao/MatriculaDao.h"

class MatriculaMgr
{
  MatriculaDao *matriculaDao;

public:
  MatriculaDao &getMatriculaDao();
  bool criar(Matricula &);
};