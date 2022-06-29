#include "SystemX.h"

/*TurmaMgr SystemX::getTurmaMgr() {}
MatriculaMgr SystemX::getMatriculaMgr() {}
AlunoMgr SystemX::getAlunoMgr() {}
PessoaMgr SystemX::getPessoaMgr() {}
CredencialMgr SystemX::getCredencialMgr() {}*/

void SystemX::cadastrarCredencial(Credencial &credencial)
{
    credencialMgr->cadastrar(credencial);
}
void SystemX::cadastrarPessoa(Pessoa &pessoa)
{
    pessoaMgr->criar(pessoa);
}
void SystemX::cadastrarAluno(Aluno &aluno)
{
    alunoMgr->criar(aluno);
}
void SystemX::cadastrarTurma(Turma &turma)
{
    turmaMgr->cadastrar(turma);
}
void SystemX::fazerMatricula(Matricula &matricula)
{
    matriculaMgr->criar(matricula);
}
Turma* SystemX::buscarTurmaPorNome(std::string nome)
{
    return turmaMgr->buscarPorNome(nome);
}

bool SystemX::addMatriculaATurma(Turma& turma, Matricula& matricula){
    return turmaMgr->addMatricula(turma, matricula);
}

SystemX::SystemX()
{
    turmaDao = new TurmaDao();
    matriculaDao = new MatriculaDao();
    alunoDao = new AlunoDao();
    pessoaDao = new PessoaDao();
    credencialDao = new CredencialDao();

    turmaMgr = new TurmaMgr();
    turmaMgr->setTurmaDao(*turmaDao);
    matriculaMgr = new MatriculaMgr();
    matriculaMgr->setMatriculaDao(*matriculaDao);
    alunoMgr = new AlunoMgr();
    alunoMgr->setAlunoDao(*alunoDao);
    pessoaMgr = new PessoaMgr();
    pessoaMgr->setPessoaDao(*pessoaDao);
    credencialMgr = new CredencialMgr();
    credencialMgr->setCredencialDao(*credencialDao);
}