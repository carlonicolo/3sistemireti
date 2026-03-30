#include <iostream>
using namespace std;

/*
FUnzione che mostra i led accesi e spenti prendendo
come parametro un array intero con i valori da
settare per i led 
*/
void showLED(int arrNumber[3]){
    
    if (arrNumber[0] == 1)
    {
        cout << "RED HIGH" << endl;
    }
    else{
        cout << "RED LOW" << endl;
    }
    
    
    if (arrNumber[1] == 1)
    {
        cout << "BLU HIGH" << endl;
    }
    else{
        cout << "BLU LOW" << endl;
    }
    
    if (arrNumber[2] == 1)
    {
        cout << "WHITE HIGH" << endl;
    }
    else{
        cout << "WHITE LOW" << endl;
    }
}

/*
Funziona che mostra i valori memorizzati nell'array come
numero binario
*/
void showBinaryNumber(int arrNumber[3]){
    
    if (arrNumber[0] == 1)
    {
        cout << arrNumber[0];
    }
    else{
        cout << arrNumber[0];
    }
    
    
    if (arrNumber[1] == 1)
    {
        cout << arrNumber[1];
    }
    else{
        cout << arrNumber[1];
    }
    
    if (arrNumber[2] == 1)
    {
        cout << arrNumber[2];
    }
    else{
        cout << arrNumber[2];
    }
    cout << "" << endl;
}



int main() {
    
    // Posizione dei LED
    // {RED,  BLU,  WHITE}
    int num0[] = {0,0,0};
    int num1[] = {0,0,1};
    int num2[] = {0,1,0};
    int num3[] = {0,1,1};
    int num4[] = {1,0,0};
    int num5[] = {1,0,1};
    int num6[] = {1,1,0};
    int num7[] = {1,1,1};
    
    
    //showLED(num6);

    showBinaryNumber(num0);
    showBinaryNumber(num1);
    showBinaryNumber(num2);
    showBinaryNumber(num3);
    showBinaryNumber(num4);
    showBinaryNumber(num5);
    showBinaryNumber(num6);
    showBinaryNumber(num7);

    

    return 0;
}