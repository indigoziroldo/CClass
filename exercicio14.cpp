/* No mês de julho ocorrerá os Jogos Pan Americanos, na cidade do Rio de Janeiro.
Os organizadores do evento solicitaram aos alunos do 1°BCC, da FEMA, para
elaborarem um algoritmo para ler os dados a serem armazenados na matriz PAN
6x6 . Tal matriz tem por objetivo armazenar a quantidade de pontos que cada país
vai obter em cada dia do jogo, sendo assim a linha indica um país (0-Brasil, 1-
Argentina, 2- Peru, 3-Chile, 4 – Paraguai, 5 – Uruguai) e as colunas indicam
cada um dos dias (0 – 1° dia, 1 – 2° dia, etc.).
Depois da leitura o algoritmo deve:

 a média de valores armazenados nas colunas ímpares da matriz
(considere 0 como par).
 Calcular a média de pontos por dia e imprimir o nome do dia e a média. */

#include <iostream>

#include <string>

using namespace std;

int main() {
    int t = 6;
    
    // setando os times no vetor
    string times[t];

    times[0] = "Brasil";
    times[1] = "Argentina";
    times[2] = "Peru";
    times[3] = "Chile";
    times[4] = "Paraguai";
    times[5] = "Uruguai";


    // leitura dos pontos
    int pontosPan[t][t];

    for (int i = 0; i < t; ++i) {
        for(int j = 0; j < t; j++){
            cin >> pontosPan[i][j];
        }
    }

    // matriz gerada
    for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++){
            printf("%2d", pontosPan[i][j]);
        }
        printf("\n"); // quebra de linha
    }

    // somatória dos resultados/linhas
    int resultCompeticao[t];

    for(int i = 0; i < t; i++){
        int soma = 0;
        for(int j = 0; j <t; j++){
            soma = soma + pontosPan[i][j];
        }
        resultCompeticao[i] = soma;
    }
    
    // imprimir o país que teve menor quantidade de pontos
     int menor = 100000000000;
     int paisMenor = 0;
    for (int i = 0; i < t; i++){
        if(resultCompeticao[i] < menor){
            menor = resultCompeticao[i];
            int paisMenor = i;
        }
    }

    cout << "menor pontuacao: " << menor << "pais: " << times[paisMenor] ;
    
    /*calcular o percentual de pontos (valores) menores que 30, armazenados
    na matriz;*/
    int somaMenor30 = 0;
    int contagemPontos = 0;
    for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++){
            if(pontosPan[i][j] < 30){
                somaMenor30 = somaMenor30 + pontosPan[i][j];
                contagemPontos++;
            }
        }
    }
    int percentual = somaMenor30 / contagemPontos * 100;
    cout << "percentual de pontos menores que 30: " << percentual;

    /*calcular a soma dos valores armazenados abaixo da diagonal principal;*/
    // diagonal principal { [i] = [j]}


        return 0;
}