#pragma once
#include<iostream>
#include<iomanip>
#include<string>
#include<sstream>
using namespace std;

class Stek
{
private:
	int x;
	 struct stek
	 {
		stek* link;
	    int info;
		stek(stek* n, int x) : info(x), link(n) {}
	 };
	stek* top;
	
public:
	Stek();
	Stek(int x);
	int getX() const { return x; }
	void setX(int value) { x = value; }
	
	Stek operator + (Stek &a);
	Stek& operator = (const Stek&);

	friend Stek operator * (Stek r, int x);
	friend ostream& operator << (ostream& out, const Stek& a);
	friend istream& operator >> (istream& in, Stek& a);
	friend bool operator == (Stek à,Stek b);
	friend Stek operator +=(const Stek& a, int b);

	int Pop();
	
};

