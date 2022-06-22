#pragma once

#include "Boletim.h"

#define MAX_BOLETINS 10
class BoletimDao
{
  Boletim *boletins[MAX_BOLETINS];
  int boletinsCount = 0;

public:
  bool criar(Boletim &);
  Boletim *buscar(int);
  bool atualizar(Boletim &);
  bool remover(Boletim &);
  Boletim *listar();
};