#pragma once
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
#include <string.h>

class SystemX
{
private:
    TurmaDao *turmaDao;
    MatriculaDao *matriculaDao;
    AlunoDao *alunoDao;
    PessoaDao *pessoaDao;
    CredencialDao *credencialDao;

    TurmaMgr *turmaMgr;
    MatriculaMgr *matriculaMgr;
    AlunoMgr *alunoMgr;
    PessoaMgr *pessoaMgr;
    CredencialMgr *credencialMgr;

public:
    SystemX();
    /*TurmaMgr getTurmaMgr();
    MatriculaMgr getMatriculaMgr();
    AlunoMgr getAlunoMgr();
    PessoaMgr getPessoaMgr();
    CredencialMgr getCredencialMgr();*/
    
    void cadastrarCredencial(Credencial& credencial);
    void cadastrarPessoa(Pessoa& pessoa);
    void cadastrarAluno(Aluno& aluno);
    void cadastrarTurma(Turma& turma);
    void fazerMatricula(Matricula& matricula);
    Turma* buscarTurmaPorNome(std::string nome);
    bool addMatriculaATurma(Turma& turma, Matricula& matricula);
};


