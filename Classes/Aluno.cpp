#include "Aluno.h"

std::string Aluno::getDataMatricula(){
  return dataMatricula;
}
std::string Aluno::getNivel(){
  return nivel;
}
std::string Aluno::getContatoResponsavel(){
  return contatoResponsavel;
}
int Aluno::getId(){
  return id;
}

void Aluno::setId(int id) {
  this->id = id;
}

void Aluno::setDataMatricula (std::string dataMatricula) {
  this->dataMatricula = dataMatricula;
}

 void Aluno::setNivel(std::string nivel){
   this->nivel = nivel;
 }

void Aluno::setContatoResponsavel(std::string contatoResponsavel) {
  this->contatoResponsavel = contatoResponsavel;
}