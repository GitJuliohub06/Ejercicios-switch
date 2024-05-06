#include <iostream> 
using namespace std;
int main()
{
char a;
cout<<" Escriba una de las siguientes letras para que le aparezca un color en \n pantalla: \n\n R \n Y \n B \n W \n K \n C \n G \n\n Ingrese la letra: "; 
cin>>a;
switch (a){
	case 'R':
	case 'r': cout<<" \nEl color para dicha letra es el Rojo";
	break;
	case 'Y':
	case 'y': cout<<" \nEl color para dicha letra es el Amarillo";
	break;
	case 'B':
	case 'b': cout<<" \nEl color para dicha letra es el Azul";
	break;
	case 'W': 
	case 'w':  cout<<" \nEl color para dicha letra es el Blanco";
	break;
	case 'k': 
	case 'K': cout<<" \nEl color para dicha letra es el Negro";
	break;
	case 'C':
	case 'c': cout<<" \nEl color para dicha letra es el Cian";
	break;
	case 'G':
	case 'g': cout<<" \nEl color para dicha letra es el Verde";
	default: cout<<" \nNo existe un color signado para dicho caracter ";
}
return 0;
}