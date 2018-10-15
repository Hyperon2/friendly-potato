
#include <stdio.h>
#include <stdlib.h>

/*
 * Programma esempio per leggere un carattere dal device urandom.
 *
 * compilazione: cc -std=c99 -o read read.c
 */
int main(int argc, char * argv[]) {

  FILE* file = fopen("/dev/urandom", "r");
  if (file == NULL) {
    perror("Problem opening file");
    return 1;
  }
  
  // lettura singolo byte
  int t = fgetc(file);
  printf("%d\n", t);
  
  // ci sono altre funzioni piu' efficienti  per leggere?
  // servono?
  
  fclose(file);
  return 0;
}
