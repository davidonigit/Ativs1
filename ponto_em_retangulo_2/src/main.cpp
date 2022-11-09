/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.


int main(void)
{
    int x1,y1,x2,y2,x3,y3;
    Ponto IE;
    Ponto SD;
    Ponto P;

    while(cin>>std::ws>>x1>>y1>>x2>>y2>>x3>>y3){

        //testa validade do retangulo
        if((x1==x2) || (y1==y2)){
            cout<<"invalid"<<endl;
        }

        if(x1<x2){
            IE.x=x1;
            SD.x=x2;
        }else{
            IE.x=x2;
            SD.x=x1;
        }

        if(y1<y2){
            IE.y=y1;
            SD.y=y2;
        }else{
            IE.y=y2;
            SD.y=y1;
        }

        P.x=x3;
        P.y=y3;

        
        if(location_t::INSIDE==pt_in_rect(IE, SD, P)){
            cout<<"inside"<<endl;
        }
        if(location_t::BORDER==pt_in_rect(IE, SD, P)){
            cout<<"border"<<endl;
        }
        if(location_t::OUTSIDE==pt_in_rect(IE, SD, P)){
            cout<<"outside"<<endl;
        }


    }
    return 0;
}
