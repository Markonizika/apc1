#include <stdio.h>

int main() {
  float nota = 0.0f;
  printf("entre com uma nota entre 0 e 10: ");
  int deu_certo = scanf("%f", &nota);

  printf("voce digitou: %f\n", nota);

  double pi = 0.0;
  printf("entre com um valor de pi com ate 10 casas: ");


  printf("voce digitou: %.10f\n", pi);
  

  return 0;
}