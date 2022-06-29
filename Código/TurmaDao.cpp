#include "TurmaDao.h"

bool TurmaDao::criar(Turma &turma)
{
  if (this->turmasCount == MAX_TURMAS)
    return false;
  turma.setId(this->turmasCount);
  this->turmas[this->turmasCount++] = &turma;
  return true;
}
Turma *TurmaDao::buscar(int idTurma)
{
  for (int i = 0; i < turmasCount; i++)
  {
    if (this->turmas[i]->getId() == idTurma)
      return this->turmas[i];
  }
  return NULL;
}

bool TurmaDao::addMatricula(Turma &turma, Matricula &matricula)
{
  if (turma.getMatriculasCount() > MAX_TURMAS)
    return false;
  turma.getMatriculas()[turma.getMatriculasCount()] = matricula;
  turma.matriculasCountAddOne();
  return true;
}

Turma *TurmaDao::buscarPorNome(std::string nomeTurma)
{
  for (int i = 0; i < turmasCount; i++)
  {
    if (this->turmas[i]->getNome() == nomeTurma)
      return this->turmas[i];
  }
  return NULL;
}