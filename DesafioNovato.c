#include <stdio.h>
int main(){
	int t, b, r;
	printf("Peça Torre\n");
	for ( int t = 0; t <= 4; t++) {
		printf("Direita\n");
	}
	b = 1;
	printf("Peça Bispo\n");
    while (b <= 5) {
        printf("Cima\n");
        printf("Direita\n");
        b++;
    }
	r = 1;
   printf("peça Rainha\n");
    do {
        printf("esquerda\n");
        r++;
    } while (r <= 5);
   
	return 0;
}