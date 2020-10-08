#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    int num,valor1, valor2,cont,aux,numinvertido,valor3,valor4,u,n;
    float div, per, area, pi, min,seg ;
    bool primo,cp,k;
    char j=80,car;
    long long int resultado=1, ant,actual,numero,exp,base;

    while (true) {
        cout << "Ingrese 1 para ejercicio o 2 para problema: ";
        cin >> num;
        switch(num){
           case 1:
           cout<<"Ingrese el numero del ejercicio: ";
           cin >> valor1;
           switch(valor1){
               case 1:  // Residuo entre A/B
                   cout << "Residuo entre A/B "<< endl;
                   cout << "Ingrese el numero A: ";
                   cin >> valor1;
                   cout << "Ingrese el numero B: ";
                   cin >> valor2;
                   resultado=valor1%valor2; // se utiliza la funcion modulo (%) para encontrar el residuo
                   cout << "el residuo de A/B es: " << resultado<< endl;
               break;
               case 2: // Decir si N es par o impar
                   cout << "N es par o impar "<< endl;
                   cout << "Ingrese el valor de N: ";
                   cin >> valor1;
                   if (valor1%2==0) cout << valor1 << " " << "es par"<< endl;
                   else cout << valor1 << " " << "es impar"<< endl;
               break;
               case 3:  //Mayor entre A y B
                   cout << "Mayor entre A y B"<< endl;
                   cout << "Ingrese el numero A: ";
                   cin >> valor1;
                   cout << "Ingrese el numero B: ";
                   cin >> valor2;
                   if (valor1>valor2) cout<<"el mayor es: " <<valor1<< endl;
                   else cout<<"el mayor es: " <<valor2<< endl;
               break;
               case 4: // menor entre A y B
                   cout << "Menor entre A y B"<< endl;
                   cout << "Ingrese el numero A: ";
                   cin >> valor1;
                   cout << "Ingrese el numero B: ";
                   cin >> valor2;
                   if (valor1<valor2) cout<<"el menor es: " <<valor2<< endl;
                   else cout<<"el menor es: " <<valor2<< endl;
               break;
               case 5: // division entre A y B con redondeo
                   cout << "Division entre A y B con redondeo"<< endl;
                   cout << "Ingrese el numero A: ";
                   cin >> valor1;
                   cout << "Ingrese el numero B: ";
                   cin >> valor2;
                   div= float(valor1)/float(valor2); // division con decimales
                   resultado=div;  // parte entera de la division
                   if ((div-resultado)>=0.5){ // analizo la parte decimal
                       resultado+=1;
                       cout << "El resultado es: "<< resultado << endl;
                   }
                   else
                       cout << "El resultado es: "<< resultado << endl;
               break;
               case 6: // potencia de A^B
                   cout<<"Potencia de A^B "<< endl;
                   cout<<"Ingrese numero A: ";
                   cin>>valor1;
                   cout<<"Ingrese numero B: ";
                   cin>>valor2;
                   resultado=1;
                   for(int i=0;i<valor2;i++){
                       resultado=resultado*valor1;
                   }
                   cout<<valor1<<"^"<<valor2<<"="<<""<<resultado<<endl;
               break;
               case 7: // sumatoria de un numero con todos sus precedentes
                   resultado=0;
                   cout<<"Sumatoria de un numero con todos sus precedentes "<< endl;
                   cout << "Ingrese el numero N: ";
                   cin >> num;
                   for(int i=num;i>=1;i=i-1){
                       resultado+=i;
                   }
                   cout << "La sumatoria desde 0 hasta" << " " << num <<" es: " << resultado<< endl;
               break;
               case 8: // factorial de un numero
                 cout<<"Factorial de un numero "<< endl;
                 cout<<"Ingrese numero: ";
                 cin>>valor1;
                 resultado=1;
                 for(int i=1;i<=valor1;i++){
                 resultado=resultado*i;
                 }
                 cout<<valor1<<"!"<<"="<<" "<<resultado<<endl;
               break;
               case 9: // el perímetro y área de un círculo con radio N.
                   cout << "El perimetro y area de un circulo con radio N. "<<endl;
                   cout << "Ingrese el numero N(radio del circulo): ";
                   cin >> num;
                   pi=3.1416;
                   area= pi*num*num;
                   per= 2*pi*num;
                   cout << "El area es: "<< area << endl;
                   cout << "El perimetro es: "<< per << endl;
               break;
               case 10: // multiplos de N entre 1 y 100
                   cout <<"Multiplos de N entre 1 y 100"<< endl;
                   cout<<"Ingrese numero N: ";
                   cin>>valor1;
                   resultado=1;
                   cout<<"Multiplos de"<<" "<<valor1<<" menores que 100:"<<endl;
                   for (int i=1;i<100;i++){
                       resultado=valor1*i;
                       if(resultado<100) cout<<resultado<<endl;
                     }

               break;
               case 11: // tabla de multiplicar
                   cout<< "Tabla de multiplicar"<<endl;
                   cout << "Ingrese el numero N: ";
                   cin >> num;
                   for(int i=1;i<=10;i++){
                       resultado= i*num;
                       cout <<i <<" x " << num<< " = "<< resultado<< endl;
                   }
               break;
               case 12://imprime potencias desde 1-5
                   cout<< "Potencias de un numero desde 1 hasta 5"<<endl;
                   cout<<"ingrese numero N: ";
                   cin>>valor1;
                   resultado=1;
                   for(int i=1;i<=5;i++){
                      resultado=resultado*valor1;
                      cout<<valor1<<"^"<<i<<"="<<""<<resultado<<endl;
                     }
               break;
               case 13:// divisores de un numero
                   cout<<"Divisores de un numero"<<endl;
                   cout << "Ingrese el numero N: ";
                   cin >> num;
                   cout<< "Los divisores de N son: "<< endl;
                   for (int i=num;i>=1;i--){
                       div=float(num)/float(i);
                       resultado=div;
                       if ((div-resultado)==0) cout<< resultado << endl;
                   }

               break;
               case 14://imprime dos lineas paralelas con #1-50 y 50-1
               cout<<"Ascendentes y descendentes"<<endl;
                    for(int i=1;i<=50;i++){
                        cout<<i<<" "<<51-i<<endl;
                    }
               break;
               case 15:
                   cout<<"Suma de todos los numeros ingresados"<<endl;
                   cout << "Ingrese el numero N: ";
                   cin >> num;
                   resultado=0;//  evitar acumular en otra iteracion del ejercicio
                   while(num!=0){
                       resultado+=num; // suma de los numeros ingresados
                       cout << "Ingrese el numero N: ";
                       cin >> num;
                   }
                   cout<< "El resultado de la sumatoria es: "<<resultado<< endl;
               break;
               case 16:
                   cout << "Ingreso de numeros secuencialmente y encontrar el promedio"<<endl;
                   cout << "Ingrese el numero N: ";
                   cin >> num;
                   resultado=0;
                   cont=0;
                   while(num!=0){
                       cont++;
                       resultado+=num;
                       cout<<"Ingrese el numero N: ";
                       cin>>num;
                   }
                   resultado=resultado/cont;
                   cout<< "El promedio es: "<<resultado<< endl;
               break;
               case 17:// Ingreso de numeros secuencialmente y encontrar el mayor
                   cout << "Ingreso de numeros secuencialmente y encontrar el mayor"<<endl;
                   cout << "Ingrese el numero N: ";
                   cin >> num;
                   valor2=0;
                   valor1=num;
                   while (num!=0){
                       cout << "Ingrese el numero N: ";
                       cin >> num;
                       valor2=num;
                       if (valor2>valor1) valor1=valor2;
                   }
                   cout<< "El numero mayor fue: "<<valor1 <<endl;
               break;
               case 18:
                    cout<<" Determinar si un numero es cuadrado perfecto"<<endl;
                    cp=false;
                    cout << "Ingrese el numero N: ";
                    cin >> num;
                    for(int i=1;(i<num)&&(cp==false);i++){
                        resultado=i*i;
                        if(int(resultado)==num) cp=true;
                        }
                        if(cp==true) cout<<num<<" "<<"Es cuadrado perfecto"<<endl;
                        else cout<<num<<" "<<"No es cuadrado perfecto"<<endl;
               break;
               case 19: // Determinar si un numero es primo
                   cout<<"Determinar si un numero es primo"<<endl;
                   primo=true;
                   cout << "Ingrese el numero N: ";
                   cin >> num;
                   for(int i=2;(i < num) && (primo==true);i++){
                       if(num % i ==0) primo=false;
                   }
                   if (primo==false) cout<< num<<  " " << "No es un numero primo"<<endl;
                   else cout<< num<<  " " << "Es un numero primo"<<endl;
                   break;
               case 20: //Identifica números palindromo
                    cout<< "Identificar numeros palindormos"<<endl;
                    cout << "Ingrese el numero N: ";
                    cin >> num;
                    aux=num;
                    numinvertido=0;
                    while (aux!=0) {
                        valor1=aux%10; //para obtener ultimo digito
                        numinvertido=numinvertido*10+valor1;
                        aux=aux/10;//para quitar el ultimo digito
                    }
                    if(numinvertido==num)cout<<num<<" "<<"Es un numero palindromo"<<endl;
                    else cout<<num<<" "<<"No es un numero palindormo"<<endl;
               break;
               case 21: //conversion de mayuscula a minuscula y viceversa
                   cout<<"Conversion de mayuscula a minuscula y viceversa"<<endl;
                   cout << "Ingrese el caracter: ";
                   cin >> car;
                   num=int(car);
                   if (num>=65 && num<=90){
                       num+=32;
                       car=num;
                       cout<<"Letra convertida: "<<car<<endl;
                   }
                  else if (num>=97&&num<=122){
                       num-=32;
                       car=num;
                       cout<<"Letra convertida: "<<car<<endl;
                   }
                   else cout<<"No es una letra y por tanto no hay conversion"<<endl;
               break;
               case 22://segundos a horas,min,seg
                   cout<< "Convertir de minutos a Horas:min:seg"<<endl;
                   cout << "Ingrese el numero N: ";
                   cin >> num;
                   div=float(num)/3600;
                   resultado=div; // parte entera de horas
                   min=(div-resultado)*60;
                   valor1=min; // parte entera num de minutos
                   seg=(min-valor1)*60;
                   valor2=seg; // parte entera num de segundos
                   cout<<resultado<<": "<<valor1<<" : "<<valor2<<endl;
               break;
               case 23:
                    cout<<"Imprime el MCM de A y B"<<endl;
                    cout<<"Ingrese numero A: ";
                    cin>>valor1;
                    cout<<"Ingrese numero B: ";
                    cin>>valor2;
                    if(valor1>valor2) num=valor1;
                    else num=valor2;
                    resultado=num;
                    while ((resultado%valor1!=0) ||(resultado%valor2!=0)){
                        resultado=resultado+1;
                        }
                    cout<<"M.C.M :"<<" "<<resultado<<endl;
               break;
               case 24:
                   cout<< "Contorno de un cuadrado de lado N"<<endl;
                   cout<<"Ingrese el numero N: ";
                   cin>>num;
                   for(int fil=1;fil<=num;fil++){
                       for(int col=1;col<=num;col++){
                           if(fil==1 || fil==num || col==1 || col==num)cout<<"+";
                           else cout<< " ";
                       }
                       cout<<endl;
                   }
                   break;
               case 25:
                   cout<<"Cantidad de digitos de un numero "<<endl;
                   cout<<"Ingrese el numero N: ";
                   cin>>num;
                   valor2=num;
                   resultado=0;
                   if (num==0) cout<< num << " posee 1 digito" <<endl;
                   else{
                   while (valor2!=0){
                       valor1=num%10;
                       valor2=valor2/10;
                       resultado++;
                   }
                   cout<< num<<" " << "posee "<<resultado<< " " << "digitos" <<endl;
                   }
               break;
               case 26:
                   cout<< "Tipo de triangulo "<<endl;
                   cout<<"Ingrese el lado A: ";
                   cin>>num;
                   cout<<"Ingrese el lado B: ";
                   cin>>valor1;
                   cout<<"Ingrese el lado C: ";
                   cin>>valor2;
                   if(num==valor1 && num==valor2 && valor2==valor1 ) cout<< "Es un triangulo equilatero"<< endl;
                   else if(num==valor1 || num==valor2 || valor1==valor2) cout<< "Es un triangulo isoseles"<< endl;
                   else if ((num+valor1)<valor2 ||(num+valor2)<valor1 || (valor2+valor1)<num ) cout<<"No forman un triangulo"<<endl;
                   else cout<< "Es un triangulo escaleno"<< endl;
               break;
               case 27:
                   cout<< "Calculadora"<< endl;
                   cout<<"Ingrese el primer operando: ";
                   cin>>valor1;
                   cout<<"Ingrese la operacion a realizar(+,-,*,/): ";
                   cin>>car;
                   cout<<"Ingrese el segundo operando: ";
                   cin>>valor2;
                   if (car==43) {
                       resultado=valor1+valor2;
                       cout<< valor1 << "+" <<valor2 << "="<<resultado <<endl;
                   }
                   else if (car==45) {
                       resultado=valor1-valor2;
                       cout<< valor1 << "-" <<valor2 << "="<<resultado <<endl;
                   }
                   else if (car==42) {
                       resultado=valor1*valor2;
                       cout<< valor1 << "*" <<valor2 << "="<<resultado <<endl;
                   }
                   else if (car==47) {
                       if(valor2==0) cout<<"Error matematico"<<endl;
                       else{
                           div=float(valor1)/float(valor2);
                           cout<< valor1 << "/" <<valor2 << "=" << div <<endl;
                        }
                   }
                   else cout<< "caracter invalido"<< endl;
               break;
               case 28:
                   cout<<"Valor aproximado de pi"<<endl;
                   cout<<"Ingrese el numero de terminos de la sumatoria: ";
                   cin>>num;
                   div=4;
                   for(int i=1;i<num;i++){
                       if (i%2==0) pi=4*(float(1)/float(2*i+1));
                       else pi=4*(float(-1)/float(2*i+1));
                      div= div + pi;
                   }
                   cout<< "pi es aproximadamente: " << div<< endl;
               break;
               case 29:
                   cout<<"Adivinar un numero entre (0 y 100)"<<endl;
                   valor2=100;
                   valor1=0;
                   while (car!=61){
                       resultado=(valor1+valor2)/2;
                       cout<< resultado << " es <,> o = al numero ? : ";
                       cin>>car;
                       if (car==62){
                           valor2=resultado;
                       }
                       else if(car==60){
                              valor1=resultado;
                       }
                   }
                   cout<<"El numero que pensaste fue: "<<resultado<<endl;
               break;
               case 30:
                   cout<<"Numero aleatorio (entre 0 y 100) y el usuario lo adivina"<<endl;
                   srand(time(NULL));
                   num=rand()%(101-1);
                   cont=0;
                   cout<<num<<endl;
                   cout<<"Ingrese el numero semilla: ";
                   cin>>valor1;
                   while(num!=valor1){
                       if (num<valor1) {
                           cout<< valor1 <<" Es mayor que el numero"<<endl;
                           cont+=1;
                       }
                       else{
                           cout<< valor1 <<" Es menor que el numero "<<endl;
                           cont+=1;
                       }
                       cout<<"Ingrese otro numero: ";
                       cin>>valor1;
                   }
                   cout<<"Adivinaste!! el numero es: " << num<<endl;
                   cout<<"Lo hiciste en: "<<cont+1<<" " <<"intentos"<<endl;
               break;

               }
           break;

           case 2:
           cout<< "Ingrese el numero del problema: ";
           cin >> valor2;
           switch(valor2){
               case 1:
                   cout << "Ingrese el caracter: ";
                   cin >> j;
                   car=int(j);
                       if((car>=65 && car<=90)||(car>=97 && car<=122)){
                           if(car==65 || car==69 || car==73 || car==79 || car==85) cout << j << " Es una vocal mayuscula" << endl;
                           else if(car==97 || car==101 || car==105 || car==111 || car==117) cout << j << " Es una vocal minuscula" << endl;
                           else cout << j << " Es una consonante" << endl;
                       }

                   else cout << "No es una letra" << endl;
               break;
               case 2:
                   cout<< "Conteo de Billetes y monedas"<<endl;
                   cout<< "Ingrese la cantidad de dinero: ";
                   cin>>num;
                   valor1=100000; //Valor a decrementar
                   for(int i=0;i<=9;i++){
                       valor2=i-3*(i/3); // convertir i en 0,1 o 2 sin importar el cuadrante ( valores significativos 5,2,1)
                       if(i%3==0) valor1/=10; //decrementa segun el cuadrante
                       aux=(valor2*valor2-4*valor2+5)*valor1; // funcion cuadrantica que convierte f(0)=1,f(1)=2,f(2)=5
                       cout<< aux<< ": "<<num/aux<<endl; // cantidad de billetes
                       num=num%aux; // sobrante
                   }
                  cout<<"Faltante: " <<num<<endl;
               break;
               case 3:
                   cout<<"Fecha valida segun el Mes y el dia"<<endl;
                   cout<<"Ingrese el mes: ";
                   cin>> valor1; //meses
                   cout<<"Ingrese el dia: ";
                   cin>> valor2; //dias
                   if(valor1%2!=0 && valor1<=7 && valor2<=31) cout<<valor2 <<"/"<< valor1 <<" "<<"Fecha valida"<<endl;
                   else if((valor1%2==0 && valor1>=8 && valor1<=12 && valor2<=31) || (valor1==2 && valor2<=28)) cout<<valor2 <<"/"<< valor1<<" " <<"Fecha valida"<<endl;
                   else if(valor1%2==0 && valor1>=4 && valor1<=6 && valor2<=30) cout<<valor2 <<"/"<< valor1<<" " <<"Fecha valida"<<endl;
                   else if(valor1%2!=0 && valor1>=9 && valor1<=11 && valor2<=30) cout<<valor2 <<"/"<< valor1 <<"Fecha valida"<<endl;
                   else if(valor1==2 && valor2==29 && valor2<=31) cout<<valor2 <<"/"<< valor1<<" " <<"Fecha valida en bisiesto"<<endl;
                   else cout<<valor1 <<"/"<< valor2 <<"Fecha invalida"<<endl;
               break;
               case 4:
                   cout<<"Suma de tiempos en formato horas y minutos"<<endl;
                   cout<<"Ingrese el primer entero: ";
                   cin>>num;
                   cout<< "Ingrese el segundo entero: ";
                   cin>>cont;
                   valor1=num/100; //Separacion de horas del primer entero
                   valor2=num%100;// separación de min del primer entero
                   valor3=cont/100; //Separacion de horas del 2do entero
                   valor4=cont%100;// separación de min del 2do entero
                   if(valor1>24 || valor2>=60) cout<<num<<" "<<"Es un tiempo invalido"<<endl;
                   else if(valor3>24 || valor4>=60) cout<<cont<<" "<<"Es un tiempo invalido"<<endl;
                   else if (valor2+valor4>=60 && valor1+valor3<24){
                       resultado=valor1+valor3+1;//conteo de las horas
                       aux=valor2+valor4-60; //conteo de minuto
                       resultado=resultado*100+aux;
                       cout<<"La hora es :"<<resultado<<endl;
                   }
                   else if (valor2+valor4>=60 && valor1+valor3>=24){
                       resultado=valor1+valor3-24;//conteo de las horas
                       aux=valor2+valor4-60; //conteo de minuto
                       resultado=resultado*100+aux;
                       cout<<"La hora es :"<<resultado<<endl;
                   }
                   else if (valor2+valor4<60 && valor1+valor3>=24){
                       resultado=valor1+valor3-25;//conteo de las horas
                       aux=valor2+valor4; //conteo de minuto
                       resultado=resultado*100+aux;
                       cout<<"La hora es :"<<resultado<<endl;

                   }
                   else{
                       resultado=valor1+valor3;
                       aux=valor2+valor4;
                       resultado=resultado*100+aux;
                       cout<<"La hora es :"<<resultado<<endl;
                   }

               break;
               case 5:
               cout<<"Grafico rombo que  dependen de n"<<endl;
               cout<<"Ingrese el numero impar: ";
               cin>>num;
               if (num%2==0) cout<<"El numero no es impar"<<endl;
               else{
                   for (int fil=0;fil<=num-1;fil++){
                       for(int col=0; col<=num-1;col++){
                           if (fil<=col+(num/2) && fil>=col-(num/2) && col<=(num-1-fil)+(num/2) && fil>=(num/2)-col) cout<<"*";
                           else cout<<" ";
                       }
                       cout<<endl;
                   }
               }
               break;
               case 6:
                   cout<<"Aproximacion de Euler "<< endl;
                   cout<<"Ingrese el numero de terminos: ";
                   cin>>valor1;
                   resultado=1;
                   div=1;
                   for(int i=1;i<=valor1-1;i++){
                       resultado=resultado*i; // calculamos factorial
                       div=div +1/float(resultado); //sumatoria de e=1/!n
                   }
                   cout<<"La aproximacion de e es: "<<div<<endl;
               break;
               case 7:
                   cout<<"Sumas de pares de serie de Fibonacci "<< endl;
                   cout<< "Ingrese numero de terminos de la serie: ";
                   cin>>numero;
                   aux=0;
                   ant=0;//numero anterior
                   actual=1;// numero actual
                   resultado=0;
                   for(long long int i=1;i<=numero;i++){
                       aux=actual;
                       actual+=ant;
                       if (actual%2==0 && actual<=numero) resultado=resultado+actual;
                       ant=aux;
                   }
                   cout<<"El resultado de la suma es:  "<<resultado<<endl;
               break;
               case 8:
                     cout<<"Imprime suma de multiplos de A y B menores a C"<<endl;
                     cout<<"Ingrese numero A: ";
                     cin>>valor1;
                     cout<<"Ingrese numero B: ";
                     cin>>valor2;
                     cout<<"Ingrese numero C: ";
                     cin>>num;
                     resultado=0;
                     u=0;
                     for(int i=1;i<num;i++){
                         valor3=i*valor1; //multiplos de A
                         if(valor3<num){
                             u=valor3;
                             cout<<valor3<<" + ";
                         }
                         else u=0;
                         resultado=resultado+u;
                    }

                    for(int j=1;j<num;j++ ){
                         valor4=j*valor2; //multiplos de B
                         if(valor4<num && valor4%valor1!=0){
                             aux=valor4;
                             cout<<valor4<<" + ";
                         }
                         else aux=0;
                         resultado=resultado+aux;

                    }
                    cout<<" = "<<resultado<<endl;
               break;
               case 9:
                    cout<<"Suma de cada uno de los digitos a su exponente de un numero "<<endl;
                    actual=0;           // variable que da el resultado final
                    resultado=1;         // variable que calcula el exponente de cada digito
                    cout<<"Ingresar el numero: ";
                    cin >> num;
                    while(num>0){
                        base=num%10;      // se realiza la operación módulo para separar los dígitos
                        exp=base;
                        num=num/10;         // eliminar el digito que ya se va a operar.
                        for(resultado=1; exp >0;exp--){ // ciclo for que calcula el exponente dependiendo del digito ingresado
                            resultado=resultado*base;
                        }
                        actual= actual+ resultado;
                    }
                    cout<< "El resultado es: " << actual << endl;
               break;
               case 10:
               cout<<"Imprimir el enesimo primo"<<endl;
               cout<<"Ingrese el N primo: ";
               cin>>num;
               primo=true;
               cont=0;
               for (int n = 2 ; cont<num; n++ ){
                    aux=n;
                    primo = true;
                    valor1= 2;
                    while ( valor1 <= n / 2 && primo==true ){
                         if ( n % valor1 == 0 ) primo = false;
                         valor1++;
                           }
                         if (primo==true){
                           cont++;
                        }
               }
               cout<<"el numero primo "<<num <<" es :"<<aux<<endl;
               break;
               case 11:
                   cout<<"MCM entre 1 y los N numeros"<<endl;
                   cout<<"Ingrese el N : ";
                   cin>>cont;
                   valor1=1;
                   valor2=2;
                   resultado=0;
                   for(int i=1; i<cont ; i++){
                       if(valor1>valor2) num=valor1;
                       else num=valor2;
                       resultado=num;
                       while ((resultado%valor1!=0) ||(resultado%valor2!=0)){
                           resultado=resultado+1;
                           }
                   valor1=resultado;
                   valor2=valor2+1;
                   }
                   cout<<"M.C.M :"<<" "<<resultado<<endl;
               break;
               case 12:
                   cout<<"Calcular el primo mayor de N"<<endl;
                   cout<<"Ingrese el N: ";
                   cin>>num;
                   primo=true;

                   for (int n = 2 ; n<num; n++ ){
                        primo = true;
                        valor1= 2;
                        while ( valor1 <= n / 2 && primo==true ){
                             if ( n % valor1 == 0 ) primo = false;
                             valor1++;
                               }
                             if (primo==true){
                                 if(num%n==0) aux=n;
                            }
                   }
                   cout<<"El mayor pirmo de "<<num <<" es: "<<aux<<endl;
               break;
               case 13:
                   cout<<"Calculo de la suma de todos los primos menores al numero"<<endl;
                   cout<<"Ingrese el N: ";
                   cin>>num;
                   primo=true;
                   aux=0;
                   for (int n = 2 ; n<num; n++ ){
                        primo = true;
                        valor1= 2;
                        while ( valor1 <= n / 2 && primo==true ){
                             if ( n % valor1 == 0 ) primo = false;
                             valor1++;
                               }
                             if (primo==true){
                                 aux=aux+n;
                            }
                   }
                   cout<<"El resultado de la suma es: "<<aux<<endl;
               break;
               case 14:
                   cout<<"Calcula el maximo numero palindromo que se obtiene de una multiplicacion de 3 cifras"<<endl;
                   for(int n=100;n<=999;n++){
                      for(int i=100;i<=999;i++){
                          resultado=n*i;
                          aux=resultado;;
                          numinvertido=0;
                          while (aux!=0) {
                              u=aux%10; //para obt
                              numinvertido=numinvertido*10+u;
                              aux=aux/10;//para quitar el ultimo digito
                         }
                         if(numinvertido==resultado){
                             if(resultado>num){
                             valor1=n;
                             valor2=i;
                             num=resultado;
                             }
                         }
                     }
                  }
                  cout<<valor1<<" * " <<valor2<<" = "<<num<<" "<<endl;
               break;
               case 15:
                 cout << "Ingrese el tamano de la espiral: ";
                 cin >> n;
                 resultado=0;
                 for(int fil=0;fil<n;fil++){
                     for(int col=0, num;col<n;col++){
                         if((fil<=col && fil<=n-1-col)|| (fil>=col && fil>=n-1-col)){
                             k=!(fil<=col && fil<=n-1-col);
                             num=((n-2*fil)-2*k*(n-2*fil)+2*k)*(((n-2*fil)-2*k*(n-2*fil))-1*(!k))+(1+k);
                             cout << num+col-(2*col*k)-fil+k*(n-1) << '\t';
                         if(fil==col || fil==(-col+n-1)) resultado=resultado+num+col-(2*col*k)-fil+k*(n-1); //suma de diagonales

                         }
                         else{
                             k=fil<col && fil>n-1-col;
                             num=((2*k-1)*(2*col-n))*((2*k-1)*(2*col-n)-1+k);
                             cout << num+col+1+fil*(2*k-1)-n*k << '\t';
                         }
                     }
                     cout << endl << endl;

                 }
                 cout<<"La suma de la diagolanes es: "<< resultado<<endl;
               break;
               case 16:
                     cout<<"Ingrese numero K: ";
                     cin>>num;
                     resultado=num-1;
                     aux=0;
                     valor1=0;
                     for(int i=num-1;i>1;i--){
                          aux=i;
                          cont=0;
                          while(aux!=1){ // para generar la serie collatz
                             if(resultado%2==0) resultado=resultado/2;
                             else resultado=3*resultado+1;
                             aux=resultado;
                             cont++;
                          }
                         if(cont>valor1){
                             valor2=i;
                             valor1=cont;
                         }
                        resultado=i-1;
                     }
                     cout<<"La serie mas larga es con la semilla: "<<valor2<<" teniendo "<<valor1+1<< " terminos"<<endl;
                     resultado=valor2;
                     aux=2;
                     cout<<valor2<<",";
                     while(aux!=1){ // para generar la serie collatz e imprimirla
                        if(resultado%2==0) resultado=resultado/2;
                        else resultado=3*resultado+1;
                        aux=resultado;
                        cout<<aux<<",";
                     }
                     cout<<endl;

               break;
               case 17:
                     cout<<"Imprime el primer numero triangular con mas de k divisores"<<endl;
                     cout<<"Ingrese numero K :";
                     cin>>num;
                     cont=0;
                     for(int n=1;cont<=num;n++){
                         valor1=n*(n+1)/2; // hallar los numeros triangulares
                         cont=0;
                         for (int i=valor1;i>=1;i--){
                             div=float(valor1)/float(i);
                             resultado=div;
                             if ((div-resultado)==0){
                                 cont++;
                             }
                         }
                     }
                     cout<<"El numero triangular es: "<<valor1<<" tiene "<< cont <<" divisores "<<endl;
               break;
           }
           break;
           default:
                cout << "Ningun caso anterior" << endl;
           break;
        }
    }

    return 0;
}

