#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	int a;
	//Zapytanie o wielko�� tabeli
	cout<<"Podaj wielko�� tabeli"<<endl;
	cin>> a;
	int tab[a];
	//Dodawanie element�w do tabeli
	for(int i;i<a;i++){
		cout<<"Podaj "<<i+1<<" warto�� w tabeli"<<endl;
		cin>> tab[i];
		
	}
	//Sortowanie tabeli oraz liczenie sumy element�w tabeli
	sort(tab, tab+a);
	int suma = 0;
	for(int j=0;j<a;j++)
		suma = suma + tab[j];
		
	//Wypisanie informacji o medianie
	cout<<"------"<<endl;
	cout<<"Suma element�w tabeli wynosi "<<suma<<", wielko�� tabeli to "<<a<<" wi�c mediana jest r�wana "<<suma/a<<endl;
	
	//Odnajdywanie �rodkowej warto�ci sumy liczb z tabeli	
	if(suma%a==0){
		cout<<"Warto�� najbli�sza medianej to "<<tab[a/2]<<endl; //Sytuacja gdy mamy liczb� nieparzyst� [jest �rodek]	
	}else{
		cout<<"Warto�� najbli�sza medianej to "<<tab[a/2-1]<<" lub "<<tab[a/2]<<endl; //Sytuacja gdy mamy liczb� parzyst� [nie ma �rodka]	}
	return 0;
}
}

