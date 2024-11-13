#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX_ALUNOS 100

struct aluno {
    char nome[50];
    int matricula;
    long long cpf;
    int idade;
    int curso;
    int campus;
};

int main() {
    struct aluno alunos[MAX_ALUNOS];
    int numalunos = 0;

    while (1) {
        printf("\n--- Sistema de Registro de Alunos ---\n");
        printf("1. Adicionar Aluno\n");
        printf("2. Exibir Alunos\n");
        printf("3. Sair\n");
        printf("Digite sua escolha: ");

        int escolha;
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                if (numalunos < MAX_ALUNOS) {
                    printf("\nDigite o nome completo: ");
                    scanf(" %[^\n]", alunos[numalunos].nome);

                    printf("Digite o CPF: ");
                    scanf("%lld", &alunos[numalunos].cpf);
                    while (alunos[numalunos].cpf < 10000000000LL || alunos[numalunos].cpf > 99999999999LL) {
                        printf("CPF inválido, digite um número de 11 dígitos: ");
                        scanf("%lld", &alunos[numalunos].cpf);
                    }

                    printf("Digite a matrícula: ");
                    scanf("%d", &alunos[numalunos].matricula);
                    while (alunos[numalunos].matricula < 1000000000 || alunos[numalunos].matricula > 9999999999) {
                        printf("Matrícula inválida, digite um valor de 10 dígitos: ");
                        scanf("%d", &alunos[numalunos].matricula);
                    }

                    int ano_nascimento, mes_nascimento, dia_nascimento;
                    printf("Digite o ano de nascimento: ");
                    scanf("%d", &ano_nascimento);
                    printf("Digite o mês de nascimento: ");
                    scanf("%d", &mes_nascimento);
                    while (mes_nascimento < 1 || mes_nascimento > 12) {
                        printf("Mês inválido, digite um valor entre 1 e 12: ");
                        scanf("%d", &mes_nascimento);
                    }
                        printf("Digite o dia de nascimento: ");
                        scanf("%d", &dia_nascimento);
                        while (dia_nascimento < 1 || dia_nascimento > 31) {
                            printf("Dia inválido, digite um valor entre 1 e 31: ");
                            scanf("%d", &dia_nascimento);
                        }
                    }

                    time_t t = time(NULL);
                    struct tm *data_atual = localtime(&t);
                    int ano_atual = data_atual->tm_year + 1900;
                    int mes_atual = data_atual->tm_mon + 1;
                    int dia_atual = data_atual->tm_mday;

                    int idade = ano_atual - ano_nascimento;
                    if (mes_atual < mes_nascimento || (mes_atual == mes_nascimento && dia_atual < dia_nascimento)) {
                        idade--;
                    }
                    alunos[numalunos].idade = idade;

                    while (alunos[numalunos].idade > 113 || alunos[numalunos].idade < 12) {
                        if (alunos[numalunos].idade > 113) {
                            printf("Idade máxima excedida.\n");
                        } else if (alunos[numalunos].idade < 12) {
                            printf("Idade inválida. O aluno deve ter pelo menos 12 anos. Em casos isolados, entre em contato com nossa secretaria.\n");
                        }

                        printf("Por favor, digite novamente a data de nascimento.\n");
                        printf("Digite o ano de nascimento: ");
                        scanf("%d", &ano_nascimento);
                        printf("Digite o mês de nascimento: ");
                        scanf("%d", &mes_nascimento);
                        printf("Digite o dia de nascimento: ");
                        scanf("%d", &dia_nascimento);

                        idade = ano_atual - ano_nascimento;
                        if (mes_atual < mes_nascimento || (mes_atual == mes_nascimento && dia_atual < dia_nascimento)) {
                            idade--;
                        }
                        alunos[numalunos].idade = idade;
                    }

                    printf("Digite o curso do aluno:\n");
                    printf("1. Ciência da Computação\n");
                    printf("2. Engenharia de Software\n");
                    printf("3. Análise e Desenvolvimento de Sistemas\n");
                    printf("4. Técnico em Eletrônica\n");
                    printf("5. Técnico em Mecânica\n");
                    printf("6. Técnico em Mecatrônica\n");
                    printf("7. Técnico em Automação Industrial\n");
                    int curso_escolhido;
                    scanf("%d", &curso_escolhido);
                    alunos[numalunos].curso = curso_escolhido;

                    printf("Campus de estudos:\n");
                    printf("1. Campus Pirituba\n");
                    printf("2. Campus São Paulo\n");
                    printf("3. Campus Ribeirão Preto\n");
                    printf("4. Xique Xique Bahia\n");
                    int campus_escolhido;
                    scanf("%d", &campus_escolhido);
                    while (campus_escolhido < 1 || campus_escolhido > 4) {
                        printf("Campus inválido, digite um número de 1 a 4: ");
                        scanf("%d", &campus_escolhido);
                    }
                    alunos[numalunos].campus = campus_escolhido;

                    numalunos++;
                    printf("Aluno adicionado com sucesso!\n");
                } else {
                    printf("Número máximo de alunos atingido.\n");
                }
                break;

            case 2:
                if (numalunos == 0) {
                    printf("Nenhum aluno registrado ainda.\n");
                } else {
                    printf("\n--- Lista de Alunos ---\n");
                    for (int i = 0; i < numalunos; i++) {
                        printf("Nome: %s\n", alunos[i].nome);
                        printf("Matrícula: %d\n", alunos[i].matricula);
                        printf("CPF: %lld\n", alunos[i].cpf);
                        printf("Idade: %d\n", alunos[i].idade);

                        printf("Campus: ");
                        switch (alunos[i].campus) {
                            case 1:
                                printf("Campus Pirituba\n");
                                break;
                            case 2:
                                printf("Campus São Paulo\n");
                                break;
                            case 3:
                                printf("Campus Ribeirão Preto\n");
                                break;
                            case 4:
                                printf("Campus Xique Xique Bahia\n");
                                break;
                            default:
                                printf("Campus desconhecido\n");
                                break;
                        }

                        printf("Curso: ");
                        switch (alunos[i].curso) {
                            case 1:
                                printf("Ciência da Computação\n\n");
                                break;
                            case 2:
                                printf("Engenharia de Software\n\n");
                                break;
                            case 3:
                                printf("Análise e Desenvolvimento de Sistemas\n\n");
                                break;
                            case 4:
                                printf("Técnico em Eletrônica\n\n");
                                break;
                            case 5:
                                printf("Técnico em Mecânica\n\n");
                                break;
                            case 6:
                                printf("Técnico em Mecatrônica\n\n");
                                break;
                            case 7:
                                printf("Técnico em Automação Industrial\n\n");
                                break;
                            default:
                                printf("Curso desconhecido\n\n");
                                break;
                        }
                    }
                }
                break;

            case 3:
                printf("Saindo do programa...\n");
                return 0;

            default:
                printf("Escolha inválida.\n");
        }
    }
    return 0;
}
