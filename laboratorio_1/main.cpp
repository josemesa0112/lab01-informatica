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

int suma_fibbonaci(int n){
    int a = 1;
    int b = 1;
    int suma = 0;

    while (true){
        int siguiente = a+b;
        if (siguiente >= n){
            break;
        }
        if(siguiente % 2 == 0){
            suma += siguiente;
        }

        a = b;
        b = siguiente;
    }

    return suma;
}

int multiplos(int a, int b, int c){
    int suma = 0;
    for(int i=1;i<c;i++){
        if(i % a == 0 && i % b != 0){
            suma += i;
            cout<<i;
            if(i + 1 != c){
                cout<<"+";
            }
        }
    }
    return suma;
}

int multiplosComunes(int a, int b, int c){
    int suma = 0;
    for(int i=1;i<c;i++){
        if(i % a == 0 && i % b == 0){
            suma += i;
            cout<<i;
            if(i + 1 != c){
                cout<<"+";
            }
        }
    }
    return suma;
}

bool esPrimo(int n){
    for(int i=1;i<n;i++){
        if(n % i == 0 && i != 1 && n != i){
            return false;
        }
    }
    return true;
}

int factorPrimo(int n){
    int primo = 0, factor = 0, mayor = -999;
    for(int i=1;i<n;i++){
        if(n % i == 0 && i != 1 && n != i){
            primo = i;
            if(n % primo == 0){
                factor = primo;
                if(factor > mayor){
                    mayor = factor;
                }
            }
        }
    }
    return mayor;
}

int primos(int n){
    int suma = 0, cond = true;

    for(int i=2;i<n;i++){
        cond = true;
        for(int j=1;j<=i;j++){
            if(i % j == 0 && j != 1 && j != i){
                cond = false;
            }
        }
        if(cond){
            suma += i;
        }
    }

    return suma;
}

int espiral(int n){
    int suma = 1, multi = 0, iter = 1,num = 1, k = 1;
    while(iter < n){
        multi = k * 2;
        for(int i=0;i<4;i++){
            num += multi;
            suma += num;
        }
        k ++;
        iter += 2;
    }
    return suma;
}

int main(){
    int opc;
    //cout << "Digite una opcion: ";
    //cin >> opc;
    opc = 0;
    while (opc != 100)
    {
        cout << "************MENU PRINCIPAL*************"<<endl;
        cout << "1. Problema 1"<<endl<<"2. Problema 2"<<endl<<"3. Problema 3"<<endl<<"4. Problema 4"<<endl<<"5. Problema 5"<<endl<<"6. Problema 6"<<endl<<"7. Problema 7"<<endl<<"8. Problema 8"<<endl<<"9. Problema 9"<<endl<<"10. Problema 10"<<endl<<"11. Problema 11"<<endl<<"12. Problema 12"<<endl<<"13. Problema 13"<<endl<<"14. Problema 14"<<endl<<"15. Problema 15"<<endl<<"16. Problema 16"<<endl<<"17. Problema 17"<<endl;
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
            case 7:{
                int entero;
                cout<<"Digite cuantos digitos quiere generar: ";
                cin>>entero;
                int result = suma_fibbonaci(entero);

                cout<<"El resultado de la suma es: "<<result<<endl;
                break;
            }
            case 8:{
                int a, b, c, i=1, suma = 0, multiplo = 0, multiplo2 = 0, menor = 0;
                cout<<"Digite el valor de a: ";
                cin>>a;
                cout<<"Digite el valor de b: ";
                cin>>b;
                cout<<"Digite el valor de c: ";
                cin>>c;

                suma += multiplos(a, b, c);
                suma += multiplos(b, a, c);
                suma += multiplosComunes(a, b, c);

                cout<<"="<<suma<<endl;
                break;

            }
            case 9:{
                int n, numero = 10, digito = 0, suma = 0;
                cout<<"Digite el entero: ";
                cin>>n;

                while(n != 0){
                    digito = n % numero;
                    suma += digito * digito;
                    n /= 10;
                }
                cout<<"El resultado de la suma es: "<<suma<<endl;
                break;
            }
            case 10:{
                int n, primo, iter = 0, num = 1;

                cout<<"Digite el primo que quiere mostrar: ";
                cin>>n;

                while(iter <= n){
                    if(esPrimo(num)){
                        primo = num;
                        iter ++;
                        num ++;
                    }
                    else{
                        num ++;
                    }
                }
                cout<<"El primo numero "<<n<< " es: "<<primo<<endl;
                break;
            }
            case 11:{
                break;
            }
            case 12:{
                int n, factor = 0;
                cout<<"Digite el numero: ";
                cin>>n;

                factor = factorPrimo(n);
                if(factor == 0){
                    cout<<"El numero "<<n<<" no tiene factor primo"<<endl;
                }else{
                cout<<"El mayor factor primo de "<<n<< " es: "<<factor<<endl;
                }
                break;
            }
            case 13:{
                int n, suma = 0;
                cout<<"Digite hasta que numero quiere sumar primos: ";
                cin>>n;

                suma = primos(n);

                cout<<"El resultado de la suma es: "<<suma<<endl;

                break;
            }
            case 14:{

                {
                int Mpalindromo = 10000, operacion, residuo, sumatoria, unidades, ent1, ent2, ban; //Declaración de variables
                for(int i = 999;i > 100;i--){ //Declara e inicializa la variable i en 999, termina cuando i sea menor que 100 y decrementa la variable i de uno en uno
                        for(int t = 999;t*i > Mpalindromo;t--){ //Declara e inicializa la variable t en 999, termina cuando t*i sea menor que Mpalíndromo y decrementa la variable i de uno en uno
                            if(t < 100){ //Si t es menor que cero, haga lo siguiente
                                ban = 0; //Se le asigna el numero 0 a la variable ban
                                break; //ROmpe el ciclo
                            }
                            operacion = t*i; //A operación se le asigna el resultado de t*i
                            sumatoria = 0; //A sumatoria se le asigna el número 0
                            if(operacion > 99999){ //Si operacion es mayor que 99999, haga lo siguiente
                                unidades = 100000;} //A unidades se le asigna 100000
                            else{ //SI la condición anterior no se cumple, haga lo siguiente
                                unidades = 10000;} //A unidades se le asigna 10000
                            while(operacion > 1){ //Mientras operación sea mayor que 1
                                residuo = operacion%10; //EN residuo se guarda el residuo de la división operación/10
                                operacion = operacion/10; //En operación se guarda el resultado de la división operación/10
                                sumatoria += residuo*unidades; //En sumatoria se suma el valor del producto entre residuo y unidades
                                unidades /= 10; //En unidades se guarda el valor de unidades /10
                            }
                            if(sumatoria == (t*i)){ //SI sumatoria es igual al producto entre t*i
                                Mpalindromo = t*i; // A Mpalíndromo se le guarda el resultado del producto entre t*i
                                ent1 = i; //En ent1 se guarda el valor de i
                                ent2= t; // EN ent2 se guarda el valor de t
                                ban = 1; //A la variable ban se le asigna el numero 1
                                break; //Rompe el ciclo
                            }
                        }
                        if(ban==1){ //Si el valor de la variable ban es igual a 1
                            break; //Rompe el ciclo
                        }
                }
                cout << ent1 << "*" << ent2 << " = " << Mpalindromo << endl; //Imprime los dos números de 3 cifras que generan el mayor número palíndromo
                break;
                }

            }
            case 15:{
                int n, suma = 0;
                cout<<"Digite el tamagno de la espiral: ";
                cin>>n;

                while(n % 2 == 0){
                cout<<"Digite el tamagno de la espiral(Impar): ";
                cin>>n;
                }

                suma = espiral(n);

                cout<<"La suma de la espiral "<<n<<"x"<<n<<" es: "<<suma<<endl;
                break;
            }
            case 16:{
                int n, serie = 0, contMen = 0, contMay = 0, sem = 0, semilla = 0, num = 0;
                cout<<"Digite la semilla de la serie Collatz: ";
                cin>>n;

                for(int i=n;i>0;i--){
                    contMen = 0;
                    sem = i;
                    serie = i;
                    while(serie != 1){
                        if(serie % 2 == 0){
                            serie /= 2;
                        }
                        else if(serie % 2 != 0 || serie == 0){
                            serie = (3 * serie) + 1;
                        }
                        contMen ++;
                    }
                    if(contMen > contMay){
                        contMay = contMen;
                        semilla = sem;
                    }
                }
                num = semilla;
                while(num != 1){
                    if(num % 2 == 0){
                        num /= 2;
                    }
                    else if(num % 2 != 0 || num == 0){
                        num = (3 * num) + 1;
                    }
                    cout<<num<<" ";
                }
                cout<<endl<<"La serie mas larga es con la semilla "<<semilla<<" teniendo "<<contMay<<" terminos"<<endl;
                break;
            }
            case 17:{
                int k, a = 1, b = 1, cont = 0, numTriangular = 1;
                cout<<"Digite el primer numero que tenga k divisores: ";
                cin>>k;

                while(cont <= k){
                    cont = 0;
                    a = numTriangular;
                    b ++;
                    numTriangular = a + b;
                    for(int i=1;i<=numTriangular;i++){
                        if(numTriangular % i == 0){
                            cont ++;
                        }
                    }
                }
                cout<<"El numero es: "<<numTriangular<<" que tiene "<<cont<<" divisores"<<endl;
                break;
            }
        }
    }
    return 0;
}
