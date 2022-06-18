#include "../Mgr/TurmaMgr.h"
#include "../Dao/TurmaDao.h"

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
