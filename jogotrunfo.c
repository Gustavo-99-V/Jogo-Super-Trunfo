#include <stdio.h>

int main(){
    char estado[50] = "Ceará";
    char codigo[50] = "A01";
    char cidade [50] = "Fortaleza";
    float populacao = 2.578;
    float area = 313.8;
    float PIB = 73.400;
    int turisticos = 5; 
    
    printf("PRIMEIRA CARTA!\n\n");
    printf("O estado é: %s\n", estado);
    printf("O código é: %s\n", codigo);
    printf("A cidade é: %s\n", cidade);
    printf("A populçaõ é: %.3f\n", populacao);
    printf("A área é: %.2f\n", area);
    printf("O PIB é: %.3f\n", PIB);
    printf("O total de pontos turísticos são: %i\n\n", turisticos);



    char estado2[50] = "Pernambuco";
    char codigo2[50] = "B02";
    char cidade2[50] = "Recife";
    float populacao2 = 1.488;
    float area2= 218.4;
    float PIB2 =  54.970;
    int turisticos2 = 10;
    

    printf("SEGUNDA CARTA!\n\n");
    printf("O estado é: %s\n", estado2);
    printf("O código é: %s\n", codigo2);
    printf("A cidade é: %s\n", cidade2);
    printf("A população é: %.3f\n", populacao2);
    printf("A área é: %.3f\n", area2);
    printf("O PIB é: %.3f\n", PIB2);
    printf("O total de pontos turísticos são: %i\n", turisticos2);


    return 0;
}