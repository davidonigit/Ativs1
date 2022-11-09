#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{   
    vector<unsigned int> meuVetor;
    int i, next;
    // TODO: adicione o seu código aqui.
    if(n<2){
        meuVetor.empty();
        return meuVetor;
    }
    if(n==2){
        meuVetor.push_back(1);
        meuVetor.push_back(1);  
        return meuVetor;
    }

    if(n>2){
        meuVetor.push_back(1);
        meuVetor.push_back(1);
        meuVetor.push_back(2);
        i=2;
        while((meuVetor[i]+meuVetor[i-1])<n){
            meuVetor.push_back(meuVetor[i]+meuVetor[i-1]);
            i++;
    }
        return meuVetor;
    }
}
