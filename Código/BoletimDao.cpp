#include "BoletimDao.h"

bool BoletimDao::criar(Boletim &boletim)
{
  if (this->boletinsCount == MAX_BOLETINS)
    return false;
  this->boletins[this->boletinsCount++] = &boletim;
  return true;
}