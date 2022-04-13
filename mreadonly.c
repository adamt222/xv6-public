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
  // printf(1,"first arg is= %d\n",  atoi(argv[1]));
  // printf(1,"second arg is= %d \n", atoi(argv[2]));
  int* address = (void*) atoi(argv[1]);
  int length = atoi(argv[2]);
  // printf(1,"address arg is= %d\n",  *address);
  // printf(1,"length arg is= %d \n", length);
  mprotect(address, length);
  //*address = 10;
  //printf(1, "\nAll Done!\n");
  exit();
}
