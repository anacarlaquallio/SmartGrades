#include "TurmaMgr.h"
#include "TurmaDao.h"

TurmaDao &TurmaMgr::getTurmaDao()
{
  return *this->turmaDao;
}

bool TurmaMgr::cadastrar(Turma &turma)
{
  return this->turmaDao->criar(turma);
}

bool TurmaMgr::addMatricula(Turma &turma, Matricula &matricula)
{
  return this->turmaDao->addMatricula(turma, matricula);
}

void TurmaMgr::setTurmaDao(TurmaDao &turmaDao)
{
  this->turmaDao = &turmaDao;
}

Turma *TurmaMgr::buscar(std::string nomeTurma)
{
  return this->turmaDao->buscar(nomeTurma);
}