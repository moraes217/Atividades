#include <stdio.h>
#include <stdlib.h>

int main(){
	int homemA=0,mulherA=0,outrosA=0,homemB=0,mulherB=0,outrosB=0,homemC=0,mulherC=0,outrosC=0,idade,A16_21=0,A22_40=0,Aacima_40=0,B16_21=0,B22_40=0,Bacima_40=0,C16_21=0,C22_40=0,Cacima_40=0,op_genero,op_candidato, participantes, i;
	float cad_a,cad_b,cad_c,cont_votosA,cont_votosB,cont_votosC;

	printf("Informe o numero de participantes: ");
	scanf("%d", &participantes);
	
	for(i=0;i<participantes;i++){
		
		printf("Escolha seu candidato 1-Candidato A | 2- Canditado B | 3-Candidato C ");
		scanf("%d", &op_candidato);
		
		switch(op_candidato){
			case 1:
				do{
					printf("Favor, informar sua idade: ");
					scanf("%d", &idade);
					
					if(idade>=16 && idade<=21){
						A16_21++;
					}else if(idade>=22 && idade<=40){
						A22_40++;
					}else{
						Aacima_40++;
					}	
				}while(idade<16);
				
				printf("Voce e 1-Homem | 2-Mulher | 3-Outros\n");
				scanf("%d", &op_genero);
		
		
				switch(op_genero){
					case 1:
					homemA++;
					break;
					case 2: 
					mulherA++;
					break;
					case 3: 
					outrosA++;
					break;
					default:
					printf("Valor invalido! ");
				}
				cad_a++;
				break;
			case 2: 
				do{
					printf("Favor, informar sua idade: ");
					scanf("%d", &idade);
					printf("%d", idade);
										
					if(idade>=16 && idade<=21){
						B16_21++;
					}else if(idade>=22 && idade<=40){
						B22_40++;
					}else{
						Bacima_40++;
					}	
				}while(idade<16);
				
				printf("Voce e 1-Homem | 2-Mulher | 3-Outros\n");
				scanf("%d", &op_genero);
		
		
				switch(op_genero){
					case 1:
					homemB++;
					break;
					case 2: 
					mulherB++;
					break;
					case 3: 
					outrosB++;
					break;
					default:
					printf("Valor invalido! ");
				}
				cad_b++;
				break;
			case 3: 
			do{
					printf("Favor, informar sua idade: ");
					scanf("%d", &idade);
					
					if(idade>=16 && idade<=21){
						C16_21++;
					}else if(idade>=22 && idade<=40){
						C22_40++;
					}else{
						Cacima_40++;
					}	
				}while(idade<16);
				
				printf("Voce e 1-Homem | 2-Mulher | 3-Outros\n");
				scanf("%d", &op_genero);
		
		
				switch(op_genero){
					case 1:
					homemC++;
					break;
					case 2: 
					mulherC++;
					break;
					case 3: 
					outrosC++;
					break;
					default:
					printf("Valor invalido! ");
				}
				cad_c++;
				break;
			default:
			printf("Valor invalido! ");
		}

			
	
	

	}
	
	cont_votosA=cad_a/(cad_a+cad_b+cad_c)*100;
	cont_votosB=cad_b/(cad_a+cad_b+cad_c)*100;
	cont_votosC=cad_c/(cad_a+cad_b+cad_c)*100;

	printf("\nVotacao Candidato A\n");
	printf("Total de votos: %.0f\nPercentagem dos votos: %.2f%%\nHomens: %d\nMulheres: %d\nOutros: %d\nDentre 16 a 21 anos: %d\nDentre 22 a 40 anos: %d\nAcima dos 40 anos: %d\n", cad_a, cont_votosA, homemA, mulherA, outrosA, A16_21, A22_40, Aacima_40);
	
	printf("\nVotacao Candidato B\n");
	printf("Total de votos: %.0f\nPercentagem dos votos: %.2f%%\nHomens: %d\nMulheres: %d\nOutros: %d\nDentre 16 a 21 anos: %d\nDentre 22 a 40 anos: %d\nAcima dos 40 anos: %d\n", cad_b, cont_votosB, homemB, mulherB, outrosB, B16_21, B22_40, Bacima_40);
	
	printf("\nVotacao Candidato C\n");
	printf("Total de votos: %.0f\nPercentagem dos votos: %.2f%%\nHomens: %d\nMulheres: %d\nOutros: %d\nDentre 16 a 21 anos: %d\nDentre 22 a 40 anos: %d\nAcima dos 40 anos: %d\n", cad_c, cont_votosC, homemC, mulherC, outrosC, C16_21, C22_40, Cacima_40);


	return(0);
}
