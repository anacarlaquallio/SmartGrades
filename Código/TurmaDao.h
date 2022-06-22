#pragma once

#include "Turma.h"

#define MAX_TURMAS 10
class TurmaDao
{
  Turma *turmas[MAX_TURMAS];
  int turmasCount = 0;

public:
  bool criar(Turma &);
  Turma *buscar(int);
  bool atualizar(Turma &);
  bool remover(Turma &);
  Turma *listar();
  bool addMatricula(Turma &, Matricula &);
  Turma *buscar(std::string);
};