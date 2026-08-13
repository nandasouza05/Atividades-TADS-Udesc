#include <stdio.h>
#include <stdlib.h>

void solicitar(int *valor, const char *mensagem);
void preencher(int *vetor, int tamanho);
void mostrar(int *vetor, int tamanho);

int main() {
  int tamanho = 0;
  solicitar(&tamanho, "Quantos elementos quer alocar?\n");
  int *vetor = malloc(sizeof(int) * tamanho);
  preencher(vetor, tamanho);
  mostrar(vetor, tamanho);
  solicitar(&tamanho, "Qual o novo tamanho do vetor?\n");
  vetor = realloc(vetor, sizeof(int) * tamanho);
  preencher(vetor, tamanho);
  mostrar(vetor, tamanho);
  free(vetor);
  return EXIT_SUCCESS;
}
void solicitar(int *valor, const char *mensagem) {
  printf("%s", mensagem);
  scanf("%d", valor);
}
void preencher(int *vetor, int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    printf("Insira um inteiro:\n");
    scanf("%d", &vetor[i]);
  }
}
void mostrar(int *vetor, int tamanho) {
  for (int i = 0; i < tamanho; i++)
    printf("[ %d ] ", vetor[i]);
  printf("\n");
}