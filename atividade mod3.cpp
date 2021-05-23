#include <stdio.h>
#include<stdlib.h>
#include <locale.h>
int main() {
	char name[7][40];
    int linha, coluna,falta[7][4],faltasoma[7],aprovado=0, reprovado=0, quintapv=0, reprofalta=0;
    float matriz[7][4],somaLinhas[7],mediaAluno[7],mediasala=0,mediageral;
 setlocale(LC_ALL,"Portuguese");
   printf("\n##################DIARIO######################\n\n ");
    for ( linha = 0; linha < 7; linha++) {
    	printf("\nDigite o nome do %dº Aluno: ",linha+1);
    	 gets (name[linha]);
    	  for ( coluna = 0; coluna < 4; coluna++){
		    printf("\nFaltas %dº semestre: ",coluna+1);
        	scanf("%d",&falta[linha][coluna]);
            printf("Digite a N%d: ", coluna + 1,name[linha]);
            scanf("%f", &matriz[linha][coluna]);
                        faltasoma[linha] += falta[linha][coluna];
           				 somaLinhas[linha] += matriz[linha][coluna];
           				 mediaAluno[linha] = somaLinhas[linha]/4;
                         mediasala = mediasala + matriz[linha][coluna];
       system("cls");                  
       }
		faltasoma[linha]= faltasoma[linha] +1; // gambiarra usada porque não descobri porque a adição  sempre imprime com menos 1.
        fflush(stdin);
        printf("\n\n");
     }
     mediageral = mediasala/28; // 7alunos x 4 notas = 28, funciona quando ja tenho o quanto de notas e alunos definidos
     system("cls");
    for(linha=0; linha < 7; linha++){
		if (faltasoma[linha] <=37){
			printf("\n\tO Aluno: %s", name[linha]);
			printf("\n\tQuatidade de faltas: %d", faltasoma[linha]);
			printf("\n\tMédia do Aluno = %.2f", mediaAluno[linha]);
			if (mediaAluno[linha] >= 6){
			printf("\n\tResultado final: APROVADO\n");
			aprovado++;
			}else if (mediaAluno[linha] <= 3){
			printf("\n\tResultado final: REPROVADO\n");
			reprovado++;
			}else{
			printf("\n\tResultado final: QUINTA PROVA\n");
			quintapv++;
			}
		}else{
			printf("\n\tO Aluno: %s", name[linha]);
			printf("\n\tQuatidade de faltas: %d", faltasoma[linha]);
			printf("\n\tMédia = %.2f", mediaAluno[linha]);
			printf("\n\tResultado final: REPROVADO por FALTA\n");
			reprofalta++;
		}
	}
  	printf("\n\tQuantidade de alunos APROVADO: %d", aprovado);
	printf("\n\tQuantidade de alunos QUINTA PROVA: %d", quintapv);
	printf("\n\tQuantidade de alunos REPROVADO: %d", reprovado);
	printf("\n\tQuantidade de alunos REPROVADO POR FALTA: %d\n", reprofalta);
	printf("\n\n\t ---SALA OBTEVE A NOTA %.2f NA MEDIA---\n\t", mediageral);
	system ("pause");
    return 0;
}
