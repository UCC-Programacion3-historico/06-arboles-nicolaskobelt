#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "../ArbolBinario/ArbolBinario.h"

using namespace std;

int main() {

    ArbolBinario<int> AB;

    int arr[30];
    srand (time(NULL));

    cout<<"Aleatorio: ";

    for(int i=0; i<30; i++){
        arr[i]=100+rand()%(501 - 100);

        cout<<arr[i]<<" / ";

        AB.put(arr[i]);
    }

    AB.print();

}