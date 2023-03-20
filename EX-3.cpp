#include <iostream>
#include <string.h>
#include <cstdlib>
#include <math.h>
#include <locale.h>

using namespace std;

struct Produto{
    int codigo;
    char nome[20];
    float preco;



};
int main() {
    Produto *ptr;
    int aux;
    float aux1,media, soma;
    char aux2[20];
    setlocale(LC_ALL,"Portuguese");

        cout<<"####INSERIR PRODUTOS####"<< endl;
        cout<<"---------------------------------"<<endl;
    ptr = (struct Produto*)malloc(5 * sizeof(struct Produto));
    for(int i= 0; i < 5; i++){
        cout << "Insira o nome do produto  " << i+1 << ":";
        cin >> ptr[i].nome;
        cout << "Insira o código do produto" << i+1 << ":";
        cin >> ptr[i].codigo;
        cout << "Insira o preço do produto" << i+1 << ":";
        cin >> ptr[i].preco;
        soma = soma + ptr[i].preco;

    }

    

    for(int i = 0; i <5; i++){
        for(int j =0; j<4; j++){
            if(ptr[j].preco < ptr[j+1].preco){
                aux1= ptr[j].preco;
                aux = ptr[j].codigo;
                strcpy(aux2,ptr[j].nome);

                ptr[j].preco = ptr[j+1].preco;
                ptr[j].codigo = ptr[j+1].codigo;
                strcpy(ptr[j].nome, ptr[j+1].nome);

                ptr[j+1].preco = aux1;
                ptr[j+1].codigo = aux;
                strcpy(ptr[j+1].nome, aux2);

            }


        } 

    }

        cout<<"####INFORMAÇÕES DOS PEODUTOS####" <<endl;
        cout<<"---------------------------------"<<endl;
    for(int i = 0; i <5; i++){
        cout << "-------------------------------------" << endl;
        cout << "Nome: "   << ptr[i].nome << endl;
        cout << "Código: " << ptr[i].codigo << endl;
        cout << "Preço: R$" << ptr[i].preco << endl;
        cout << "-------------------------------------" << endl;
    }
    media = soma/5;
    cout << "A media dos produtos é: " << media;
    free(ptr);

}
