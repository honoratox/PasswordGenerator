/* 
Esse programa gera uma senha aleatória de acordo com o comprimento desejado pelo usuário

This program generates a random password according to the length desired by the user
*/
/*
#include <stdio.h>
#include <string.h>
#include <time.h>     //biblioteca necessária por causa do uso de 'time(NULL)'

void gerarSenha (char senha[], int comprimento);

int main(){

  int comprimento, senhaGerada;
  char senha[50];

  srand(time(NULL));     //'srand' (seed random) é usada para inicializar a semente do gerador de números aleatórios
                         // 'time(NULL)' é uma função que basicamente indica uma mudaça a todos os instantes do tempo no mundo real, ou seja, a resposta do programa vai ser diferente em todas as suas execuções

  printf("\n Digite o tamanho da senha desejada: ");
  scanf("%d", &comprimento);

  if(comprimento <= 0){
    printf("\n DIgite um valor válido, maior do que zero(0): ");
    scanf("%d", &comprimento);
  }

  gerarSenha(senha, comprimento);

  printf("\n Senha gerada: %s", senha);

  return 0;
}

void gerarSenha (char senha[], int comprimento){       //função pra gerar senha aleatória
  
  const char caracteres[] ="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_-+=<>?";       //uma string de nome 'caracteres' indica tudo que pode ser usado na senha
  int numCaracteres = sizeof(caracteres) -1;       //pega o total de caracteres no array e tia 1, pois considera o caractere nulo('\0'), e ele não é válido na senha
  
  for(int i=0; i<comprimento; i++){                   //loop que gera um caractere por vez até atingir o comprimento desejado
    int indiceAleatorio = rand() % numCaracteres;     //a função 'rand()' gera um numero inteiro aleatório e dpois calcula o resto da divisão por 'numCaracteres', o que garante um número dentro do intervalo
    senha[i] = caracteres[indiceAleatorio];           //designa o carcatere aleatório acima a posição 'i' do array
  }

   senha[comprimento] = '\0';       //adiciona um caractere nulo no final da string, pra indicar que acabou
}*/
