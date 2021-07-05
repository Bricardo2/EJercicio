#include <iostream>
using namespace std;
string nombre_mes (int mes)
{
string aux="";	
	if (mes==1)
	aux="Enero";
	else if (mes==2)
	aux="Febrero";
	else if (mes==3)
	aux="Marzo";
	else if (mes==4)
	aux="Abril";
	else if (mes==5)
	aux="Mayo";
	else if (mes==6)
	aux="Junio";
	else if (mes==7)
	aux="Julio";
	else if (mes==8)
	aux="Agosto";
	else if (mes==9)
	aux="Septiembre";
	else if (mes==10)
	aux="Octubre";
	else if (mes==11)
	aux="Noviembre";
	else if (mes==12)
	aux="Diciembre";	
	return aux;
}
int mayor(int num1, int num2, int num3) {
    int may;
    if (num1 > num2) {
        if (num1 > num3)
            may = num1;
        else if (num3 > num2)
            may = num3;
        else
            may = num2;
    } else {
        if (num2 > num3)
            may = num2;
        else
            may = num3;
    }
    return may;
}
string cuadrado(int a, string b){
    string aux="";
    for(int x=1;x<=a;x++) {
        for (int c = 1; c <= 10; c++)
            aux = aux + b;
        aux = aux + "\n";
    }
    return aux;
}
void cuadrado2(int a, char b){
    for(int c=1;c<=a;c++)
    {
        for(int d=1; d<=10;d++)
            cout<<b;
        cout<<endl;
    }
}
bool esPrimo (int num){
    int cont=2;
    bool flat=true;
    while(cont <= num /2 && flat==true){
        if(num % cont == 0)
            flat=false;
        cont++;
    }
    return flat;
}
void imprimeprimos(int a){
    int b=1; int c=1;
    while(b<=a)
    {
        c++;
        if(esPrimo(c))
        {
            cout<<" "<< c;
            b++;
        }
    }
}
int sumaprimo(int a){
    int b=1; int c=1; int d=0;
    while(b<=a)
    {
        c++;
        if(esPrimo(c))
        {
            d+=c;b++;
        }
    }
    return d;
}
string meses(int a, int c) {
    string b;
    if (a == 1) {
        b = "Enero tiene 31 dias";
    } else if (a == 2) {
        if (c == 1) {
            b = "Febrero tiene 29 dias";
        } else {
            b = "Febrero tiene 28 dias";
        }
    } else if (a == 3) {
        b = "Marzo tiene 31 dias";
    } else if (a == 4) {
        b = "Abril tiene 30 dias";
    } else if (a == 5) {
        b = "Mayo tiene 31 dias";
    } else if (a == 6) {
        b = "Junio tiene 30 dias";
    } else if (a == 7) {
        b = "Julio tiene 31 dias";
    } else if (a == 8) {
        b = "Agosto tiene 31 dias";
    } else if (a == 9) {
        b = "Septiembre tiene 30 dias";
    } else if (a == 10) {
        b = "Octubre tiene 31 dias";
    } else if (a == 11) {
        b = "Noviembre tiene 30 dias";
    } else if (a == 12) {
        b = "Diciembre tiene 31 dias";
    }
    return b;
}
int main (){
int a, b;
//Numero en funcion del mes
int mes;
cout<<"Ingrese el numero para el mes correspondiente"<<endl;
cin>>mes;
cout<<"El mes es "<<nombre_mes (mes)<<endl;	
cout << endl << "el mes 5 corresponde a " << nombre_mes(5);
cout << endl << "el mes 1 corresponde a " << nombre_mes(1);
cout << endl << "el mes 12 corresponde a " << nombre_mes(12);
cout << endl << "el mes 15 corresponde a " << nombre_mes(15);
//Mayor de N numeros
cout << endl << "el mayor de 20, 10, 8 es: " << mayor(20, 10, 8);
cout << endl << "el mayor de 20, 30, 21 es: " << mayor(20, 30, 21);
cout << endl << "el mayor de 20, 30, 210 es: " << mayor(20,30,210);	
cout<<endl;
//cuadrado	
cout<<cuadrado(5,"+")<<endl;
cuadrado2(5,'c');
//primos
cout<<endl<<"ingrese la cantidad de numeros primos que desea imprimir"<<endl;
cin>>a;
imprimeprimos(a);
//suma de primos
cout<<endl<<"ingrese la cantidad de numeros primos que desea sumar"<<endl;
cin>>a;
cout<<endl<<"la suma es: "<<sumaprimo(a)<<endl;
//mes
cout << endl << "Ingrese el mes en numero entero" << endl;
cin >> a;
cout << "Es anio bisiesto? escriba 1 para si, escriba 2 para no" << endl;
cin >> b;
cout<<meses(a, b);
}
