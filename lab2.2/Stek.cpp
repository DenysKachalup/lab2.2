#include "Stek.h"
Stek::Stek() 
	: top(0),x(1)
{}
Stek::Stek(int q)
{
	setX(q);
}
Stek operator += ( const Stek& a,int b)
{
	Stek::stek* L = a.top;
	while (L != NULL)
	{
		L->info += b;
		L = L->link;
	}
	return a;
}
bool operator == (Stek a, Stek b)
{
	Stek::stek* L = a.top;
	Stek::stek* K = b.top;

	while (L != NULL)
	{
		while (K != NULL)
		{
			if (L->info == K->info)
				return true;
			K = K->link;
		}
		L = L->link;
	}
	return false;
}
Stek& Stek::operator = (const Stek& r)
{
	x = r.x;

	return *this;
}
Stek operator * (Stek r, int x)
{
	Stek::stek* L = r.top;
	/*while (L->link != NULL)
	{
		L = L->link;
	}*/
	L->info = L->info * x;

	return r;
}
Stek Stek:: operator + (Stek& a)
{
	//Stek t;
	//t.x =this->x + a.x;
	top = new stek(top,a.x);
	return a;
}
istream& operator >> (istream& in, Stek& a)
{
	in >> a.x;
	return in;
}
ostream& operator << (ostream& out, const Stek& a)
{
	Stek::stek* L = a.top;
	while (L != NULL)
	{
		out << L->info << setw(4);
		L = L->link;
	}
	cout << endl;
	return out;
}
int Stek:: Pop() 
{
	int top1=0;
	while (top != NULL)
	{
		top1 = top->info;
		Stek::stek* old = top;
		top = top->link;
		delete old;
	}
	 return top1; 
}