#include <iostream>

int main() {

    using namespace std;

    {
        cout << "Ingrese la opcion a ejecutar: " << endl;
        cout <<  "Presione 1 para determinar si usted es mayor de edad"<< endl;
        cout <<  "Presione 2 para determinar que numero ingresado es mayor"<< endl;
        cout <<  "Presione 3 para determinar si su numero es par o impar"<< endl;
        cout <<  "Presione 4 para determinar el factorial de su numero"<< endl;
        cout <<  "Presione 5 para determinar numeros impares entre 10 y 30"<< endl;
        cout <<  "Presione 6 para determinar numeros impares usando While"<< endl;
        cout <<  "Presione 7 para determinar dias de la semana"<< endl;
        int opcion = 0;
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Determinar su Edad " << endl;

                {
                    int edad;
                    cout << "ingrese su edad: ";
                    cin >> edad;
                    if (edad >= 18) {
                        cout << "usted es mayor de edad";
                    } else if (edad < 18) {
                        cout << "usted es menor de edad ";
                    }
                    break;

                    case 2:
                        cout << "Determinar que numero es el mayor" << endl;

                    {
                        int x, y;
                        cout << "\n ingrese el primer numero:";
                        cin >> x;
                        cout << "\n ingrese el segundo numero:";
                        cin >> y;
                        if (x == y)
                            cout << "\n Son iguales";
                        else {
                            if (x > y)
                                cout << "\n el mayor es:" << x;
                            else
                                cout << "\n el mayor es:" << y;
                        }
                        break;

                        case 3:
                            cout << "Determinar si el numero es par o impar" << endl;
                        {
                            int numero;
                            cout << "Introduce un numero: ";
                            cin >> numero;

                            if (numero % 2 == 0)
                                cout << endl << numero << " es par\n";
                            else
                                cout << endl << numero << " es impar\n";

                        }

                        break;
                        case 4:
                            cout << "Determinar factorial de un numero" << endl;

                        {
                            int n, i;
                            int factorial;
                            cout << "Introduce un numero: ";
                            cin >> n;
                            factorial = 1;
                            for (i = 1; i <= n; i++)
                                factorial = factorial * i;
                            cout << endl << "Factorial de " << n << " -> " << factorial << endl;

                        }

                        break;
                        case 5:
                            cout << "Determinar numero impares entre 10 y 30" << endl;

                            {
                                int a[30],i,cont=30;

                                for(i = 30;i>0;i--){
                                    if(i%2 != 0){
                                        a[cont]=i;
                                        cont--;
                                    }
                                }

                                for(i = 30; i >= cont;i--){
                                    cout << a[i]<<endl;
                                }

                        }

                    }

                    break;

                    case 6:
                        cout << "Determinar numero impar usando while" << endl;
                    {int a=1;
                        while (a<=30){
                            cout <<a;
                            a=a+2;
                        }}
                    break;


                    case 7:
                        int dia;
                        cin >> opcion;
                        cout << "Determinar dia de la semana" << endl;
                    {

                        cout <<("\n   Introduzca dia de la semana: ");

                        switch (dia) {
                            case 1 :
                                cout <<("\n   Lunes");
                                break;
                            case 2 :
                                cout <<("\n   Martes");
                                break;
                            case 3 :
                                cout <<("\n   Miecrcoles");
                                break;
                            case 4 :
                                cout <<("\n   Jueves");
                                break;
                            case 5 :
                                cout <<("\n   Viernes");
                                break;
                            case 6 :
                                cout <<("\n   Sabado");
                                break;
                            case 7 :
                                cout <<("\n   Domingo");
                                break;
                            default :
                                cout <<("\n   ERROR: Dia incorrecto.");
                        }
                        break;


                    }


                }


        }
    }
}