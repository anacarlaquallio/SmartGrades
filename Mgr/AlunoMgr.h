#pragma once

#include "../Dao/AlunoDao.h"

class AlunoMgr
{
  AlunoDao *alunoDao;

public:
  void setAlunoDao(AlunoDao &alunoDao);
  AlunoDao &getAlunoDao();
  bool criar(Aluno &);
};