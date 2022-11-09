/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{
    // TODO: Adicione aqui a sua solução.
    std::vector<int> primeiro, segundo, terceiro, quarto, fora;
    int x;
    double p1,p2,p3,p4,pf,total;
    while( cin >> std::ws >> x) {
        if(x>=0 && x<25){
            primeiro.push_back(x);
        }
        if(x>=25 && x<50){
            segundo.push_back(x);
        }
        if(x>=50 && x<75){
            terceiro.push_back(x);
        }
        if(x>=75 && x<100){
            quarto.push_back(x);
        }
        if(x<0 || x>=100){
            fora.push_back(x);
        }
    }

    total=primeiro.size()+segundo.size()+terceiro.size()+quarto.size()+fora.size();

    p1=(primeiro.size()/ total)*100;
    p2=(segundo.size() / total)*100;
    p3=(terceiro.size() / total)*100;
    p4=(quarto.size() / total)*100;
    pf=(fora.size() / total)*100;

    cout<<std::setprecision(4);
    cout<<p1<<endl<<p2<<endl<<p3<<endl<<p4<<endl<<pf<<endl;
    return 0;
}
