#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	int a;
	//Zapytanie o wielkoœæ tabeli
	cout<<"Podaj wielkoœæ tabeli"<<endl;
	cin>> a;
	int tab[a];
	//Dodawanie elementów do tabeli
	for(int i;i<a;i++){
		cout<<"Podaj "<<i+1<<" wartoœæ w tabeli"<<endl;
		cin>> tab[i];
		
	}
	//Sortowanie tabeli oraz liczenie sumy elementów tabeli
	sort(tab, tab+a);
	int suma = 0;
	for(int j=0;j<a;j++)
		suma = suma + tab[j];
		
	//Wypisanie informacji o medianie
	cout<<"------"<<endl;
	cout<<"Suma elementów tabeli wynosi "<<suma<<", wielkoœæ tabeli to "<<a<<" wiêc mediana jest rówana "<<suma/a<<endl;
	
	//Odnajdywanie œrodkowej wartoœci sumy liczb z tabeli	
	if(suma%a==0){
		cout<<"Wartoœæ najbli¿sza medianej to "<<tab[a/2]<<endl; //Sytuacja gdy mamy liczbê nieparzyst¹ [jest œrodek]	
	}else{
		cout<<"Wartoœæ najbli¿sza medianej to "<<tab[a/2-1]<<" lub "<<tab[a/2]<<endl; //Sytuacja gdy mamy liczbê parzyst¹ [nie ma œrodka]	}
	return 0;
}
}

