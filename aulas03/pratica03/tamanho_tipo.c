#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()  { 
printf("O tipo 'char' ocupa %lu byte(s) na memória.\n", sizeof(char));
  printf("O tipo 'int' ocupa %lu byte(s) na memória.\n", sizeof(int));
  printf("O tipo 'float' ocupa %lu byte(s) na memória.\n", sizeof(float));
  printf("O tipo 'double' ocupa %lu byte(s) na memória.\n", sizeof(double));
  printf("O tipo 'void' ocupa %lu byte(s) na memória.\n", sizeof(void));
  printf("O tipo 'char' aceita valores entre %i e %i\n.\n", CHAR_MIN, CHAR_MAX);
  printf("O tipo 'int' aceita valores entre %i e %i\n.\n", INT_MIN, INT_MAX);
  printf("O tipo 'float' aceita valores entre %E e %E\n.\n", FLT_MIN, FLT_MAX);
  printf("O tipo 'double' aceita valores entre %E e %E\n.\n", DBL_MIN, DBL_MAX);
  int idade = 25;
  printf("Idade: %i\n", idade);
  float altura = 1.75f;
  printf("Altura: %.2f\n", altura);
  char tecla = 'A';
  double numero_e = 2.7182818284;
  printf("Numero de Euler: %.10f\n", numero_e);
  #define PI 3.141593

  //PI = 3.14;
  printf("Valor de PI: %f\n", PI);
  const char SEXO_MASCULINO = 'M';
  printf("Sexo Masculino: %c\n", SEXO_MASCULINO);
  printf("O tipo 'short int' ocupa %lu byte(s) na memória.\n", sizeof(short int));
  printf("O tipo 'long int' ocupa %lu byte(s) na memória.\n", sizeof(long int));
  printf("O tipo 'long double' ocupa %lu byte(s) na memória.\n", sizeof(long double));
  printf("O tipo 'unsigned char' aceita valores entre %i e %i\n.\n", 0, UCHAR_MAX);
  printf("O tipo 'short int' aceita valores entre %i e %i\n.\n", SHRT_MIN, SHRT_MAX);
  printf("O tipo 'unsigned short int' aceita valores entre %i e %i\n.\n", 0, USHRT_MAX);
  printf("O tipo 'double' aceita valores entre %E e %E\n.\n", LDBL_MIN, LDBL_MAX);
  long int populacao_mundial = 7800000000L;
  printf("Populacao Mundial: %li\n", populacao_mundial);
  const short int HORA_EM_SEGUNDOS = 3600;
  printf("1 hora corresponde a %i segundos.\n", HORA_EM_SEGUNDOS);

  long double precisao_extrema = 3.14159265358979323846L;
  printf("Precisao Extrema: %.20Lf\n", precisao_extrema);
  char caractere = 255;
  int inteiro = caractere;
  float flutuante = inteiro;

  double duplo = flutuante;

  printf("caractere = %i\n", caractere);
  printf("inteiro = %i\n", inteiro);
  printf("flutuante = %.7f\n", flutuante);
  printf("duplo = %.7f\n", duplo);
  duplo = 256.1234567;
  flutuante = (float) duplo;
  inteiro = (int) flutuante;
  caractere = (char) inteiro;

  printf("caractere = %i\n", caractere);
  printf("inteiro = %i\n", inteiro);
  printf("flutuante = %.7f\n", flutuante);
  printf("duplo = %.7f\n", duplo);


  ISBN: 000000000000;
  int isbn = 000000000000;
  printf("646822832534: ")
  Num. Paginas: 222
    printf("Num. Paginas: %i\n", Num. Paginas);
  int num_paginas = 222;
  Preco: R$ 2000.00
    printf("Preco: R$ %f\n", Preco);
  int preco = 2000.00;
  Publicado em 2004
  print("Publicado em %i\n", Publicado em 2004);
  int ano_publicacao = 2004;
    Matricula:2312140059
      print("Matricula: %i\n", Matricula);
  int matricula = 2312140059;
    Idade: 19 anos
      printf("Idade: %i anos\n", Idade);
  int idade = 19;
    Altura: 1.79 m
      printf("Altura: %f m\n", Altura);
  int altura = 1.79;
    Peso: 91.3 kg
      printf("Peso: %f kg\n", Peso);
  int peso = 91.3;
    printf("Nome: %s\n", Nome);
  char nome[50] = "Marcus";
    Sexo: Masculino
      printf("Sexo: %c\n", Sexo);
  int sexo = M;
    printf("Data de Nascimento: %s\n", Data de Nascimento);
  char data_nascimento[50] = "05/06/1988";
  
    


  
  
  
  return 0;
}
