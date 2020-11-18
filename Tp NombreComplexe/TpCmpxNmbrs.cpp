// TpCmpxNumbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Complexe.h"
#include <math.h>
using namespace std;

int main()
{
	//Instantiation
	Complexe Cmp1,Cmp4,Cmp5,Cmp6;
	Complexe Cmp2(5.2, 3.16);
	Complexe Cmp3(Cmp2); 
	//Affichage
	Cmp1.Afficher();
	Cmp3.Afficher();
	//Conjugé
	Cmp4 = Cmp2.Conjugé(); 
	Cmp4.Afficher();
	//Module
	cout<< Cmp2.Modudle()<<endl; 
	//Opérations
	Cmp5 = Cmp2 + Cmp3; 
	Cmp6 = Cmp2 * Cmp3;
	Cmp5.Afficher();
	Cmp6.Afficher();
	//Comparer
	cout << (Cpm2==Cmp3) << endl;
	getchar();
    return 0;
}

