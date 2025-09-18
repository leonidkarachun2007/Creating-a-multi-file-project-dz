#pragma once
class Laptop
{
	char* model;
	char* color;
	double price;
public:
	Laptop(const char* m, const char* c, double p);
	void Print();
	~Laptop();
};
