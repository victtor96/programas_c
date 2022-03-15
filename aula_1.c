#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void consumo();
void converte ();
void area_tri();
void saque();

int main(){
setlocale (LC_ALL, "Portuguese");
int entrada=4;
while (entrada != 0)
{
    printf("Digite 1 para Consumo médio de combustível.\n");
    printf("Digite 2 para converter Fahrenheit.\n");
    printf("Digite 3 para calcular a área de um triangulo.\n");
    printf("Digite 4 para Simular um caixa eletrônico:\n");
    printf("\nDigite a opção desejada ou 0 para sair: ");
    scanf("%d", &entrada);
    system("clear");
    if (entrada == 1){
         printf("Calculadora da Média de consumo de combustível:\n");
         consumo();
         printf("Pressione 1 para voltar ao Menu ou 0 para sair: ");
         scanf("%d",&entrada);
         
         system("clear"); 
         
          }        
    else if(entrada == 2 ){
        printf("Conversor de Fahrenreit para Celcius:\n");
        converte();
        printf("Pressione 1 para voltar ao Menu ou 0 para sair: ");
        scanf("%d",&entrada);
        system("clear");
    }    
    else if(entrada == 3){
        printf("Calculadora da área do triangulo:\n");
        area_tri();
        printf("Pressione 1 para voltar ao Menu ou 0 para sair: ");
        scanf("%d",&entrada);
        system("clear");
    }
    else if(entrada == 4){
        printf("Simulador de caixa eletrônico.\n");
        saque();
        printf("Pressione 1 para voltar ao Menu ou 0 para sair: ");
        scanf("%d",&entrada);
        system("clear");
    }

}

return 0;

}

void consumo(){
    float distancia,consumo,media;

    printf("Digite o valor da distancia percorrida: ");
    scanf("%d", &distancia);
    printf("Digite o valor de litros consumidos: ");
    scanf("%d", &consumo);
    media = distancia/consumo;
    printf ("\nmedia do consumo medio = %.2f Km/L \n\n",media);
}

void converte(){
    float temp,f;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f",&f);
    temp = (f-32)/1.8;
    printf("\nA temperatura em celsius: %.2f C°\n\n", temp);

}

void area_tri(){
    float altura, base,area;
    printf("\nDigite a altura do triangulo: ");
    scanf("%f", &altura);
    printf("\nDigite o tamanho da base: ");
    scanf("%f", &base);
    area = (base*altura)/2;
    printf("\nA área do tringulo: %.2f\n\n", area);
 
}

void saque(){
    float saque,saldo;
    saldo = 1000;
    
    printf("\nDigite o valor a ser sacado\nR$: ");
    scanf("%f", &saque);
    if (saque > saldo){
        printf("\nSaldo Indisponível !!!\n");
    }
    else {
        printf("\nvalor sacado: R$ %.2f", saque);
        saldo = saldo - saque;
        printf("\nSaldo disponível: R$ %.2f\n\n", saldo);
    }
}
