#include "iostream"
#include "Mgr/AlunoMgr.h"
#include "Mgr/BoletimMgr.h"
#include "Mgr/MatriculaMgr.h"
#include "Mgr/TurmaMgr.h"
#include "Mgr/PessoaMgr.h"
#include "Dao/AlunoDao.h"
#include "Dao/BoletimDao.h"
#include "Dao/MatriculaDao.h"
#include "Dao/TurmaDao.h"
#include "Dao/PessoaDao.h"
int main()
{
  //TurmaDao *turmaDao = new TurmaDao();
  //MatriculaDao *matriculaDao = new MatriculaDao();
 // AlunoDao *alunoDao = new AlunoDao();
  PessoaDao *pessoaDao = new PessoaDao();

  //TurmaMgr *turmaMgr = new TurmaMgr();
  //MatriculaMgr *matriculaMgr = new MatriculaMgr();
  //AlunoMgr *alunoMgr = new AlunoMgr();
  PessoaMgr *pessoaMgr = new PessoaMgr();

/*
  Credencial *credencial = new Credencial();
  credencial->setLogin("Jonas_Maneiro12@gmail.com");
  credencial->setSenha("SenhaForte123");
  credencial->setEmailDeRecuperacao("Jonas_Maneiro12@gmail.com");
*/

  Pessoa *pessoa = new Pessoa();
  pessoa->setCpf("12345");
  pessoa->setCredencial(NULL);
  pessoa->setNome("Jonas");
  pessoa->setSobrenome("Albuquerque");
  pessoa->setTelefoneCelular("(44) 99942-5622");
  pessoa->setTelefoneFixo("");



  Aluno *aluno = new Aluno();
  aluno->setPessoa(pessoa);
  aluno->setDataMatricula("10/05/2022");
  aluno->setNivel("2B");
  aluno->setContatoResponsavel("Mãe - (44) 98466-2872");


  Turma *turma = new Turma();
  turma->setId(1);
  turma->setNome("AEF2B-2022");
  turma->setNivel("2B");
  turma->setDataTermino("20/12/2022");
  turma->setDataAbertura("10/02/2022");

  Matricula *matricula = new Matricula();
  matricula->setId(1);
  matricula->setAluno(aluno);
  matricula->setSituacao("Ativo");
  matricula->setDataInicio("10/05/2022");
  matricula->setDataFechamento("");
  matricula->setDataConclusao("10/05/2023");
  
  return 0;
}