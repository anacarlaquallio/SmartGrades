#pragma once

#include "../Dao/AlunoDao.h"

class AlunoMgr
{
  AlunoDao *alunoDao;

public:
  AlunoDao &getAlunoDao();
  bool criar(Aluno &);
};