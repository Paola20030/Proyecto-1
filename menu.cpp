//menu
#include"cuadrado.cpp"
#include"triangulo.cpp"
#include"rectangulo.cpp"
#include <iostream>
using namespace std;

class Menu
{
private:
	int opc,tipo,lado,alto,x,y;

	public:
		void opcion() {
			do {
                system("clear");
                cout << endl << "Opciones:" << endl;
				cout << "1. Cudrado " << endl;
				cout << "2. Triangulo " << endl;
				cout << "3. Rectangulo " << endl;
				cout << "0. Salir " << endl;
                cout << endl << "Ingrese la opcion que quiera: ";
				cin >> opc;

				switch (opc)
				{
				case 1:
				{
					cout << endl << "Tipos de cuadrado:" <<endl;
                    cout << "1. Lleno" << endl;
                    cout << "2. Huequito" << endl;
                    cout << endl << "Ingrese el tipo que quiera: ";
					cin >> tipo;
					cout << endl << "Medida de lado: ";
					cin >> lado;
					cout << "Posicion X: ";
					cin >> x;
					cout << "Posicion Y: ";
					cin >> y;
					system("clear");
					Cuadrado cuadrado;
					cuadrado.setlado(lado);
					cuadrado.getlado();
					cuadrado.settipo(tipo);
					cuadrado.gettipo();
					cuadrado.setx(x);
					cuadrado.sety(y);
					cuadrado.draw();
					break;
				}
                case 2:
				{
					cout << endl << "Medida de lado: ";
					cin >> lado;
					cout << "Posicion X: ";
					cin >> x;
					cout << "Posicion Y: ";
					cin >> y;
					system("clear");
					Triangulo triangulo;
					triangulo.setlado(lado);
					triangulo.getlado();
					triangulo.setx(x);
					triangulo.sety(y);
					triangulo.draw();
					break;
				}

				case 3:
				{
					cout << endl << "Medida de lado: ";
					cin >> lado;
					cout << endl << "Medida de alto: ";
					cin >> alto;
					cout << "Posicion X: ";
					cin >> x;
					cout << "Posicion Y: ";
					cin >> y;
					system("clear");
					Rectangulo rectangulo;
					rectangulo.setlado(lado);
					rectangulo.getlado();
					rectangulo.setalto(alto);
					rectangulo.getalto();
					rectangulo.setx(x);
					rectangulo.sety(y);
					rectangulo.draw();
					break;
				}

				default:
					break;
				}
                
				cin.get();
			} while (opc != 0);
			
		}	
};
