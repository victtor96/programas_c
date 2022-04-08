#include <stdlib.h>
#include <stdio.h>

#ifdef _WIN32
#define limpa  "cls"
#else
#define limpa  "clear"
#endif



void exer_1();
void exer_2();
void exer_3();
void exer_4();
void exer_5();
void exer_6();
void menu();

int main(){

int entrada;
menu();
printf("\nEntrada: ");
scanf("%d", &entrada);
system(limpa);


for (int x =1; x!=0;){
    
    menu();
    if(entrada == 1){
        exer_1();
    }
    
    else if(entrada == 2){
        exer_2();
    }
    
    else if(entrada == 3){
        exer_3();
    }
    
    else if(entrada == 4){
        exer_4();
    }
    
    else if(entrada == 5){
        exer_5();
    }
    
    else if(entrada == 6){
        exer_6();
    } 
    else if(entrada == 0){
        return 0;
    }
    else{
        printf("\nValor invalido!!!\nTente Novamente.");
    }
    
    printf("\nEntrada: ");
    scanf("%d", &entrada);
    
    system(limpa);



}










return 0;

}




void exer_1(){
    float nota1,nota2,media;
    system(limpa);
    printf("Programa Que calcula a média de duas notas do aluno\nE informa se esta aprovado ou não.\n");
    for (int x=1;x!=0;){
    
    printf("Digite a Nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a Nota 2: ");
    scanf("%f", &nota2);
    if(nota1>10 || nota2>10){
        printf("Valores invalidos!!!\nDigite as notas entre 0 e 10.\n");
    }
    else{
    media = (nota1+nota2)/2;
    if(media <7){
        printf("Aluno Reprovado!!!\nMedia final: %.2f", media);
    }
    else{
        printf("Aluno Aprovado!!!\nMedia final: %.2f", media);
    }
    printf("\nDigite 1 para repetir.\nDigite 0 para voltar ao menu.\n");
    printf("Entrada: ");
    scanf("%d",&x);
    system(limpa);
    printf("Programa Que calcula a média de duas notas do aluno\nE informa se esta aprovado ou não.\n");
    }
    
    }
    system(limpa);
    menu();
}


void exer_2(){
    float vetor[4],soma=0;
    system(limpa);
    for(int x=1;x!=0;){
    printf("\nPrograma que imprime a soma do conteudo de um vetor de 5 posições.");
    soma = 0;
    for (int i=0;i<5;i++){
       printf("\nInsira o numero no vetor [%d]: ", i+1);
       scanf("%f",&vetor[i]);
       soma += vetor[i];
    }
    printf("\nA soma total é: %.2f", soma);
    printf("\nDigite 1 para repetir.\nDigite 0 para voltar ao menu.\n");
    printf("Entrada: ");
    scanf("%d",&x);
    system(limpa);
    
    
    }
    
    system(limpa);
    menu();
}


void exer_3(){
    
    int vetor[4],troca;
    system(limpa);
    for(int x=1;x!=0;){
    printf("\nPrograma que imprime o maior numero de um vetor de 5 posições.");
    for (int i=0;i<5;i++){
       printf("\nInsira o numero no vetor [%d]: ", i+1);
       scanf("%d",&vetor[i]);
    }
    for(int i=0;i<5;i++){
        for (int j=0 ;j<4;j++){
            if(vetor[j]>=vetor[j+1]){
                troca = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = troca;
            }
        }
    }

    printf("\nO maior numero é: %d", vetor[4]);
    printf("\nDigite 1 para repetir.\nDigite 0 para voltar ao menu.\n");
    printf("Entrada: ");
    scanf("%d",&x);
    system(limpa);
    
    
    }
    
    system(limpa);
    menu();
}


void exer_4(){
    int vetor[4],soma=0,media;
    system(limpa);
    for(int x=1;x!=0;){
    printf("\nPrograma que imprime a soma e media do conteudo de um vetor de 5 posições.");
    soma = 0;
    media = 0;
    for (int i=0;i<5;i++){
       printf("\nInsira o numero no vetor [%d]: ", i+1);
       scanf("%d",&vetor[i]);
       soma += vetor[i];
    }
    media = soma/5;

    printf("\nA soma total é: %d", soma);
    printf("\nA média dos numeros é: %d",media);
    
    printf("\nDigite 1 para repetir.\nDigite 0 para voltar ao menu.\n");
    printf("Entrada: ");
    scanf("%d",&x);
    system(limpa);
    
    
    }
    
    system(limpa);
    menu();    
}


void exer_5(){
    int vetor[3][5],soma=0;
    system(limpa);
    for(int x=1;x!=0;){
    printf("\nPrograma que imprime a soma do conteudo de um vetor de 5 posições.");
    soma = 0;
    for (int i=0;i<=2;i++){
       for(int j =0;j<=4;j++){
       printf("\nInsira o numero na matrix [%d,%d]: ", i,j);
       scanf("%d",&vetor[i][j]);
       soma += vetor[i][j];
       }
    }
    
    printf("\nA soma total é: %d", soma);
    printf("\nDigite 1 para repetir.\nDigite 0 para voltar ao menu.\n");
    printf("Entrada: ");
    scanf("%d",&x);
    system(limpa);
    
    
    }
    
    system(limpa);
    menu();
   
}


void exer_6(){
    
    for(int x =1;x!=0;){
    int contador=0;
    printf("\nPrograma Que imprime Linguagem C com WHILE, DO_WHILE E FOR:\n");
    while(contador <5){
        printf("Linguagem C\n");
        contador++;
    }
    contador =0;
    printf("\n");
    do{
        printf("Linguagem C\n");
        contador++;
    }while(contador<5);
    printf("\n");
    
    for(contador = 0;contador<5;contador++){
        printf("Linguagem C\n");
    }
    printf("\nDigite 1 para repetir.\nDigite 0 para voltar ao menu.\n");
    printf("Entrada: ");
    scanf("%d",&x);
    system(limpa);
    }
    menu();

}

void menu(){
printf("Digite 1 para acessar o Exercício 1.");
printf("\nDigite 2 para acessar o Exercício 2.");
printf("\nDigite 3 para acessar o Exercício 3.");
printf("\nDigite 4 para acessar o Exercício 4.");
printf("\nDigite 5 para acessar o Exercício 5.");
printf("\nDigite 6 para acessar o Exercício 6.");
printf("\nDigite 0 para encerrar o Programa.\n");
printf("--------------------------------------\n");


}
