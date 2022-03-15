#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int exe_1();
int exe_2();
int exe_3();
int exe_4();





int main(){
int x=1,escolha=1;
  
for(;escolha!=0;){
    system("clear");
    printf("\nDigite 1 para acessar o exe_1.");
    printf("\nDigite 2 para acessar o exe_2.");
    printf("\nDigite 3 para acessar o exe_3.");
    printf("\nDigite 4 para acessar o exe_4.");
    printf("\n\nDigite o numero que deseja acessar ou 0 para sair: ");
    scanf("%d",&escolha);

    if(escolha == 1){
     exe_1();
    }
    else if(escolha == 2){
      exe_2();
    }
    else if(escolha == 3){
      exe_3();
    }
    else if(escolha == 4){
      exe_4();
    }





  }


return 0;
}

int exe_1(){
    float media=0;
   for(;true;){
   media = 0; 
    for (;media>=0 && media<=10;){
    printf("\nDigite a media do aluno entre 0 e 10: ");
    printf("\nOU Digite -1 para sair: ");
    scanf("%f",&media);  
    
    system("clear");
    if(media == -1){return 0;}
    
    else if(media >= 7){
      printf("\nAluno aprovado!!!\n");
    }
    
    else{
      printf("\nAluno Reprovado!!!\n");
    
    }
   }
   printf("\nValor invalido!!\nDigite um valor entre 0 e 10.\n");
   
   }
  return 0;
}

int exe_2(){
  
  for (int x=0;x>=0;){
   system("clear");
   printf("para sair digite um numero negativo\nDigite um valor:");
   scanf("%d", &x);
  }
  
  return 0;
  
  
  
}


int exe_3(){
  int soma, i,seletor=1;
  for(;seletor>0;){
     
     soma =0;
     for(i=0;i!=130;){
     soma += i;
     system("clear");
     if(soma >0){
       printf("O valor parcial da soma: %d",soma);
     }
     printf("\nPara parar a soma digite 130\nDigite um numero para somar: ");
     scanf("%d",&i);
     
     }
   system("clear");
   printf("O valor somado foi: %d\n\n",soma);
   printf("\n\nDigite 1 para repetir a soma ou 0 para sair:");
   scanf("%d",&seletor);
  }
  
  
  
  
  return 0;
}


int exe_4(){
  int soma, i,seletor=1,contador=0;
  float media;
  for(;seletor>0;){
     media =0;
     contador =0;
     soma =0;
     for(i=0;i!=125;contador++){
     soma += i;
     if (contador >0){
     media = (float)soma/contador;}
     system("clear");
     if(soma >0){
       printf("O valor parcial da soma: %d",soma);
       printf("\nQuantidade de numeros somados:%d",contador);
     }
     printf("\nPara parar a soma digite 125\nDigite um numero para somar: ");
     scanf("%d",&i);
     }
   
   
   system("clear");
   printf("O valor somado foi: %d\n\n",soma);
   
   printf("A media da soma dos %d numeros sao: %.2f", (contador-1),(media));
   printf("\n\nDigite 1 para repetir a soma ou 0 para sair:");
   scanf("%d",&seletor);
  
  
  
  }
 
  

  return 0;
  
  
  }
