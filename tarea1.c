#include "types.h"
#include "user.h"
#include "stat.h"
#include "uproc.h"

int getprocs(void);


int main() {
  int N = getprocs();
  printf(1,"Numero de procesos corriendo el sistema es: %d\n",N);
  return 0;
 }
 
 