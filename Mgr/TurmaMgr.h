#pragma once

#include "../Dao/TurmaDao.h"

class TurmaMgr
{
  TurmaDao *turmaDao;

public:
  TurmaDao &getTurmaDao();
  bool cadastrar(Turma &);
  bool addMatricula(Turma &, Matricula &);
};