#include <stdio.h>
#include <string.h>

/*
 * Programma esempio per la lettura degli argomenti da linea di comando
 *
 * compilazione: cc -std=c99 -o arguments arguments.c
 */
int main(int argc, char* argv[])
{ 
  // argc rappresenta la dimensione (numero di elementi) dell'array (di stringhe) argv
  // il primo elemento di argv (a indice 0) e' il nome dell'eseguibile
  
  printf("Numero di argomenti: %d\n", argc); 
  for (int k = 0; k < argc; ++k) {
	printf("Argomento all'indice %d: %s\n", k, argv[k]);
  }

  if (argc < 2) {
	fprintf(stderr, "Numero insufficiente di argomenti\n");
	return 1;
  }
  
  // esempio di verifica della string all'indice 1 dell'array
  if (strcmp(argv[1], "-c") == 0)
	printf("Comprimere...\n");
  else if (strcmp(argv[1], "-d") == 0)
	printf("Decomprimere...\n");
  else {
	fprintf(stderr, "Argomento non valido\n");
	return 2;
  }

  return 0;
}
