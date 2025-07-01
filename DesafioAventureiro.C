#include <stdio.h>
int main(){
	int t, b, r, c;
	printf("Peça Torre\n");
	for ( int t = 0; t <= 4; t++) {
		printf("Direita");
		printf("\n");
	}
	printf("\n");
		
	b = 1;
	printf("Peça Bispo\n");
    while (b <= 5) {
        printf("Cima\n");
        printf("Direita");
        printf("\n");
        b++;
    }
    printf("\n");
    
	r = 1;
   printf("peça Rainha\n");
    do {
        printf("esquerda\n");
        r++;
    } while (r <= 5);
    printf("\n");
    printf("\n");
    
    c = 1;
	printf("Peça Cavalo\n");
    while (c--) {
	for (int i = 0; i <= 1; i++){
	printf("Baixo\n");
	} printf("Direita");
	printf("\n");
	printf("\n");
}
   
	return 0;
}