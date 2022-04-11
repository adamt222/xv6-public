#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"


int
main(int argc, char *argv[])
{
  if(argc <= 2) {
    printf(1, "Need two arguments! (address) (length)");
    exit();
  }
  int* address = (void*) atoi(argv[1]);
  int length = atoi(argv[2]);

  munprotect(address, length);

  exit();
}
