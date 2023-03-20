#include <iostream>
#include <string.h>
#include <math.h>
#include <cstdlib>
#include <ctime>;
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL,"Portuguese");
    int fatorial,aux;
    int result = 1;
    clock_t start_time, end_time;

    start_time = clock();
    cout << "Insira o numero que deseja calcular o fatorial: " << endl;
    cin >> fatorial;
    aux = fatorial;

    for (int i = 0; i < fatorial; i ++){
        result = result*aux;
        aux--;


    }

    cout << "O resultado do fatorial de " << fatorial << " é: " << result << endl;
    end_time = clock();
    cout << "O tempo de processamento foi: " << end_time - start_time;
}
