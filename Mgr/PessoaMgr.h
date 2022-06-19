#pragma once

#include "../Dao/PessoaDao.h"

class PessoaMgr
{
  PessoaDao *pessoaDao;

public:
  void setPessoaDao(PessoaDao &pessoaDao);
  PessoaDao &getPessoaDao();
  bool criar(Pessoa &);
  Pessoa *buscar(std::string);
};