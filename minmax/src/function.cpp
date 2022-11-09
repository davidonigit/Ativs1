#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], unsigned long n )
{   
    pair<int, int> pairminmax;

    int menor,maior;
    menor=1000;
    maior=-1000;

    
    for(int i=0; i<n; i++){
        if(V[i]<menor){
            menor=V[i];
            pairminmax.first=i;
        }else{
            if(V[i]>=maior){
                maior=V[i];
                pairminmax.second=i;
        }
        } 
    }
    
    if(n==0){
        pairminmax.first= (-1);
        pairminmax.second= (-1);
    }

    // TODO: Isso é apenas um STUB. Substitua com seu retorno correto.
    return pairminmax;
}
