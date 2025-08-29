#include <stdio.h> 
#include <string.h> 
#define taxa_juros 0.25 

int main(){ 

    //taxa de juros ao ano 

    int anos; 

    float valor_inicial, valor_final; 
    printf("Digite o valor inicial: "); 
    scanf("%f", &valor_inicial); 
    
    printf("Digite o numero de anos: "); 
    scanf("%d", &anos); 
    
    valor_final = valor_inicial * (1 + taxa_juros * anos); 
    
    printf("O valor final apos %d anos sera: %.2f\n", anos, valor_final); 
    
    
    
    //vetor, matriz e ponteiros 
    int vetor[3] = {20, 30, 40}; 
    int matriz[2][2] = { 
    {1, 2},    {3, 4} 
}; 
    int *ponteiro = &vetor[0]; 
    
    *ponteiro = 50; 
    
    printf("Valores do vetor e seus endereços:\n"); 
        for (int i = 0; i < 3; i++) { 
    printf("vetor[%d] = %d | endereço = %p\n", i, vetor[i], (void*)&vetor[i]); 
} 
    printf("\nValores da matriz e seus endereços:\n"); 
        for (int i = 0; i < 2; i++) { 
        for (int j = 0; j < 2; j++) { 
    printf("matriz[%d][%d] = %d | endereço = %p\n", i, j, matriz[i][j], 
        (void*)&matriz[i][j]); 
} } 

return 0; 
}
