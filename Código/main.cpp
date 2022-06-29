#include "iostream"
#include "AlunoMgr.h"
#include "BoletimMgr.h"
#include "MatriculaMgr.h"
#include "TurmaMgr.h"
#include "PessoaMgr.h"
#include "AlunoDao.h"
#include "BoletimDao.h"
#include "MatriculaDao.h"
#include "TurmaDao.h"
#include "PessoaDao.h"
#include "CredencialMgr.h"
#include "CredencialDao.h"
#include "SystemX.h"

int main()
{

  /*TurmaDao *turmaDao = new TurmaDao();
  MatriculaDao *matriculaDao = new MatriculaDao();
  AlunoDao *alunoDao = new AlunoDao();
  PessoaDao *pessoaDao = new PessoaDao();
  CredencialDao *credencialDao = new CredencialDao();

  TurmaMgr *turmaMgr = new TurmaMgr();
  turmaMgr->setTurmaDao(*turmaDao);
  MatriculaMgr *matriculaMgr = new MatriculaMgr();
  matriculaMgr->setMatriculaDao(*matriculaDao);
  AlunoMgr *alunoMgr = new AlunoMgr();
  alunoMgr->setAlunoDao(*alunoDao);
  PessoaMgr *pessoaMgr = new PessoaMgr();
  pessoaMgr->setPessoaDao(*pessoaDao);
  CredencialMgr *credencialMgr = new CredencialMgr();
  credencialMgr->setCredencialDao(*credencialDao);*/

  SystemX *systemX = new SystemX();

  Credencial *credencial = new Credencial();
  credencial->setLogin("Jonas_Maneiro12@gmail.com");
  credencial->setSenha("SenhaForte123");
  credencial->setEmailDeRecuperacao("Jonas_Maneiro12@gmail.com");

  systemX->cadastrarCredencial(*credencial);
  //systemX->credencialMgr->cadastrar(*credencial);

  Pessoa *pessoa = new Pessoa();
  pessoa->setCpf("12345");
  pessoa->setCredencial(credencial);
  pessoa->setNome("Jonas");
  pessoa->setSobrenome("Albuquerque");
  pessoa->setTelefoneCelular("(44) 99942-5622");
  pessoa->setTelefoneFixo("");

 // std::cout << pessoa->getId();
  systemX->cadastrarPessoa(*pessoa);
  //pessoaMgr->criar(*pessoa);
  //std::cout << pessoa->getId();
  //std::cout << pessoaMgr->buscar("12345")->getId();

  Aluno *aluno = new Aluno();
  aluno->setPessoa(pessoa);
  aluno->setDataMatricula("10/05/2022");
  aluno->setNivel("2B");
  aluno->setContatoResponsavel("Mãe - (44) 98466-2872");

  systemX->cadastrarAluno(*aluno);
  //alunoMgr->criar(*aluno);

  Turma *turma = new Turma();
  turma->setNome("AEF2B-2022");
  turma->setNivel("2B");
  turma->setDataTermino("20/12/2022");
  turma->setDataAbertura("10/02/2022");

  systemX->cadastrarTurma(*turma);
 // turmaMgr->cadastrar(*turma);

  Matricula *matricula = new Matricula();
  matricula->setAluno(aluno);
  matricula->setSituacao("Ativo");
  matricula->setDataInicio("10/05/2022");
  matricula->setDataFechamento("");
  matricula->setDataConclusao("10/05/2023");

  systemX->fazerMatricula(*matricula);

  if(systemX->addMatriculaATurma(*systemX->buscarTurmaPorNome("AEF2B-2022"), *matricula)){
    std::cout << "Matricula adicionada a turma.";
  }else{
    std::cout << "Erro ao adicionar matricula.";
  }
  //turmaMgr->addMatricula(*turmaMgr->buscar("AEF2B-2022"), *matricula);
  return 0;
}