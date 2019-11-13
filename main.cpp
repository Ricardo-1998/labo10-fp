#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
 
int main () {
 
 int filas;
 int columnas;
 ifstream ficheroEntrada;
 ficheroEntrada.open ("lab2.txt");
 string frase;
 char caracter;
 int numFila = -1;
 int numCol = 0;
 char matriz[50][50];
 char Camino[100][100];
 while(!ficheroEntrada.eof()){
    getline(ficheroEntrada, frase);
    numFila = numFila + 1; 
    numCol = frase.length();
    for (int i=0;i<numCol;i++){
        matriz[numFila][i]=frase[i];
        }
    } 
    

 
 ficheroEntrada.close();


 numCol = frase.length();
 cout << "Número de filas "<<numFila+1<<endl; 
 cout << "Número de columnas "<<numCol<<endl; 

//    filas = (sizeof(matriz)/sizeof(matriz[0]));
//    columnas = (sizeof(matriz[0])/sizeof(matriz[0][0]));
 

    for (int i = 0; i <= numFila; i++)
    {
        for (int j = 0; j < numCol; j++)
        {
            switch (matriz[i][j]){
                case '0':
                    cout<<" P ";
                    break;
                case '1':
                    cout<<"   ";
                    break;
                case 's':                  
                    cout<<" S ";
                    break;

            } 
        }
        cout<<endl;
    }
 
 return 0;

}


// 
// int x, y;
// cout<<"Ingrese la coordenana x ";
// cin>>x;
// cout<<"Ingrese la coordenana y ";
// cin>>y;
// 
// while (matriz[x][y] != 's'){
//     matriz[x+1][y];
//     matriz[x-1][y];
//     matriz[x][y+1];
//     matriz[x+1][y-1];
//     cout<<matriz[x][y];
//
// }
// 
// cout<<matriz[x][y];
// cout<<endl;