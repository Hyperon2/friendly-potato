#include <stdlib.h>

/*
 * Programma esempio di allocazione e rilascio di memoria dinamica.
 *
 * compilazione: cc -std=c99 -o malloc malloc.c
 */
int main(int argc, char * argv[])
{
  // alloca 10 interi
  int* data = (int*) malloc(sizeof(int) * 10);

  if (data == NULL) {
	perror("Memory allocation problem");
	return 1;
  }
  
  data[0] = 1;
  data[9] = 1;

  data[101] = 2; // e' giusto? funziona?
  
  free(data);
  return 0;
}
