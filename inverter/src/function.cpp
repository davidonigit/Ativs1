#include <iostream>
#include <array>
#include <utility>

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <std::size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{   
    size_t tamanho = arr.size();
    int i,j;
    for(i=0, j=tamanho-1; i<j; i++, j--){
        std::swap(arr[i],arr[j]);
    }
}
