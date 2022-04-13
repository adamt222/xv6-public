#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"


int
main(int argc, char *argv[])
{
  //This function will demonstrate mprotect and munprotect working properly

  if(argc <= 1) {
    printf(1, "Need one arguments! (address)");
    exit();
  }
  int* address = (void*) atoi(argv[1]);
  int length = atoi(argv[2]);
  printf(1,"first arg is= %d\n",  address);
  printf(1,"second arg is= %d\n",  length);

  printf(1,"\nThis will print 1 ");

  mprotect(address, length);
  munprotect(address, length);

  printf(1,"\nThis will print 2");

  *address = 10;

  mprotect(address, 1);

  printf(1, "\nI will trap now");

  *address = 10;

  printf(1, "\nThis will not print");

  exit();
}
