#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"


int
main(int argc, char *argv[])
{

  if(argc <= 1) {
    printf(1, "Need one arguments! (address)");
    exit();
  }
  printf(1,"first arg is= %d\n",  atoi(argv[1]));
  int* address = (void*) atoi(argv[1]);
  *address = 10;
  printf(1, "All Done!");

  exit();
}
