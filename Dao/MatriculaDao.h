#pragma once

#include "../Classes/Matricula.h"

#define MAX_MATRICULAS 10
class MatriculaDao
{
  Matricula *matriculas[MAX_MATRICULAS];
  int matriculasCount = 0;

public:
  bool criar(Matricula &);
  Matricula *buscar(int);
  bool atualizar(Matricula &);
  bool remover(Matricula &);
  Matricula *listar();
};