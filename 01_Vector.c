#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <sys/time.h> //Captura Tempo
#include <time.h> //Numeros Aleatorios

int main (int argc, char *argv[]) {
	int *Vetor;
	int n, i, soma=0;
	struct timeval inicio, final;
	double total;
	srand(time(NULL));
	n=atoi(argv[1]);
	Vetor=(int*)malloc(n*sizeof(int));
	for (i=0;i<n;i++){
		Vetor[i]=i*i;
		//Vetor[i]=rand()%10001; // Aleatorios
	}
	gettimeofday(&inicio, NULL);
	for (i=0;i<n;i++){
		soma+=Vetor[i];
	}
 	gettimeofday(&final, NULL);
 	total = (((final.tv_sec - inicio.tv_sec)*1000000) + (final.tv_usec - inicio.tv_usec));
	printf("%d\t", n);
 	printf("%4lf\n", (total/1000000));
	
	free(Vetor);
}
