#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

void instrucciones();
int menu();
double funcionMagnitud(int i, int j, int k);

int main(){
    instrucciones(); 
    
    int opcion = menu();

    switch (opcion)
    {
    case 1:
        int i, j,k;
        cout << funcionMagnitud(i,j,k); break;
}
return 0;
}

void instrucciones(){
    cout<< "Para un vector dado de la forma V = Axi + Ayj + Azk  como por ejemplo A = 3i + 4j -5k ingrese los valores de la siguiente forma: \n ";
    cout<< "Ingrese valor para i: 3 \n";
    cout << "Ingrese valor para j: 4 \n";
    cout << "Ingrese valor para k: -5 \n";
}

int menu(){

    cout<<"A continuacion se le mostrara las operaciones que puede realizar a los vectores: \n ";
    cout<< "1. Hallar magnitud de un vector\n";
    cout<< "2. Suma de dos vectores\n";
    cout<< "3. Resta de dos vectores\n";
    cout<< "4. Multiplicacion estelar de dos vectores\n";
    cout<< "5. Multiplicacion vectorial de dos vectores\n";
    int opcion;
    cout<<"Por favor digite la opcion que desea realizar: \n";
    cin>> opcion;

    return opcion;

}

double funcionMagnitud(int i, int j, int k){
    /* se halla la magnitud de vectores */
        int elevados;
        double magnitud;
        cout<< "Ingrese valor de i: "; cin>>i;
        cout<< "Ingrese valor de j: "; cin>>j;
        cout<< "Ingrese valor de k: "; cin>>k;
    /*se elevan los numeros al cuadrado y se suman*/
        elevados = pow(i,2)+pow(j,2)+pow(k,2);
        magnitud = sqrt(elevados);
        return magnitud;
        
}