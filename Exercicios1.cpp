/* Crie um programa que permita fazer a conversão cambial entre Reais e Dólares.
Considere como taxa de câmbio US$1,00 = R$2,40. Leia um valor em Reais pelo
teclado e mostre o correspondente em Dólares. */

#include <stdio.h>

int main() {
    float reais, dolares;

    printf("Digite o valor em reais: ");
    scanf("%f", &reais);

    dolares = reais / 2.40;

    printf("Valor em dolares: %.2f\n", dolares);

    return 0;
}


/* Crie um programa que permita fazer a conversão cambial entre Dólares e Reais.
Considere como taxa de câmbio US$1,00 = R$2,40. Leia um valor em Dólares pelo
teclado e mostre o correspondente em Reais. */

#include <stdio.h>

int main() {
    float dolares, reais;

    printf("Digite o valor em dolares: ");
    scanf("%f", &dolares);

    reais = dolares * 2.40;

    printf("Valor em reais: %.2f\n", reais);

    return 0;
}

/* Calcule quantos azulejos são necessários para azulejar uma parede. É necessário
conhecer a altura da parede (AP), a sua largura (LP), e a altura do azulejo (AA) e sua
largura (LA). Leia os dados através do teclado. */

#include <stdio.h>

int main() {
    float AP, LP, AA, LA;
    float area_parede, area_azulejo, quantidade;

    printf("Digite a altura da parede: ");
    scanf("%f", &AP);

    printf("Digite a largura da parede: ");
    scanf("%f", &LP);

    printf("Digite a altura do azulejo: ");
    scanf("%f", &AA);

    printf("Digite a largura do azulejo: ");
    scanf("%f", &LA);

    area_parede = AP * LP;
    area_azulejo = AA * LA;
    quantidade = area_parede / area_azulejo;

    printf("Quantidade de azulejos necessaria: %.2f\n", quantidade);

    return 0;
}

/* A condição física de uma pessoa pode ser medida com base no cálculo do IMC,
Índice de Massa Corporal, o qual é calculado dividindo-se a massa da pessoa ( em kg)
pela altura da mesma (h em m) elevada ao quadrado (IMC= m/h2). Escreva um
programa que leia a massa e a altura de uma pessoa, calcule e mostre o IMC. */

#include <stdio.h>

int main() {
    float massa, altura, imc;

    printf("Digite a massa em kg: ");
    scanf("%f", &massa);

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    imc = massa / (altura * altura);

    printf("IMC = %.2f\n", imc);

    return 0;
}

/*Dado o valor do raio (r) de uma circunferência, elaborar um programa para calcular
e imprimir sua área (A) e o seu comprimento (C). A fórmula da área do círculo é A=_ r2
e do comprimento é C=2_ r.*/

#include <stdio.h>

int main() {
    float r, area, comprimento;

    printf("Digite o raio da circunferencia: ");
    scanf("%f", &r);

    area = 3.14 * r * r;
    comprimento = 2 * 3.14 * r;

    printf("Area da circunferencia: %.2f\n", area);
    printf("Comprimento da circunferencia: %.2f\n", comprimento);

    return 0;
}

/* Elaborar um programa para calcular e exibir o volume (V) de uma esfera e a área
(A) de sua superfície, dado o valor de seu raio (R). A fórmula do volume da esfera é
V=4/3 _ R3 e da área é A=4_ R2.*/

#include <stdio.h>

int main() {
    float R, V, A;

    printf("Digite o raio da esfera: ");
    scanf("%f", &R);

    V = (4 * 3.14 * R * R * R) / 3;
    A = 4 * 3.14 * R * R;

    printf("Volume da esfera: %.2f\n", V);
    printf("Area da superficie: %.2f\n", A);

    return 0;
}

/* Faça um programa para calcular a média final de um aluno, supondo-se que há
quatro notas bimestrais durante o ano e que esta é calculada através de uma média
aritmética simples (todos os bimestres têm o mesmo peso).*/

#include <stdio.h>

int main() {
    float n1, n2, n3, n4, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    printf("Digite a quarta nota: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    printf("Media final: %.2f\n", media);

    return 0;
}

/* O critério de avaliação semestral de determinada escola segue a regra:
P1 – primeira avaliação do semestre.
P2 – segunda avaliação do semestre.
Ativ – nota atribuída pelas atividades realizadas no semestre.
Média = P1 x 4 + P2 x 4 + Ativ x 2
------------------------------------
               10                           
               
Escreva um programa que leia as notas das provas (P1 e P2) e da atividade (Ativ),
calcule e mostre a média, seguindo o cálculo acima. */

#include <stdio.h>

int main() {
    float P1, P2, Ativ, media;

    printf("Digite a nota da P1: ");
    scanf("%f", &P1);

    printf("Digite a nota da P2: ");
    scanf("%f", &P2);

    printf("Digite a nota da atividade: ");
    scanf("%f", &Ativ);

    media = (P1 * 4 + P2 * 4 + Ativ * 2) / 10;

    printf("Media semestral: %.2f\n", media);

    return 0;
}

/* Elaborar um programa para receber valores, via teclado, nas variáveis "a" e "b".
Após isto, o programa, utilizando-se de uma 3a. variável "c", deverá trocar o conteúdo
das variáveis "a" e "b".*/

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    c = a;
    a = b;
    b = c;

    printf("Novo valor de a: %.2f\n", a);
    printf("Novo valor de b: %.2f\n", b);

    return 0;
}


/* Elaborar um programa que receba, via teclado, os valores do espaço percorrido e
do tempo gasto por um veículo em movimento, para calcular e apresentar em tela sua
velocidade média. */

#include <stdio.h>

int main() {
    float espaco, tempo, velocidade;

    printf("Digite o espaco percorrido: ");
    scanf("%f", &espaco);

    printf("Digite o tempo gasto: ");
    scanf("%f", &tempo);

    velocidade = espaco / tempo;

    printf("Velocidade media: %.2f\n", velocidade);

    return 0;
}

/*Num laboratório de física, em uma experiência de Movimento Uniformemente
Variado, foram encontrados os seguintes valores: s0=2m, v0=3m/s, a=10m/s2.
Digitado o valor de t (segundos), apresentar em tela o valor de s (metros). Dada a
fórmula:
s = s0 + v0 . t + 1⁄2 . a . t2  */

#include <stdio.h>

int main() {
    float s0, v0, a, t, s;

    s0 = 2;
    v0 = 3;
    a = 10;

    printf("Digite o tempo em segundos: ");
    scanf("%f", &t);

    s = s0 + v0 * t + (a * t * t) / 2;

    printf("Valor de s em metros: %.2f\n", s);

    return 0;
}

