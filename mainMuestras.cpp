#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int muestras[500],i,j,v,op,suma,aux,p;
	cout<<"Digite los valores de cada muestra de laboratorio \n";
	j=1;
	for(i=1;j<=1;i=i+1){
		cout<<"Digite valor de la muestra " <<i <<"\n";
		cin>>v;
		muestras[i]=v;
		suma=suma+v;
	if(v<0){
		cout<<"\nRiesgo Nulo";
	}else if((v>=0)&&(v<10)){
		cout<<"\nRiesgo Bajo";
	}else if((v>=10)&&(v<100)){
		cout<<"\nRiesgo Medio";
    }else if(v>=100){
		cout<<"\nRiesgo Alto";
    }
		cout<<"\nDesea ingresar otro valor de una muestra si=1 / no=0 ";
		cin >>op;
	switch(op){
		case 0:j=2;
		break;
		case 1:j=1;
		break;
		default:j=3;
		cout <<"Opcion incorrecta ";
	}
	 aux=i;
	 p=suma/aux;
	}	
	if(p<0){
		cout<<"\nRiesgo General promedio es Nulo";
	}else if((p>=0)&&(p<10)){
		cout<<"\nRiesgo General promedio es Bajo";
	}else if((p>=10)&&(p<100)){
		cout<<"\nRiesgo General promedio es Medio";
    }else if(p>=100){
		cout<<"\nRiesgo General promedio es Alto";
    }
	
	return 0;
}
