#ifndef DIL
#define DIL 1
#warning Dil Varsayılan Olarak Turkce Secilmistir!
#endif
#if DIL == 1
#include "turkish.h"
#elif DIL == 2
#include "english.h"
#else
#include "arabic.h"
#endif

int main(void)
{
  //Kodlar
  return 0;
}