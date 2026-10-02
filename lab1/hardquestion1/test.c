#include <stdio.h>
int main() {
  // Standard string prints will simplify
  printf("This is a test.\n"); // puts
  // Number formatting will not (even if known at comptime?)
  printf("%d\n", 2); // printf
  // Will not simplify if return code is used
  int ret = printf("Hello, world!\n"); // printf
  // Even if discarded
  ret = 10;
  // Again, formatting will not simplify
  printf("%d\n", ret); // printf
  // Even with just strings
  printf("%s\n", "This string is inserted"); // printf
  // Printing with stderr will not simplify
  fprintf(stderr, "This string is on the error channel\n"); // printf
  // Same with manually specifying stdout
  fprintf(stdout, "This string is on the stdout channel\n"); // printf
  return 0;
}
