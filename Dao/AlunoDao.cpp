#include "../Dao/AlunoDao.h"

bool AlunoDao::criar(Aluno &aluno)
{
  if (this->alunosCount == MAX_ALUNOS)
    return false;
  aluno.setId(this->alunosCount);
  alunos[alunosCount++] = &aluno;
  return true;
}
Aluno *AlunoDao::buscar(int idAluno)
{
  for (int i = 0; i < this->alunosCount; i++)
  {
    if (this->alunos[i]->getId() == idAluno)
      return this->alunos[i];
  }
  return NULL;
}

bool AlunoDao::remover(Aluno &aluno)
{
  for (int i = 0; i < MAX_ALUNOS; i++)
  {
    if (this->alunos[i]->getId() == aluno.getId())
    {
      delete alunos[i];
      alunos[i] = NULL;
      this->alunosCount--;
      return true;
    }
  }
  return false;
}