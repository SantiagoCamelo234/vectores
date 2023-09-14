/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

**********************************************************************************/
    
#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

void instrucciones();
int menu();
double funcionMagnitud(int i, int j, int k);
void funcionSumaVectores(int iA, int jA, int kA, int iB, int jB, int kB); 
void funcionRestarVectores(int iA1, int jA1,int kA1,int iB1,int jB1,int kB1);
int multiplicacionEscalar(int iA2, int jA2,int kA2, int iB2, int jB2, int  kB2);
void multiplicacionVectorial(int i1, int j1,int  k1,int i2,int j2,int k2);

using namespace std;

int main (){
    
    instrucciones();
    int opcion;
    opcion = menu();
    do{
    
    
    switch (opcion)
    {
    case 1:
        //magnitud de un vector
        int i, j,k;
        double x;
         x = funcionMagnitud(i,j,k);
        cout << "La magnitud del vector es de: " << x;
        break; 
    case 2:
        // suma de vectores
        int iA, jA, kA, iB, jB, kB;
        funcionSumaVectores(iA, jA, kA, iB, jB, kB);
        break;
    case 3: 
        // resta de vectores
       int iA1, jA1, kA1, iB1, jB1, kB1;
       funcionRestarVectores(iA1, jA1, kA1, iB1, jB1, kB1);
        break;
    case 4:
        //multiplicacion escalar
        int iA2, jA2, kA2, iB2, jB2, kB2;
        int y;
        y =  multiplicacionEscalar(iA2, jA2, kA2, iB2, jB2, kB2);
        cout << "El resultado escalar de los vectores es de: " << y;
        break;
    case 5:
        /*se multiplican los vectores con resultado vectorial */
         int i1, j1, k1, i2, j2, k2;
         multiplicacionVectorial(i1,  j1,  k1, i2, j2, k2);
         break;
    case 0: 
        cout << "Gracias por usar mi calculadora";
        break;
        
    default:
        cout<< "Digite un numero valido en la barra de opciones";
        break;
    }}while(opcion != 0);
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
    cout << "0. Salida del programa";
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

void funcionSumaVectores(int iA, int jA, int kA, int iB, int jB, int kB){
    /* se suman los vectores*/
        
        cout<< "A continuacion ingrese los valores del Vector A: \n";
        cout<< "Ingrese valor de i: ";cin>>iA;
        cout<< "Ingrese valor de j: ";cin>>jA;
        cout<< "Ingrese valor de k: ";cin>>kA;
        
        cout<< "A continuacion ingrese los valores del Vector B:";
        cout<< "Ingrese los valores de i: "; cin>>iB;
        cout<< "Ingrese los valores de j:"; cin>> jB;
        cout<< "Ingrese los valores de k: "; cin>>kB;

        int suma_i, suma_j, suma_k;
        suma_i = iA + iB;
        suma_j = jA + jB;
        suma_k = kA + kB;
        if(suma_j > 0 & suma_k >0)
        cout<< "El resultado de la suma es de: " << suma_i << "i "<< " + "<<suma_j << "j " << " + "<< suma_k <<"k ";
        else if(suma_j > 0)
            cout<< "El resultado de la suma es de: " << suma_i << "i "<< " + "<<suma_j << "j " <<  suma_k <<"k ";
        else if(suma_k >0)
            cout<< "El resultado de la suma es de: " << suma_i << "i "<< suma_j << "j " << "+" << suma_k <<"k ";
}

void funcionRestarVectores(int iA1, int jA1,int kA1,int iB1,int jB1,int kB1){
  
        cout<< "A continuacion ingrese los valores del Vector A: \n";
        cout<< "Ingrese valor de i: ";cin>>iA1;
        cout<< "Ingrese valor de j: ";cin>>jA1;
        cout<< "Ingrese valor de k: ";cin>>kA1;
        
        cout<< "A continuacion ingrese los valores del Vector B: \n";
        cout<< "Ingrese los valores de i: "; cin>>iB1;
        cout<< "Ingrese los valores de j:"; cin>> jB1;
        cout<< "Ingrese los valores de k: "; cin>>kB1;
        int resta_i, resta_j, resta_k;
        resta_i = iA1 + (-1*iB1);
        resta_j = jA1 + (-1*jB1);
        resta_k = kA1 + (-1*kB1);
        if(resta_j > 0 & resta_k >0)
        cout<< "El resultado de la resta es de: " << resta_i << "i "<< " + "<<resta_j << "j " << " + "<< resta_k <<"k ";
        else if(resta_j > 0)
            cout<< "El resultado de la resta es de: " << resta_i << "i "<< " + "<<resta_j << "j " <<  resta_k <<"k ";
        else if(resta_k >0)
            cout<< "El resultado de la resta es de: " << resta_i << "i "<< resta_j << "j " << "+" << resta_k <<"k ";
        
}

int multiplicacionEscalar(int iA2, int jA2,int kA2, int iB2, int jB2, int  kB2){
     /*se multiplican los vectores con resultado escalar */


 cout<< "A continuacion ingrese los valores del Vector A: \n";
        cout<< "Ingrese valor de i: ";cin>>iA2;
        cout<< "Ingrese valor de j: ";cin>>jA2;
        cout<< "Ingrese valor de k: ";cin>>kA2;        
cout<< "A continuacion ingrese los valores del Vector B: \n";
        cout<< "Ingrese los valores de i: "; cin>>iB2;
        cout<< "Ingrese los valores de j:"; cin>> jB2;
        cout<< "Ingrese los valores de k: "; cin>>kB2;
        int multiplicacion_i, multiplicacion_j, multiplicacion_k, suma_multiplicaciones;
        multiplicacion_i = iA2 * iB2;
        multiplicacion_j = jA2 * jB2;
        multiplicacion_k = kA2 * kB2;
        
        suma_multiplicaciones = (multiplicacion_i) + (multiplicacion_j) + (multiplicacion_k);
        return suma_multiplicaciones;
}

void multiplicacionVectorial(int i1, int j1,int  k1,int i2,int j2,int k2){
    /*se multiplican los vectores con resultado vectorial */

cout<< "A continuacion ingrese los valores del Vector A: \n";
        cout<< "Ingrese valor de i: ";cin>>i1;
        cout<< "Ingrese valor de j: ";cin>>j1;
        cout<< "Ingrese valor de k: ";cin>>k1;
cout<< "A continuacion ingrese los valores del Vector B: \n";
        cout<< "Ingrese los valores de i: "; cin>>i2;
        cout<< "Ingrese los valores de j:"; cin>> j2;
        cout<< "Ingrese los valores de k: "; cin>>k2;
        int diagonal_abajo_i, diagonal_abajo_j, diagonal_abajo_k, diagonal_arriba_i, diagonal_arriba_j, diagonal_arriba_k;
        diagonal_abajo_i = j1 * k2;
        diagonal_abajo_j = k1 * i2;
        diagonal_abajo_k = i1 * j2;
        
        diagonal_arriba_i = j2 * k1;
        diagonal_arriba_j = k2 * i1;
        diagonal_arriba_k = i2 * j1;
        int iFinal, jFinal, kFinal;
        iFinal =  diagonal_abajo_i - diagonal_arriba_i;
        jFinal =  diagonal_abajo_j - diagonal_arriba_j;
        kFinal = diagonal_abajo_k - diagonal_arriba_k;
        
        if(jFinal >0 & kFinal > 0)
        cout << iFinal << "i " <<  " + " << jFinal << "j " <<  " + " << kFinal << "k";
        else if(jFinal > 0 & kFinal < 0)
         cout << iFinal << "i " <<  " + " << jFinal << "j " <<  kFinal << "k";
        else if(jFinal < 0 & kFinal > 0)
         cout << iFinal << "i "  << jFinal << "j " << " + "  << kFinal << "k";
}
