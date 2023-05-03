#include <iostream>
using namespace std;
int main() {
    int lista[10];
    for(int i=0;i<10;i++){
        cin>>lista[i];
    }
    int a=0;
    cin>>a;
    if(lista[9]>a){
        for(int i=0;i<10;i++)
        {
            if(lista[i]>a){
                for(int k=9;k>i;k--){
                    lista[i]=a;
                    break;
                }
            }
        }
    }
    return 0;
}






