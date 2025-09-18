#include "Laptop.h"
#include <iostream>
using namespace std;



Laptop::Laptop(const char* m, const char* c, double p)
{
	model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);

	color = new char[strlen(c) + 1];
	strcpy_s(color, strlen(c) + 1, c);

	price = p;
}



void Laptop::Print()
{
	cout << "Moedl: " << model << "\tColor: " << color << "\tPrice: " << price << endl;
}

Laptop::~Laptop()
{
	delete[] model;
	delete[] color;
}
