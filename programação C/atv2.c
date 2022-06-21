#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int idade[3][3],genero[3][3],dados[4];//idade,op_genero,op_candidato, participantes, i;
float candidato[4][1];

int info(){
	do{
		printf("Favor, informar sua idade: ");
		scanf("%d", &dados[0]);
		
		if(dados[0]>=16 && dados[0]<=21){
			idade[1][dados[2]]++;
		}else if(dados[0]>=22 && dados[0]<=40){
			idade[2][dados[2]]++;
		}else{
			idade[3][dados[2]]++;
		}	
	}while(dados[0]<16);
	
	do{		
		printf("Você é 1-Homem | 2-Mulher | 3-Outros: ");
		scanf("%d", &dados[1]);
		
		switch(dados[1]){
			case 1:
				genero[dados[1]][dados[2]]++;
				break;
			case 2: 
				genero[dados[1]][dados[2]]++;
				break;
			case 3: 
				genero[dados[1]][dados[2]]++;
				break;
			default:
				printf("Valor inválido!\n");
		}
	}while(dados[1]<=0 || dados[1]>=4);
}

int info2(){
	printf("Informe o número de participantes: ");
	scanf("%d", &dados[3]);
	
	for(dados[4]=0;dados[4]<dados[3];dados[4]++){
		do{
			printf("Escolha seu candidato 1-Candidato A | 2- Canditado B | 3-Candidato C: ");
			scanf("%d", &dados[2]);
			
			switch(dados[2]){
				case 1:
					info();
					candidato[1][1]++;
					break;
				case 2: 
					info();
					candidato[2][1]++;
					break;
				case 3: 
					info();
					candidato[3][1]++;
					break;
				default:
				printf("Valor invaálido!\n");
			}
		}while(dados[2]<=0 || dados[2]>=4);
	}

	for(dados[4]=1;dados[4]<=3;dados[4]++){
		candidato[4][1]=candidato[dados[4]][1]/(candidato[1][1]+candidato[2][1]+candidato[3][1])*100;
		printf("\nVotação Candidato %d\n\n", dados[4]);
		printf("Total de votos: %.0f\nPorcentagem dos votos: %.2f%%\nHomens: %d\nMulheres: %d\nOutros: %d\nDentre 16 a 21 anos: %d\nDentre 22 a 40 anos: %d\nAcima dos 40 anos: %d\n", candidato[dados[4]][1],candidato[4][1],genero[1][dados[4]],genero[2][dados[4]],genero[3][dados[4]],idade[1][dados[4]],idade[2][dados[4]],idade[3][dados[4]]);
	}
}

int main(){
	setlocale(LC_ALL, "portuguese");
	genero[3][1]=0;//bug na matriz
	info2();
	return(0);
}
