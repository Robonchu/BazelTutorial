#include "lib/hello-name.h"
#include "main/hello-get-name.h"
#include <iostream>
#include <string>

int main(int argc, char** argv) {
  std::string myname = "robots";
  if (argc > 1) {
    myname = argv[1];
  }
  std::cout << get_name(myname) << std::endl;
  print_myname();
  return 0;
}
