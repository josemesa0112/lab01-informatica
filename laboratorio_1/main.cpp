#include <iostream>

using namespace std;

// Funcion para determinar si es vocal
bool esVocal(char caracter)
{
    if(caracter == 65 || caracter == 97 ){
        return true;
    }else if(caracter == 69 || caracter == 101){
        return true;
    }else if(caracter == 73 || caracter == 105){
        return true;
    }else if(caracter == 79 || caracter == 111){
        return true;
    }else if(caracter == 85 || caracter == 117){
        return true;
    }else {
        return false;
    }
}

int main()
{
    int opc;
    cout << "Digite una opcion: ";
    cin >> opc;
    switch(opc)
    {
    case 1:
        char letra;
        cout << "Digite la letra: ";
        cin >> letra;


        if (letra >= 'A' && letra <= 'Z' || letra >= 'a' && letra <= 'z')
        {
            if (esVocal(letra) == true){
                cout << "Es vocal";
            }
            else{
                cout << "Es consonate";
            }
        }
        else{
            cout << "No es una letra";
        }
        break;
    }
    case 2:

    return 0;
}
