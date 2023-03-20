#include <iostream>]
#include <string.h>
#include <cstdlib>
#include <math.h>
#include <locale.h>
#include <ctime>;

using namespace std;


int main() {
    long int **ptr,l,c; 
    clock_t start_time, end_time;




    cout << "Insira a quantidade de linhas  de sua matriz " << endl;
    cin >> l;
    cout << "Insira a quantidade de colunas de sua matriz " << endl;
    cin >> c;


    ptr = (long int**)malloc(l* sizeof(int*));//vetor de ponteiros
    start_time = clock();
    for(int i = 0; i < l; i++){
        ptr[i] = (long int*)malloc(c*sizeof(int));//ponteiro que aponta pros vetores
        cout << "\t\n";

        for(int j = 0; j < c; j++){
        	ptr[i][j]=0;
            cout << ptr[i][j]<< "\t";
        }
    }
    cout << endl;
    end_time = clock();
    cout << "Tempo de processamento do programa: ";
    cout << end_time - start_time;
    free(ptr);
}
