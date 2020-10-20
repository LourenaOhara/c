#include <stdio.h>
#define MAX 10

int main(void) {
  int vetPar[MAX], vetImpar[MAX], n, i, qtdPar = 0, qtdImpar = 0, qtdDesp = 0, qtdTot = 0;

  printf("Digite valores inteiros postivos e pressione ENTER. Para sair, digite 0:\n");
  do{
    scanf("%d", &n);
    if(n !=0){ 
      if(n % 2 == 0){
        if(qtdPar < MAX){
          vetPar[qtdPar] = n;
          qtdPar++;
        }
        else{
          printf("Valor desprezado! Vetor cheio\n");
          qtdDesp ++;
        }
      }
      else{
        if(qtdImpar < MAX){
          vetImpar[qtdImpar] = n;
          qtdImpar++;
        }
        else{
          printf("Valor desprezado! Vetor cheio\n");
          qtdDesp++;
        }  
      }
    }
    qtdTot++; 
  }while(n != 0);

  //a quantidade de elementos em cada vetor.
  if(qtdPar <= MAX && qtdImpar <= MAX){
    printf("Número de elementos no vetor par: %d\n", qtdPar);
    printf("Número de elementos no vetor impar: %d\n", qtdImpar);
  }

  else if (qtdPar <= MAX && qtdImpar > MAX){
    printf("Número de elementos no vetor par: %d\n", qtdPar);
    printf("Número de elementos no vetor impar: %d\n", MAX);
  }

  else if(qtdPar > MAX && qtdImpar <= MAX){
    printf("Número de elementos no vetor par: %d\n", MAX);
    printf("Número de elementos no vetor impar: %d\n", qtdImpar);
  } 

  else{
    printf("Número de elementos no vetor par: %d\n", MAX);
    printf("Número de elementos no vetor impar: %d\n", MAX);
  }

  //o conteúdo dos dois vetores.
  printf("Vetor Par: ");

  if (qtdPar <= MAX){
    for(i=0; i< qtdPar; i++){
      printf("%d ", vetPar[i]);
    }
    printf("\n");
  }

  else{
    for(i=0; i< MAX; i++){
      printf("%d ", vetPar[i]);
    }
    printf("\n");
  }

  printf("Vetor Impar: ");

  if (qtdImpar <= MAX){
    for(i=0; i< qtdImpar; i++){
      printf("%d ", vetImpar[i]);
    }
    printf("\n");
  }

  else{
    for(i=0; i< MAX; i++){
      printf("%d ", vetImpar[i]);
    }
    printf("\n");
  }
  //o total de números lidos.
  printf("Total de números lidos: %d\n", qtdTot - 1);
  //o total de números desprezados.
  printf("Total de números desprezados: %d\n", qtdDesp);
  //o total de números armazenados
  printf("Total de números armazenados: %d\n", (qtdTot - 1) - qtdDesp);

  //o total de números pares armazenados.
  // o total de números ímpares armazenados.
  if(qtdPar <= MAX && qtdImpar <= MAX){
    printf("Total de números pares armazenados: %d\n", qtdPar);
    printf("Total de números ímpares armazenados: %d\n", qtdImpar);
  }

  else if (qtdPar <= MAX && qtdImpar > MAX){
    printf("Total de números pares armazenados: %d\n", qtdPar);
    printf("Total de números ímpares armazenados: %d\n", MAX);
  }

  else if(qtdPar > MAX && qtdImpar <= MAX){
    printf("Total de números pares armazenados: %d\n", MAX);
    printf("Total de números ímpares armazenados: %d\n", qtdImpar);
  } 

  else{
    printf("Total de números pares armazenados: %d\n", MAX);
    printf("Total de números ímpares armazenados: %d\n", MAX);
  }
}
