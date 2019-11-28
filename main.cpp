#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;




int main()
{
    //declarar matriz
    int i=0, j=0, c=0,f=0;
    char S[9][19];
    char vec[9];
    vec[0]='1';
    vec[1]='2';
    vec[2]='3';
    vec[3]='4';
    vec[4]='5';
    vec[5]='6';
    vec[6]='7';
    vec[7]='8';
    vec[8]='9';
    int num;
    for(i=0; i<9; i++){
        for(j=0; j<19; j++){
            S[i][j]='.';
        }
    }


    //todos los pares seran barras
    for(i=0; i<9; i++){
        for(j=0; j<19; j++){
           if(j% 2 ==0 ){
              S[i][j]='|';
           }
        }
    }
    //todos los impares seran numeros
    for(i=0; i<9; i++){
        for(j=0; j<19; j++){
           if(j% 2 != 0 ){
              S[i][j]='0';
           }
        }
    }



    //llenar con numeros y formar un juego
    for(i=0; i<9; i++){
        for(j=0; j<19; j++){
            if(S[i][j]=='0'){
                //srand(time(NULL));
                num = (rand()%9);
                cout<<"comparando con: "<<vec[num] <<endl;

                bool existe=false;
                //verificar si en el resto de la fila esta ese numero(las demas colimnas)
                for(c=0;c<19;c++){
                    if(S[i][c]==vec[num]){
                        existe=true;
                    }
                }
                if(existe==false){
                   for(f=0;f<9;f++){
                        if(S[f][j]==vec[num]){
                            existe=true;
                        }
                    }
                }
                if(existe==false){
                    S[i][j]=vec[num];
                    }
                }

            }
        }




    //mostrar matriz
    for(i=0; i<9; i++){
        for(j=0; j<19; j++){
            cout<<S[i][j];
        }
        cout<<endl;
    }
    return 0;
}
