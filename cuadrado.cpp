#include <iostream>
#include"shape.cpp"
using namespace std;

class Cuadrado:public IShape 
{
private:
	int x, y, lado,tipo,p;
	
public:
	void setlado(int lado){
		this->lado = lado;
	}
	int getlado() {
		if (lado < 2)
			lado = 2;
		return lado;
	}
	void setx(int x) {
		this->x = x;
	}
	int getx() {
		if (x < 1)
			x = 2;
		return x;
	}
	void sety(int y) {
		this->y = y;
	}
	int gety() {
		if (y < 1)
			y = 2;
		return y;
	}
	void settipo(int tipo) {
		this->tipo = tipo;
	}
	int gettipo() {
		if (tipo < 1) {
			tipo = 1;
		}
		else if (tipo > 2)
			tipo = 2;

		return tipo;
	}
	
	void draw() {
		char move;
		
		while ((move = cin.get()) != 'p') {
			system("clear");

			cout <<"Cordenada X: "<< getx()<<endl;
			cout <<"Cordenada Y: "<< gety()<<endl;
			if (move == 'a') {
				x--;
			}
			else if (move == 's') {
				y++;
			}
			else if (move == 'w') {
				y--;
			}
			else if (move == 'd') {
				x++;
			}
			for (int c = 0; c < y; c++) {
				cout << endl;

			}
			for (int j = 0; j < lado; j++) {
				for (int z = 0; z < x; z++) {
					cout << " ";

				}
				for (int i = 0; i < lado; i++) {

					if (tipo == 1) {
						cout << " *";
					}
					else {
						if ((j == 0 || i == 0) || (j == (lado - 1)) || (i == (lado - 1))) {
							cout << " *";
						}
						else {
							cout << "  ";
						}
					}
				}
				cout << endl;
			}
		}
	}
};