#pragma once

#include "Pessoa.h"

#define MAX_PESSOAS 10
class PessoaDao
{
  Pessoa pessoas[MAX_PESSOAS];
  int pessoasCount;

public:
  bool criar(Pessoa);
  Pessoa *buscar(std::string);
  bool atualizar(Pessoa &);
  bool remover(Pessoa &);
  Pessoa *listar();
};