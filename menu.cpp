// echo por ANTONiO JOSE TOJIN SILVA 

#include <iostream>
#include <string.h>
#include <conio.h>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <iosfwd>
#include <ios>
#include <ostream>
#include <math.h>
using namespace std;
int main()
{
	while (1)// FUNCION QUE CREA UN CICLO HASTA QUE EL USUARIO ORDENE ROMPERLO
	{
		int opc;
		cout << "----------------------------------------MENU 20 PROGRAMAS--------------------------------------" << endl<<endl;
		cout << "1) SUMA, RESTA, MULTIPLICACION Y DIVISION DE DOS NUMEROS" << endl;
		cout << "2) DETERMINAR SI UN NUMERO ES PAR O IMPAR" << endl;
		cout << "3) CONVERSIONES DE MEDIDAS DE LONGITUD" << endl;
		cout << "4) DETERMINAR SI UNA PALABRA O NUMERO ES PALINDROMO" << endl;
		cout << "5) CONVERSIóN DE NUMEROS ARABIGOS A ROMANOS" << endl;
		cout << "6) CONVERSION DE NUMEROS ENTEROS A LETRAS" << endl;
		cout << "7) CONVERSION DE NUMEROS ENTEROS CON DECIMAL A LETRAS" << endl;
		cout << "8) TABLA DE MULTIPLICAR" << endl;
		cout << "9) TODAS LAS TABLAS DE MULTIPLICAR DE 1 A 10" << endl;
		cout << "10) CREAR DE FORMA GRAFICA LA MULTIPLICACION MANUAL" << endl;
		cout << "11) CONVERSIONES DE NUMEROS DECIMALES A BINARIO" << endl;
		cout << "12) CONVERSIONES DE NUMEROS DECIMALES A HEXADECIMALES" << endl;
		cout << "13) CREAR FIGURAS GEOMETRICAS BASICAS" << endl;
		cout << "14) MOVER UN PUNTO POR TODA LA PANTALLA" << endl;
		cout << "15) CAJERO (AUTOMATA)" << endl;
		cout << "16) CALCULAR LA HIPOTENUSA" << endl;
		cout << "17) PROMEDIO DE 3 NOTAS" << endl;
		cout << "18) AREA DE UN CUADRADO" << endl;
		cout << "19) AREA DE UN TRIANGULO" << endl;
		cout << "20) RAIZ CUADRADA DE UN NUMERO" << endl;
		cout << "21) *********** SALIR ***********" << endl;
		cin >> opc;
		system("CLS");
		
		switch (opc)
		{
		case 1: 
			int n1, n2, sum, res, div, mul;
			cout << "ingrese el primer numero: " << endl;
			cin >> n1;
			cout << "ingrese el segundo numero: " << endl;
			cin >> n2;
			sum = n1 + n2;
			res = n1 - n2;
			div = n1 / n2;
			mul = n1 * n2;
			cout << "los resultados son: " << sum << " SUMA, " << res << " RESTA, " << div << " DIVISON, " << mul << " MULTIPLICACION." << endl;
			break; 
		case 2: 
			int n;
			cout << "ingrese el numero: " << endl;
			cin >> n;
			if (n % 2 == 0) {
				cout << "EL numero es par" << endl;
			}
			else {
				cout << "El numero es impar" << endl;
			}
			break; 
		case 3: 
			int opc;
			cout << "1) KILOMETROS A MILLAS" << endl;
			cout << "2) METROS A PULGADAS" << endl;
			cout << "3) LIBRAS A KILOS" << endl;
			cin >> opc;
			switch (opc)
			{
			case 1:
				float c1, km, milla, c2;
				cout << "ingrese la cantidad de kilometros: " << endl;
				cin >> c1;
				milla = c1 * 0.6214;
				cout << "su conversion de kilometros a millas es: millas " << milla << endl;
				cout << "ingrese la cantidad en millas: " << endl;
				cin >> c2;
				km = c2 * 1.6093; 
				cout << " su conversion de millas a kilometros es: kilometros " << km << endl;
				break;
			case 2:
				float c3, c4, mt, pul;
				cout << "ingrese la cantidad de metros: " << endl;
				cin >> c3;
				pul = c3 * 39.37;
				cout << "Su Conversion de metros a pulgadas es: pulgadas " << pul << endl;
				cout << "Ingrese la cantidad de pulgadas: " << endl;
				cin >> c4;
				mt = c4 * 0.0254;
				cout << "Su Conversion de pulgadas a metros es: metros " << mt << endl;
				break;
			case 3:
			    float c5, c6, lib, kil;
			    cout << "Ingrese la cantidad de libras: " << endl;
			    cin >> c5;
			    kil = c5 * 0.45;
			    cout << "Su conversion de libras a kilos es: kilos " << kil << endl;
			    cout << "Ingrese la cantidad de kilos: " << endl;
			    cin >> c6;
			    lib = c6 * 2.20;
			    cout << " Su conversion de kilos a libras es: libras " << lib << endl;
			    break;
			}
			break; 
	    case 4:
		{
	    	string palabra;
           	cout<<"Ingrese palabra:"<<endl;
           	cin >> palabra;
           	size_t longitud = palabra.length()-1;
           	size_t i=0;
           	bool esPalindromo = true;
             	for(i=0 ; i<palabra.length()/2 && esPalindromo ;i++) {
	            	if(palabra[i]!=palabra[longitud-i])
		        	esPalindromo = false;
	            	}
            cout<<((true == esPalindromo) ? "es palindromo" : "no es palindromo")<<endl;
			break;
		}
		case 5:
			{
			int a,num;
			cout << "Transformacion de numero arabigos a romanos" << endl;
            cin >> a;
            num=a;
	        while(num!=0)
	        {
	        if (num<= 3999 && num>= 1000)
	        {
	        cout << "M" << endl;
	        num = num -1000;
	        }
            else if(num <1000 && num>=900)
            {
            cout << "CM" << endl;
            num = num - 900;
            }
            else if(num < 900 && num>500)
            {
            cout << "D" << endl;
            num = num - 500;
            }
            else if (num == 500)
            {
            cout << "D" << endl;
            num = num -500;
            }
            else if (num<500 && num>= 400)
            {
            cout << "CD" << endl;
            num = num - 400;
            }
            else if (num<400 && num >99)
            {
            cout << "C" << endl;
            num = num -100;
            }
           else if (num< 100 && num>89)
           {
           cout << "XC" << endl;
           num = num - 90;
           }
           else if (num< 90 && num>59)
           {
           cout << "L" << endl;
           num = num - 50;
           }
      	   else if(num<60 && num >50)
      	   {
           cout << "L" << endl;
           num = num - 50;
           }
           else if (num ==50)
           {
           cout << "L" << endl;
           num = num -50;
           }
           else if(num<50 && num>39)
           {
           cout << "XL" << endl;
           num = num - 40;
           }
           else if(num< 40 && num> 10)
           {
           cout << "X" << endl;
           num = num - 10;
           }
           else if(num == 10)
           {
           cout << "X" << endl;
           num = num -10;
           }
           else if(num==9)
           {
           cout << "IX" << endl;
           num = num - 9;
           }
           else if(num<=8 && num>=6)
           {
           cout << "V" << endl;
           num = num - 5;
           }
           else if (num == 5)
           {
           cout << "V" << endl;
           num = num - 5;
           }
           else if (num == 4)
           {
           cout << "IV" << endl;
           num = num - 4;
           }
           else if (num<= 3 && num>=1)
           {
           cout << "I" << endl;
           num = num - 1;
           }
           }
           system ("pause");
           cin.get();
           break;
       }
		case 6:
			{
			int x;
    		cout<<"ingrese un numero"<<endl;
    		cin>>x;
			if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
				else
		    {
        		if(x>=900)   {cout<<"NOVECIENTOS " ;x=x-900;}
       				else if(x>=800)   {cout<<"OCHOCIENTOS " ;x=x-800;}
       				else if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
       				else if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
       				else if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
       				else if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
       				else if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
       				else if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
       				else if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
       				else if(x==100)  {cout<<"CIEN"     ;x=x-100;}
        			if(x>90) {cout<<"NOVENTA Y "   ;x=x-90; }
            		if(x==90)   {cout<<"NOVENTA"  ;x=x-90; }  
            		if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
            		if(x==80)   {cout<<"OCHENTA"  ;x=x-80; }
            		if(x>70) {cout<<"SETENTA Y "   ;x=x-70; }
            		if(x==70)   {cout<<"SETENTA"  ;x=x-70; }
            		if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
            		if(x==60)   {cout<<"SESENTA"  ;x=x-60; }
            		if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
            		if(x==50)   {cout<<"CINCUENTA"    ;x=x-50; }
            		if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
            		if(x==40)   {cout<<"CUARENTA" ;x=x-40; }
            		if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
            		if(x==30)   {cout<<"TREINTA"  ;x=x-30; }
            		if(x>20) {cout<<"VEINTI"       ;x=x-20; }
            		if(x==20)   {cout<<"VEINTE"       ;x=x-20; }
        			if(x>=16)    {cout<<"DIECI"        ;x=x-10; }
       				else if(x==15)   {cout<<"QUINCE"       ;x=x-15; }
       				else if(x==14)   {cout<<"CATORCE"  ;x=x-14; }
       				else if(x==13)   {cout<<"TRECE"        ;x=x-13; } 
       				else if(x==12)   {cout<<"DOCE"     ;x=x-12; }
       				else if(x==11)   {cout<<"ONCE"     ;x=x-11; }
       				else if(x==10)   {cout<<"DIEZ"     ;x=x-10; }      
        			if(x==9)    {cout<<"NUEVE"        ;x=x-9;  }
        			if(x==8)    {cout<<"OCHO"     ;x=x-8;  }
        			if(x==7)    {cout<<"SIETE"        ;x=x-7;  }
            		if(x==6)    {cout<<"SEIS"     ;x=x-6;  }
       				else if(x==5)    {cout<<"CINCO"        ;x=x-5;  }
       				else if(x==4)    {cout<<"CUATRO"       ;x=x-4;  }
       				else if(x==3)    {cout<<"TRES"     ;x=x-3;  }
       				else if(x==2)    {cout<<"DOS"      ;x=x-2;  }
       				else if(x==1)    {cout<<"UNO"      ;x=x-1;  }
       			}
    			cout<<endl;
				cin.ignore();
		   	break;
		   }
		case 7:
		{
			float x;
    cout<<"ingrese un numero"<<endl;
    cin>>x;
if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
else

    {
        if(x>=900)   {cout<<"NOVECIENTOS  " ;x=x-900;}
        if(x>=800)   {cout<<"OCHOCIENTOS  " ;x=x-800;}
        if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
        if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
        if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
        if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
        if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
        if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
        if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
        if(x>=100)  {cout<<"CIEN "     ;x=x-100;}
        if(x>90.999) {cout<<"NOVENTA Y "   ;x=x-90; }
            if(x>=90)   {cout<<"NOVENTA "  ;x=x-90; }
            if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
            if(x>=80)   {cout<<"OCHENTA "  ;x=x-80; }
            if(x>70) {cout<<"SETENTA Y ."   ;x=x-70; }
            if(x>=70)   {cout<<"SETENTA "  ;x=x-70; }
            if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
            if(x>=60)   {cout<<"SESENTA"  ;x=x-60; }
            if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
            if(x>=50)   {cout<<"CINCUENTA"    ;x=x-50; }
            if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
            if(x>=40)   {cout<<"CUARENTA" ;x=x-40; }
            if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
            if(x>=30)   {cout<<"TREINTA"  ;x=x-30; }
            if(x>20) {cout<<"VEINTI"       ;x=x-20; }
            if(x>=20)   {cout<<"VEINTE"       ;x=x-20; }
        if(x>=16)    {cout<<"DIECI "        ;x=x-10; }
        if(x>=15)   {cout<<"QUINCE"       ;x=x-15; }
        if(x>=14)   {cout<<"CATORCE"  ;x=x-14; }
        if(x>=13)   {cout<<"TRECE"        ;x=x-13; }
        if(x>=12)   {cout<<"DOCE"     ;x=x-12; }
        if(x>=11)   {cout<<"ONCE"     ;x=x-11; }
        if(x>=10)   {cout<<"DIEZ"     ;x=x-10; }
        if(x>=9)    {cout<<"NUEVE"        ;x=x-9;  }
        if(x>=8)    {cout<<"OCHO"     ;x=x-8;  }
        if(x>=7)    {cout<<"SIETE"        ;x=x-7;  }
            if(x>=6)    {cout<<"SEIS"     ;x=x-6;  }
        if(x>=5)    {cout<<"CINCO"        ;x=x-5;  }
        if(x>=4)    {cout<<"CUATRO"       ;x=x-4;  }
        if(x>=3)    {cout<<"TRES"     ;x=x-3;  }
        if(x>=2)    {cout<<"DOS"      ;x=x-2;  }
        if(x>=1)    {cout<<"UNO"      ;x=x-1;  }
         if(x>=0.9) {cout<<" CON NUEVE CENTIMOS"  ; x=x-0.9;}
         if(x>=0.8) {cout<<" CON OCHO CENTIMOS"  ; x=x-0.8;}
         if(x>=0.7) {cout<<" CON SIETE CENTIMOS"  ; x=x-0.7;}
        if(x>=0.6) {cout<<" CON SEIS CENTIMOS"  ; x=x-0.6;}
         if(x>=0.5) {cout<<" CON CINCO CENTIMOS"  ; x=x-0.5;}
         if(x>=0.4) {cout<<" CON CUATRO CENTIMOS"  ; x=x-0.4;}
         if(x>=0.3) {cout<<" CON TRES CENTIMOS"  ; x=x-0.3;}
         if(x>=0.2) {cout<<" CON DOS CENTIMOS"  ; x=x-0.2;}
        if(x>=0.1) {cout<<" CON UNO CENTIMOS"  ; x=x-0.1;}
       }
    cout<<endl;
			break;
		}
		case 8:
		{
			char seguir;
    		int i, numero;
			do
   			{
       			printf( "\n   Introduzca un nucmero entero: ", 163 );
        		scanf( "%d", &numero );
        		printf( "\n   La tabla de multiplicar del %d es:\n", numero );
				/* Inicio del anidamiento */
        		for ( i = 1 ; i <= 10 ; i++ )
            		printf( "\n   %d * %d = %d", i, numero, i * numero );
				/* Fin del anidamiento */
    		} while ( seguir != 'n' );
			   	break;
			}
		case 9:
		{
			char continuar;
			char seguir;
    		int o, nume;
			do
   			{
       			printf( "\n   Introduzca un nucmero entero: ", 163 );
        		scanf( "%d", &nume );
        		printf( "\n   La tabla de multiplicar del %d es:\n", nume );
				/* Inicio del anidamiento */
        		for ( o = 1 ; o <= 10 ; o++ )
            		printf( "\n   %d * %d = %d", o, nume, o * nume );
				/* Fin del anidamiento */
    		} while ( seguir != 'n' );
			   	break;
         	}
		case 10:
			break;
		case 11:
	{
				cout << "ingrese un numero decimal: \n";
				int numeros;
				string binario = "";
				cin >>numeros;
				if (numeros > 0) {
       				 while (numeros > 0) {
            			if (numeros%2 == 0) {
            			    binario = "0"+binario;
            			} else {
            			    binario = "1"+binario;
           				 }
           				 numeros = (int) numeros/2;
       				 }
   				 } else if (numeros == 0) {
        		binario = "0";
    			}else {
    		    binario = "No se puede realizar la conversión. Ingrese solo numeros positivos";
   				 }
    			cout << "El resultado de la conversion es: " << binario<< endl;
		    break;
			}
		case 12:
		{
			int decimal, c = 0, i = 0, hex, salida = 100;
    		 cout << "Ingrese un numero en decimal: ";
    		 cin >> decimal;
    		 while(decimal > 0)
    			 {
        		  salida += decimal % 16;
        		  salida *= 100;
        		  decimal /= 16;
        		  c++;
     			}
    			 cout << "Hexadecimal: ";
    				 while(salida > 0)
    				 {
        			  hex = salida % 100;
       				   if(i > 0 && i <= c)
            		   if (hex < 11)
            	        cout << hex;
               else
                    cout << (char)(55 + hex);
          			salida /= 100;
         			 i++;
     			}
    		 cout << endl;
			break;
		}	
		case 13:
			{
				int n5 ;
    			cout << " Ingrese un numero : " ;
    			cin >> n5 ;
    			for (int j = 0; j < n5 ; ++j) {
        		for (int i = 0; i < n5-j-1; ++i)
        		    cout << " ";
        			for (int i = 0; i < 2*j+1; ++i)
            		 cout << "*" ;
        			cout << endl ;
    			}

   				 for (int j=n5-2; j>=0; --j) {
    			    for (int i=0; i<n5-j-1; ++i)
        		    cout << " " ;
        			for (int i=0; i<2*j+1; ++i)
        		    cout << "*" ;
       				 cout << endl ;
    			}
				break;
			}
	
		case 16:
			{
		    int puta,b,c;
    		cout<<"ingrese un cateto"<<endl;
   			cin>>puta;
   			cout<<"ingrese el otro cateto"<<endl;
    		cin>>b;
    		c=sqrt((puta*puta+b*b));
    		cout<<" la Hipotenusa es: " << c << endl;
			break;
		}
		case 17:
			{
			
			 float nota1, nota2, nota3, promedio = 0;
			 cout<<"Ingrese sus notas"<<endl;
			 cin>> nota1 >> nota2 >> nota3;
			 promedio = (nota1 + nota2 + nota3) / 3;

			 if (promedio >= 9.5)
			 { 
			  cout<<"Aprobado"<<endl;
			 }
			 else 
			 { 
			  cout<<"Reprobado"<<endl;
			 }	
			break;
		}
		case 18:
			{
			int a6,area;
    		cout<<"ingrese el lado del cuadrado"<<endl;
    		cin>>a6;
    		area=a6*a6;
    		cout<<"el area es:"<< area <<endl;
			break;
			}
		case 19:
			{
				int b,h;
				 cout<<"Ingresa base del triangulo"<<endl;
       			 cin>>b;
        			cout<<"Ingresa altura del triangulo"<<endl;
        			cin>>h;
        			int area;
        			area=b*h/2;
      				cout<<"el area del tringulo es :" << area << endl;
				break;
			}
		case 20:
		{
			double a2,b;
    		cout<<"ingrese un numero:";cin>>a2;
   			 b=sqrt(a2);
    		cout<<"la raiz cuadra de "<<a2<<" es:"<<b<< endl;
			break;
		}
		case 21:
			cout << "SALIR\n";
			exit(0);///FUNCION QUE TERMINA EL PROGRAMA 
		
			}
		cout << "PRESIONE UNA TECLA PARA REGRESAR AL MENU PRINCIPAL" << endl;
		_getch();//FUNCION QUE PAUSA EL PROGRAMA HASTA QUE UNA TECLA SEA PRESIONADA
	}
	system("PAUSE");
	return 0;
}
