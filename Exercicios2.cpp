/* Elaborar um programa em que informe se o número digitado pelo usuário é par ou
ímpar. */

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O numero e par\n");
    } else {
        printf("O numero e impar\n");
    }

    return 0;
}

/* Digitado um número inteiro entre 0 e 100, informar o quanto ele está distante de um
determinado número chave, carregado no próprio programa. Ex.: Número chave=20,
número digitado=15, resposta=5. Número chave=17, número digitado=20, resposta=3
(Obs.: a resposta deverá ser sempre um número positivo). */

#include <stdio.h>

int main() {
    int numero, chave, distancia;

    chave = 20;

    printf("Digite um numero inteiro entre 0 e 100: ");
    scanf("%d", &numero);

    distancia = numero - chave;

    if (distancia < 0) {
        distancia = distancia * (-1);
    }

    printf("A distancia entre o numero digitado e o numero-chave e: %d\n", distancia);

    return 0;
}

/* Uma Universidade tem problemas com arredondamento das médias dos alunos,
pois cada professor estipula um critério de arredondamento. Devemos elaborar um
programa, em Linguagem C++, para a secretaria da Universidade, resolvendo esse
problema. O programa deve solicitar uma nota e fazer o devido arredondamento.
Regras:
Notas que ultrapassem 0,5 de resto serão arredondas para CIMA.
Ex: 4,6 –>5,0
Notas que abaixo ou igual a 0,5 de resto serão arredondas para BAIXO.
Ex: 4,5 –> 4,0  */

#include <stdio.h>

int main() {
    float nota, resto;
    int parteInteira, arredondada;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    parteInteira = (int) nota;
    resto = nota - parteInteira;

    if (resto > 0.5) {
        arredondada = parteInteira + 1;
    } else {
        arredondada = parteInteira;
    }

    printf("Nota arredondada: %d.0\n", arredondada);

    return 0;
}


/* Faça um programa que leia 3 números e exiba:
a) O maior número;
b) O menor número;
c) O número do meio  */

#include <stdio.h>

int main() {
    int n1, n2, n3;
    int maior, menor, meio;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    if (n1 >= n2 && n1 >= n3) {
        maior = n1;
    } else if (n2 >= n1 && n2 >= n3) {
        maior = n2;
    } else {
        maior = n3;
    }

    if (n1 <= n2 && n1 <= n3) {
        menor = n1;
    } else if (n2 <= n1 && n2 <= n3) {
        menor = n2;
    } else {
        menor = n3;
    }

    meio = n1 + n2 + n3 - maior - menor;

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("Numero do meio: %d\n", meio);

    return 0;
}


/* Faça o programa que calcule o salário líquido dos funcionários de uma empresa. O
salário líquido é composto por descontos e adicionais, seguindo as seguintes regras:
Descontos:
 Salário bruto < 800,00 – não realizar nenhum desconto;
 800,00 <= Salário bruto <=1600,00 – descontar 8% de Imposto de Renda e 5
% de encargos.
 >1600,00 – descontar 15% de Imposto de Renda e 7% de encargos.
Adicionais:
Caso o funcionário tenha trabalhado mais de 160 horas no mês, divida o seu salário
bruto por 160 (representa horas trabalhadas) e calcule 50% de adicional nas horas
que excederam a 160.
O usuário deverá digitar o salário bruto e o número de horas trabalhadas no mês de
cada funcionário, e deverá receber como resultado o salário líquido. O usuário poderá

calcular salário para N funcionários, para finalizar o programa o usuário deverá digitar
0 no salário bruto, ao finalizar o programa exibir o total geral dos salários líquidos.

Uso de caso...seja (switch...case): */

#include <stdio.h>

int main() {
    float salarioBruto, salarioLiquido, adicional, valorHora, totalLiquido;
    int horasTrabalhadas, horasExtras;

    totalLiquido = 0;

    printf("Digite o salario bruto do funcionario (0 para encerrar): ");
    scanf("%f", &salarioBruto);

    while (salarioBruto != 0) {
        printf("Digite o numero de horas trabalhadas no mes: ");
        scanf("%d", &horasTrabalhadas);

        adicional = 0;

        if (horasTrabalhadas > 160) {
            horasExtras = horasTrabalhadas - 160;
            valorHora = salarioBruto / 160;
            adicional = horasExtras * (valorHora * 0.5);
        }

        if (salarioBruto < 800) {
            salarioLiquido = salarioBruto + adicional;
        } else if (salarioBruto <= 1600) {
            salarioLiquido = salarioBruto - (salarioBruto * 0.08) - (salarioBruto * 0.05) + adicional;
        } else {
            salarioLiquido = salarioBruto - (salarioBruto * 0.15) - (salarioBruto * 0.07) + adicional;
        }

        printf("Salario liquido do funcionario: %.2f\n", salarioLiquido);

        totalLiquido = totalLiquido + salarioLiquido;

        printf("Digite o salario bruto do funcionario (0 para encerrar): ");
        scanf("%f", &salarioBruto);
    }

    printf("Total geral dos salarios liquidos: %.2f\n", totalLiquido);

    return 0;
}


/* Faça um programa que receba como entrada o mês (de 1 a 12) e retorne o nome
do respectivo mês. */

#include <stdio.h>

int main() {
    int mes;

    printf("Digite um numero de 1 a 12: ");
    scanf("%d", &mes);

    switch (mes) {
        case 1:
            printf("Janeiro\n");
            break;
        case 2:
            printf("Fevereiro\n");
            break;
        case 3:
            printf("Marco\n");
            break;
        case 4:
            printf("Abril\n");
            break;
        case 5:
            printf("Maio\n");
            break;
        case 6:
            printf("Junho\n");
            break;
        case 7:
            printf("Julho\n");
            break;
        case 8:
            printf("Agosto\n");
            break;
        case 9:
            printf("Setembro\n");
            break;
        case 10:
            printf("Outubro\n");
            break;
        case 11:
            printf("Novembro\n");
            break;
        case 12:
            printf("Dezembro\n");
            break;
        default:
            printf("Mes invalido\n");
    }

    return 0;
}

/* Entrar um código de acesso a um curso. Se o código for 1, 2,3,4 e 5 exibir na tela
Engenharia, Edificações, Sistemas Elétricos, Turismo e Análise de Sistemas
respectivamente; caso contrário exibir que o código é inválido. */

#include <stdio.h>

int main() {
    int codigo;

    printf("Digite o codigo do curso: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("Engenharia\n");
            break;
        case 2:
            printf("Edificacoes\n");
            break;
        case 3:
            printf("Sistemas Eletricos\n");
            break;
        case 4:
            printf("Turismo\n");
            break;
        case 5:
            printf("Analise de Sistemas\n");
            break;
        default:
            printf("Codigo invalido\n");
    }

    return 0;
}
