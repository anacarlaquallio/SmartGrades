#pragma once

#include "TurmaDao.h"

class TurmaMgr
{
  TurmaDao *turmaDao = new TurmaDao();

public:
  TurmaDao &getTurmaDao();
  void setTurmaDao(TurmaDao &turmaDao);
  bool cadastrar(Turma &);
  bool addMatricula(Turma &, Matricula &);
  Turma *buscarPorNome(std::string);
};