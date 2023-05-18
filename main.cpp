#include "IsoTrapezoid.h"
#include "rhombus.h"
#include "rectangle.h"
#include <iostream>

#define MAX_NUM 100
void Menu();

int main(){
	Polygon* P[MAX_NUM] = {0};
	char choice = 0;
	int temp;
	int i = 0;
	while (choice != '5'){
		Menu();
		cin >> choice;
		switch (choice) {
		case '1': 
			P[i] = new Rectangle();
			cout << "Insert length and width: ";
			Rectangle * rect;

			//APPROCCIO SPIEGATO DAL PROF. ZUNINO
			rect = dynamic_cast<Rectangle *>(P[i]);
			if (rect)
				cin >> *rect;
			i++;

			break;
		case '2':
			P[i] = new Rhombus();
			cout << "Insert horizontal diagonal and vertical diagonal: ";
			Rhombus * rhom;
			rhom = dynamic_cast<Rhombus *>(P[i]);
			if (rhom)
				cin >> *rhom;
			i++;
			break;

		case '3':
                	P[i] = new IsoTrapezoid();
			cout << "Insert top side, bottom side and height: ";
			IsoTrapezoid* iso;
			iso = dynamic_cast<IsoTrapezoid *>(P[i]);
			if (iso)
				cin >> *iso;
			i++;
			break;
		case '4':
			temp = i;
			for (i = 0; i < temp; i++){
				cout << "\narea: "<< P[i]->GetArea() << "\t";
				cout << "perimeter: " << P[i]->GetPerimeter() << endl;
			}
		
			break;
		case '5':
			temp = i;
		        for (i = 0; i < temp; i++){
		        	delete P[i];
				cout<< "deleting" << endl;
		        }		
			cout << "Closing program..." << endl;
			break;
		default:	
			break;
		}
	}
	return 0;
}


void Menu (){
	cout << "Insert 1 to create rectangle: " << endl;
	cout << "Insert 2 to create rhombus: " << endl;
	cout << "Insert 3 to create iso trapezoid: " << endl;
	cout << "Insert 4 to draw: " << endl;
	cout << "Insert 5 to exit the program: ";
}

			


