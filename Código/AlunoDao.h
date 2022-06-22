#pragma once

#include "Aluno.h"

#define MAX_ALUNOS 10

class AlunoDao
{
  Aluno *alunos[MAX_ALUNOS];
  int alunosCount;

public:
  bool criar(Aluno &);
  Aluno *buscar(int);
  bool atualizar(Aluno &);
  bool remover(Aluno &);
  Aluno *listar();
  Aluno *listarPorNome(std::string);
  static Aluno *getAlunos();
};
