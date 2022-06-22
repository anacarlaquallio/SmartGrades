#pragma once

#include "PessoaDao.h"

class PessoaMgr
{
  PessoaDao *pessoaDao;

public:
  void setPessoaDao(PessoaDao &pessoaDao);
  PessoaDao &getPessoaDao();
  bool criar(Pessoa pessoa);
  Pessoa *buscar(std::string);
};