#include "../Mgr/PessoaMgr.h"
#include "../Dao/PessoaDao.h"

PessoaDao &PessoaMgr::getPessoaDao()
{
  return *this->pessoaDao;
}

void PessoaMgr::setPessoaDao(PessoaDao &pessoaDao)
{
  this->pessoaDao = &pessoaDao;
}

bool PessoaMgr::criar(Pessoa &pessoa)
{
  return this->pessoaDao->criar(pessoa);
}

Pessoa *PessoaMgr::buscar(std::string cpf)
{
  return this->pessoaDao->buscar(cpf);
}
