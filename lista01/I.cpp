#include <iostream>

using namespace std;

int main(){
    int quant;
    cin >> quant;
    int chinelos[quant];
    for (int i = 0; i< quant; i++) cin >> chinelos[i];
    int q_pedidos;
    cin >> q_pedidos;
    int pedidos[q_pedidos];
    for (int m = 0; m < q_pedidos; m++) cin >> pedidos[m];
    int ef = 0;
    for (int j = 0; j < q_pedidos; j++){
        int pedido = pedidos[j];
        if (chinelos[pedido-1] >= 1){
            ef += 1;
            chinelos[pedido-1] = chinelos[pedido-1] - 1;
        }
    }
    cout << ef;
}