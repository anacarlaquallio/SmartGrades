#pragma once

#include "../Dao/PessoaDao.h"

class PessoaMgr
{
  PessoaDao *pessoaDao;

public:
  PessoaDao &getPessoaDao();
  bool criar(Pessoa &);
};