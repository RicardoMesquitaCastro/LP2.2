#include <stdio.h>
#include <stdlib.h>

main(){
  int numero[5];
  int i, maior=0, menor=10000, soma=0;
  float media;
  
  //Carregamento
  for(i=0; i < 5; i++){
      printf("Digite o %d numero: ", i+1);  
      scanf("%d",&numero[i]);  
      if (numero[i] > maior){
        maior = numero[i];
      }
      if (numero[i] < menor){
        menor = numero[i];
      } 
      soma = soma+numero[i];
  }
  
  //Mostrar
  printf("*** Mostrar vetor ***\n");
  for (i=0; i<5; i++){
     printf("O %d numero e : %d \n", i+1, numero[i]);  
  }
  //Mostrar invertido
  printf("*** Mostrar vetor invertido***\n");
  for (i=4; i>=0; i--){
     printf("O %d numero e : %d \n", i+1, numero[i]);   
  }
  //primeiro e ultimo
  printf("O primeiro numero e : %d \n", numero[0]); 
  printf("O ultimo numero e : %d \n", numero[4]);     
  printf("O maior numero e : %d \n", maior); 
  printf("O menor numero e : %d \n", menor);
  printf("A soma e : %d \n", soma);
  media = soma/5;
  printf("A media e : %.2f \n", media);
       
  printf("\n\n");     
  system("pause");       
}

