#include <iostream>]
#include <string.h>
#include <cstdlib>
#include <math.h>
#include <locale.h>
#include <ctime>;

using namespace std;


int main() {
    long int **ptr,x; 
    clock_t start_time, end_time;




    cout << "Insira a quantidade de linhas e colunas de sua matriz quadrada" << endl;
    cin >> x;

    ptr = (long int**)calloc(x,sizeof(int*));
    start_time = clock();
    for(int i = 0; i < x; i++){
        ptr[i] = (long int*)calloc(x,sizeof(int));//vetor de ponteiros
        cout << "\t\n";

        for(int j = 0; j < x; j++){
            cout << ptr[i][j]<< "\t";
        }
    }
    cout << endl;
    end_time = clock();
    cout << "Tempo de processamento do programa: ";
    cout << end_time - start_time;
    free(ptr);
}
