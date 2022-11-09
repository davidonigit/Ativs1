/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    // TODO: Adicione seu código aqui.
    int i, aux;
    int n, m, soma=0;

    while( cin >> std::ws >> m >> n){
        soma=0;
        if(n>0){
            for(i=0; i<n; i++){
                soma = soma + m+ i;
            }
        }if(n<0){
            for(i=0;i<(n)*(-1);i++){
                soma = soma + m - i;
            }
        }if(n==0){
            soma=m;
        }
        cout<<soma<<endl;
    }

    return 0;
}
