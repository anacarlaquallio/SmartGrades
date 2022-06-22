#include "Boletim.h"

std::string Boletim::getComentarios()
{
  return comentarios;
}
std::string Boletim::getDataCriacao()
{
  return dataCriacao;
}
std::string Boletim::getSemestreReferencia()
{
  return semestreReferencia;
}

int Boletim::getId()
{
  return id;
}

void Boletim::setId(int id)
{
  this->id = id;
}
void Boletim::setNotas(float *notas)
{
  *this->notas = notas;
}
void Boletim::Boletim::setComentarios(std::string comentarios)
{
  this->comentarios = comentarios;
}
void Boletim::setDataCriacao(std::string dataCriacao)
{
  this->dataCriacao = dataCriacao;
}
void Boletim::setSemestreReferencia(std::string semestre)
{
  this->semestreReferencia = semestre;
}