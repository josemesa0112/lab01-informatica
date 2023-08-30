#include <iostream>

using namespace std;

// Funcion para determinar si es vocal
bool esVocal(char caracter){
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

bool fechaAno(int mes, int dia){
    if(mes == 2 && dia > 29){
        cout<<dia<<" no es un dia valido en este mes"<<endl;
        return false;
    }else if(mes == 2 && dia == 29){
        cout<<mes<<"/"<<dia<<" valida en ano biciesto"<<endl;
        return false;
    }if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        if(dia > 31){
            cout<<dia<<" no es un dia valido"<<endl;
            return false;
        }
    }if(mes == 4 || mes == 6 || mes == 9){
        if(dia > 30){
            cout<<dia<<" no es un dia valido"<<endl;
            return false;
        }
    }
    return true;
}

int main(){
    int opc;
    //cout << "Digite una opcion: ";
    //cin >> opc;
    opc = 0;
    while (opc != 100)
    {
        cout << "************MENU PRINCIPAL*************"<<endl;
        cout << "1. Problema 1"<<endl<<"2. Problema 2"<<endl<<"3. Problema 3"<<endl<<"4. Problema 4"<<endl<<"5. Problema 5"<<"6. Problema 6"<<endl;
        cout <<"Digite su opcion: ";
        cin >> opc;

        switch(opc)
        {
            case 1:
                char letra;
                cout << "Digite la letra: ";
                cin >> letra;

                if(letra >= 'A' && letra <= 'Z' || letra >= 'a' && letra <= 'z')
                {
                    if (esVocal(letra) == true){
                        cout << "Es vocal";cout <<endl<<endl;
                    }
                    else{
                        cout << "Es consonate";cout <<endl<<endl;
                    }
                }
                else{
                    cout << "No es una letra";cout <<endl<<endl;
                }
                break;
            case 2:{
                int dinero;
                int devuelto;
                cout << "Digite la cantidad de dinero a cambiar: ";
                cin >> dinero;
                int cambio[10] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};

                for(int i=0;i<11;i++){
                    devuelto = 0;
                    if(dinero < 50){
                        cout << "Faltante: "<<dinero;cout <<endl<<endl;
                        break;
                    }
                    else{
                        if(dinero > cambio[i]){
                            devuelto = dinero / cambio[i];
                            dinero -= devuelto * cambio[i];
                        }
                        cout << cambio[i]<<": "<<devuelto<<endl;
                    }
                }
                break;
            }
            case 3:{
                int dia;
                int mes;

                cout <<"Digite el mes del ano: ";
                cin >> mes;
                if(mes > 12 || mes < 1){
                    cout<<mes<<" es un mes invalido"<<endl;
                    break;
                }
                cout <<"Digite el dia del mes: ";
                cin >> dia;
                if(dia > 31 || dia < 1){
                    cout<<dia<<" es un dia invalido"<<endl;
                    break;
                }
                if(fechaAno(mes, dia)){
                    cout<<mes<<"/"<<dia<< " es una fecha valida"<<endl;
                }
                break;
            }
            case 4:{
                int tiempo;
                int suma;
                int hora;
                int minutos;
                int sumaH;
                int sumaM;
                int horaTotal;
                int minutosTotal;
                int dias;

                cout<<"Digite la hora: ";
                cin >> tiempo;

                cout<<"Cuanto tiempo vas agregar?: ";
                cin >> suma;

                if(tiempo > 99){
                    hora = tiempo / 100;
                    minutos = tiempo % 100;
                }else{
                    hora = 0;
                    minutos = tiempo;
                }
                if(tiempo > 9999){
                    cout<<hora<<minutos<<" es un tiempo invalido"<<endl;
                    break;
                }else if(hora > 23 || minutos > 59){
                    cout<<hora<<minutos<<" es un tiempo invalido"<<endl;
                    break;
                }

                if(suma > 99){
                    sumaH = suma / 100;
                    sumaM = suma % 100;
                }else{
                    sumaH = 0;
                    sumaM = suma;
                }
                horaTotal = hora + sumaH;
                minutosTotal = minutos + sumaM;
                if(horaTotal > 23){
                    horaTotal -= 23;
                }if(minutosTotal > 59){
                    minutosTotal -= 59;
                    horaTotal += 1;
                }if(horaTotal > 23){
                    dias = horaTotal/23;
                    horaTotal -= (dias * 23);
                }
                cout<<"La hora es "<<horaTotal<<minutosTotal<<endl;
                break;
            }
            case 5:{
                int entero;
                string ast;
                string esp;
                int rep;
                int rep2;
                int rep3;
                int k;

                cout<<"Ingresa el numero impar: ";
                cin>>entero;

                if(entero % 2 == 0 || entero == 1){
                    cout<<"El numero es par o es uno"<<endl;
                    break;
                }

                rep = (entero-1) / 2;
                rep2 = rep;
                rep3 = entero - 2;
                k = 1;

                for(int i=1;i<=entero;i+=2){
                    esp = "";
                    ast = "";
                    for(int j=0;j<rep2;j++){
                        esp += " ";
                    }
                    cout<<esp;
                    for(int j=0;j<i;j++){
                        ast += '*';
                    }
                    cout<<ast;
                    cout<<esp;

                    rep2 -= 1;
                    cout<<endl;
                }
                for(int i=0;i<entero;i+=2){
                    esp = "";
                    ast = "";
                    for(int j=0;j<k;j++){
                        esp += " ";
                    }
                    cout<<esp;
                    for(int j=0;j<rep3;j++){
                        ast +="*";
                    }
                    rep3 -= 2;
                    k += 1;
                    cout<<ast;
                    cout<<esp<<endl;
                }
                break;
            }
            case 6:{
                int entero;
                float suma = 0;
                float fact;
                cout<<"Digita el entero a aproximar euler: ";
                cin>>entero;

                for(int i=0;i<entero;i++){
                    fact = 1;
                    for(float j=1;j<=i;j++){
                        fact *= j;
                    }
                    suma += 1/fact;
                }
                cout<<"e es aproximadamente: "<<suma<<endl;
                break;
            }


        }
    }
    return 0;
}
