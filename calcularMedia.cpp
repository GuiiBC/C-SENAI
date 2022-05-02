#include <stdio.h>
#include <stdlib.h>

main() {
	float n1, n2, n3, n4, n5, m1, m2;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	
	printf("Digite a quarta nota: ");
	scanf("%f", &n4);
	
	m1 = (n1 + n2 + n3 + n4) / 4;
	
	if (m1 >= 7) {
		printf("Aprovado!\n Média final: %f", m1);
	}
	else {
		printf("Você não atingiu a média. Digite a nota de recuperação: ");
		scanf("%f", &n5);
		m2 = (n5 + m1) / 2;
		
		if (m2 >= 5) {
			printf("Aprovado! Média final: %f", m2);
		}
		else {
			printf("Reprovado! Média final: %f", m2);
		}
	}
}
