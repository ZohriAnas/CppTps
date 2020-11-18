#include "stdafx.h"
#include "Complexe.h"
#include <string>
#include <math.h>
#include <iostream>
using namespace std;
Complexe::Complexe()
{
	this->Reel = 0.0;
	this->Img = 0.0;
}

Complexe::Complexe(double R, double I)
{
	this->Reel =  R;
	this->Img  = I;
}

Complexe::Complexe(const Complexe & C)
{
	this->Reel =C.Reel;
	this->Img = C.Img;
}

void Complexe::AfficherNmbr()
{
	string s;
	if (this->Img > 0)
		 s = "(" + to_string(this->Reel) + "+" + to_string(this->Img) + "i)";
	else
		 s = "(" + to_string(this->Reel) + to_string(this->Img) + "i)";
	
	cout << s << endl;
}

double Complexe::Modudle()
{
	return sqrt(pow(this->Reel,2)+ pow(this->Reel, 2));
}

Complexe Complexe::Conjugé()
{
	Complexe R;
	R.Reel = this->Reel;
	R.Img = -this->Img;
	return R;
}

Complexe Complexe::operator+(const Complexe & C)
{
	Complexe R;
	R.Reel = this->Reel+C.Reel;
	R.Img = this->Img+C.Img;
	return R;
}

Complexe Complexe::operator+(double D)
{
	Complexe R;
	R.Reel = this->Reel + D;
	R.Img = this->Img;
	return R;
}

Complexe Complexe::operator*(const Complexe &C)
{
	Complexe R;
	R.Reel = (this->Reel * C.Reel)- (this->Img * C.Img);
	R.Img = (this->Reel * C.Img) + (this->Img * C.Reel);
	return R;
}

bool Complexe::operator==(const Complexe & C)
{
	return this->Reel == C.Reel && this->Img == C.Img;
}
