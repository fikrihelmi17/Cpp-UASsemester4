#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class Shape {
	public:
		virtual void volume() = 0;
};

class TwoDimensionalShape : public Shape {
	public:
		virtual void volume() = 0;
};


class Sphere : public TwoDimensionalShape {
	protected:
		double r;
		const double phi = 3.14;
	public:
		
		double volume(double jari){
			return (4*phi*jari*jari*jari)/3;
		}
};


int main(){
	TwoDimensionalShape *twoD;
	Sphere bola();
	cin >> j
	twoD = &bola;
	cout << "Hasil Volume Bola : "; cout << twoD->volume() << endl;
	
	return 0;
}
