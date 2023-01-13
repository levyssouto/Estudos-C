
//GRUPO RSA

//DANIEL NETTO
//LEVY SOUTO
//LUCAS JUSTO
//LEONARDO TISO

//implementacao RSA C

#include <stdio.h>
#include <math.h>
#include <time.h>

int main(int argc, char * argv[]){
	FILE * arq, * arqv;
	long long p, q, n, phi, e, d;

	printf("escolha dois numeros primos: ");
	scanf("%d %d", &p, &q);

	n = p * q;
	phi = (p-1) * (q-1);

	printf("gerando chave publica...\n");

	long long i, j;
	srand(time(NULL));
	for(i = 2; i < phi; i++){
		int ehPrimo = 1;
		for(j = 2; j <= sqrt(i); j++){
			if(i%j == 0) ehPrimo = 0;
		}

		if(phi % i != 0 && i != p && i != q && ehPrimo){
			e = i;
		}
		if(rand() % 100 < 2) break;
	}

	printf("gerando chave privada...\n");

	for(int x = 2; x < phi; x++){
		int tmp = (x * e) % phi;
		if(tmp == 1){
			d = x;
			break;
		}
	}

	printf("chave publica: (%d,%d)\nchave privada: (%d,%d)\n\ncriptografando sua mensagem\n\n", e, n, d, n);

	if((arq = fopen(argv[1], "rb")) == NULL){
		printf("Erro com o arquivo de entrada.\n");
		return 2;
	}

	arqv = fopen((argv[2] == NULL ? "rsa-cifrada" : argv[2]), "w");

	long long b;
	while(1){
		b = fgetc(arq);
		if(feof(arq))
			break;

		long long E = e, A = b, P = 1;

		while(1){
			if(E == 0){
				printf("%d ", P);
				fputc(P, arqv);
				break;
			}
			else if (E % 2 != 0){
				P = (A * P) % n;
				E = (E-1) / 2;
			}
			else{
				E = E / 2;
			}
			A = (A * A) % n;
		}
	}

	fclose(arq);
	fclose(arqv);
	return 0;
}

