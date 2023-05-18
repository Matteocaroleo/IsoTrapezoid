#include "IsoTrapezoid.h"
#include "rhombus.h"
#include "rectangle.h"
#include <iostream>

#define MAX_NUM 100
void Menu(char& choice);


int main(){
	Polygon* P[MAX_NUM] = {0};
	char choice = 0;
	int temp;
	int i = 0;
	while (choice != 5){
		Menu();
		switch (choice) {
		case 1: 
			P[i] = new Rectangle();
			break;
		case 2:
			P[i] = new Rhombus();
			break;
		case 3:
			P[i] = new IsoTrapezoid();
			break;
		case 4:
			temp = i;
			for (i = 0; i < temp, i++){
				P[i]->GetArea();
				P[i]->GetPerimeter();
			}
			break;
		case 5: 
			cout << "Closing program..." << endl;
			break;
		default: 
			break;
		}
	}
	return 0;
}
			


	/*
	IsoTrapezoid pietro(-1, 2 , 3);

	cout << pietro;
	cin >> pietro;

	cout << pietro;

	IsoTrapezoid lenny (pietro);

	
	return 0;
	*/


}


void Menu (char& choice){
	cout << "Insert 1 to create rectangle: " << endl;
	cout << "Insert 2 to create rhombus: " << endl;
	cout << "Insert 3 to create iso trapezoid: " << endl;
	cout << "Insert 4 to draw: " << endl;
	cout << "Insert 5 to exit the program: ";
	cin << choice;
}

