#include "../Mgr/PessoaMgr.h"
#include "../Dao/PessoaDao.h"

PessoaDao &PessoaMgr::getPessoaDao()
{
  return *this->pessoaDao;
}

bool PessoaMgr::criar(Pessoa &pessoa)
{
  return this->pessoaDao->criar(pessoa);
}
