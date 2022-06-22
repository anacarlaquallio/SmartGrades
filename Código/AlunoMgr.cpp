#include "AlunoMgr.h"
#include "AlunoDao.h"

AlunoDao &AlunoMgr::getAlunoDao()
{
  return *this->alunoDao;
}

void AlunoMgr::setAlunoDao(AlunoDao &alunoDao)
{
  this->alunoDao = &alunoDao;
}

bool AlunoMgr::criar(Aluno &aluno)
{
  return this->alunoDao->criar(aluno);
}
