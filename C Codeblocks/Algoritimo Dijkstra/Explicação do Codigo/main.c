/*
* Grafos - Algoritmo de Dijkstra em C
* Kelvin Salton do Prado - 2015
* Complexidade: Teta(n^2)
*
* 1 para todos - Arestas de pesos n�o negativo - Algoritmo guloso
* Encontra o caminho mais curto de um v�rtice (inicio) a outro (destino)
*
* Grafo com 5 v�rtices e 6 arestas
*
*              6
*   (0)-----------------(1)
*    |                   |
* 10 |                   | 2
*    |         1         |
*   (2)-----------------(3)
*    \                  /
*   3 \                / 8
*      \              /
*       -----(4)-----
*
*  Matriz de Dist�ncia
*    0   1   2   3   4
* 0  0   6  10   -   -
* 1  6   0   -   2   -
* 2 10   -   0   1   3
* 3  -   2   1   0   8
* 4  -   -   3   8   0
*
*  Para valores infinitos ser� considerado o valor: 4294967295
* O objetivo � sair do ponto inicial (0) e chegar ao destino (4) pelo caminho mais curto
* Resposta: (0)->(1)->(3)->(2)->(4) = 12
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define nroVertices 5 // Define uma constante 5 que � a quantidade de v�rtices do grafo

// Algoritmo de Dijkstra recebe como par�metro a matriz de dist�ncia e o n�mero de v�rtices
void Dijkstra(unsigned long int matriz[nroVertices][nroVertices], int n){
    bool visitados[n]; // Vari�vel que guarda true para os v�rtices visitados

    // O valor 'i' do for abaixo n�o � utilizado, pois o for serve apenas para percorrer todo o n�mero de colunas da matriz
    for(int i = 1; i < n; i++){ // Come�a em 1 pois n�o precisa comparar o v�rtice com ele mesmo

        int min = -1; // Vari�vel que guarda a posi��o do menor valor, inicia em -1 pois � uma posi��o inv�lida
        unsigned long int MinValor = 4294967295; // Vari�vel que guarda o menor valor encontrado, inicia com 'infinito', assim, sempre na primeira passada o valor ser� menor que esta vari�vel

        // For que percorre todas as linhas na coluna [0]
        for(int j = 1; j < n; j++){
            // Se o vertice ainda n�o foi visitado e o valor for menor que o 'MinValor'
            if( !visitados[j] && matriz[j][0] < MinValor ){
                   min = j; // Guarda a posi��o do menor
                   MinValor = matriz[j][0]; // Guarda o menor valor
            }
          }

          visitados[min] = true; // Marca o valor a posi��o do minimo como visitado

        // For de 1 at� n
          for(int j = 1; j < n; j++){
               // Se o valor da coluna [0] + o valor da coluna que est� passando for menor que o valor da linha que est� passando e coluna [0]
               // Atualiza a primeira coluna da matriz, que ser� utilizado para as pr�ximas itera��es
               if( (matriz[min][0] + matriz[min][j]) < matriz[j][0] ){
                matriz[j][0] = matriz[min][0] + matriz[min][j];
               }
          }
    }
}

int main(){

    unsigned long int Matriz[nroVertices][nroVertices] = {{          0,          6,         10, 4294967295, 4294967295 },
                                                          {          6,          0, 4294967295,          2, 4294967295 },
                                                          {         10, 4294967295,          0,          1,          3 },
                                                          { 4294967295,          2,          1,          0,          8 },
                                                          { 4294967295, 4294967295,          3,          8,          0 }};

    Dijkstra(Matriz, nroVertices);

    printf("Total caminho mais curto do vertice 0 ao 4: %lu\n", Matriz[4][0]); // Caminho total mais curto

    // Da print na matriz com os valores atualizados
    printf("Matriz:\n");
    for (int i = 0; i < nroVertices; ++i){
        for (int e = 0; e < nroVertices; ++e){
            if( Matriz[i][e] < 10 )
                printf(" %lu ", Matriz[i][e]);
            else
                printf("%lu ", Matriz[i][e]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
