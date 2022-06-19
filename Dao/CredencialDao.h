#pragma once

#include "../Classes/Credencial.h"

#define MAX_CREDENCIAIS 10
class CredencialDao
{
  Credencial *credenciais[MAX_CREDENCIAIS];
  int credenciaisCount = 0;

public:
  bool criar(Credencial &);
  Credencial *buscar(int);
  bool atualizar(Credencial &);
  bool remover(Credencial &);
  Credencial *listar();
};