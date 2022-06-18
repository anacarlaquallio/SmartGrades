#include "../Mgr/AlunoMgr.h"
#include "../Dao/AlunoDao.h"

AlunoDao &AlunoMgr::getAlunoDao()
{
  return *this->alunoDao;
}

bool AlunoMgr::criar(Aluno &aluno)
{
  return this->alunoDao->criar(aluno);
}
