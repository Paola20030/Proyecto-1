//triangulo
#include <iostream>
//#include"shape.cpp"
using namespace std;

class Triangulo:public IShape 
{
private:
	int x, y, lado,p;
public:
	void setlado(int lado) {
		this->lado = lado;
	}
	int getlado() {
		if (lado < 1)
			lado = 2;
		return lado;
	}
	void setx(int x) {
		this->x = x;
	}
	int getx() {
		if (x < 2)
			x = 2;
		return x;
	}
	void sety(int y) {
		this->y = y;
	}
	int gety() {
		if (y < 2)
			y = 2;
		return y;
	}

    void draw() {
		char move;

		while ((move = cin.get()) != 'p') {
			system("clear");

			cout << "Cordenadas X: " << getx() << endl;
			cout << "Cordenadas Y: " << gety() << endl;
			if (move == 'a') {
				x--;
			}
            else if (move == 'd') {
				x++;
			}
			else if (move == 's') {
				y++;
			}
			else if (move == 'w') {
				y--;
			}
			for (int c = 0; c < y; c++) {
				cout << endl;

			}
			for (int i = 1; i <= lado; i++)
			{
				for (int k = 0; k < x; k++) {
					cout << " ";
				}
				for (int j = 0; j < i; j++)
				{
					cout << ("*");

				}
				cout << endl;
			}
		}
	}
};
