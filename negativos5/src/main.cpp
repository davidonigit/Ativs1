#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{   
    int enter, result=0, i;
    for(i=0;i<5;i++){
        cin>>enter;
        if(enter<0){
            result+=1;
        }
    }

    cout<<result;
    // TODO: Adicione aqui seu código.

    return 0;
}
