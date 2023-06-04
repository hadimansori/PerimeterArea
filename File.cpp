#include <iostream>
using namespace std;


class Perimeter { // محیط
	public:
		float Square(float side) {
			return side * 4;
		}
		float Triangle(float side1, float side2, float side3) {
			return side1 + side2 + side3;
		}
		float Circle(float diameter) {
			return 3.14 * diameter;
		}
		float Rectangle(float length, float width) {
			return 2 * (length + width);
		}
};


class Area { // مساحت
	public:
		float Square(float side) {
			return side * side;
		}
		float Triangle(float base, float height) {
			return (base * height) / 2;
		}
		float Circle(float radius) {
			return 3.14 * (radius * radius);
		}
		float Rectangle(float length, float width) {
			return length * width;
		}
};




int main() {
	// Main Menu
	cout << "Welcome \n";
	Menu:
		int NumberMenu1;
		cout << "1. Perimeter \n" << "2. Area \n" << "choose the desired option: ";
		cin >> NumberMenu1;
			
		int NumberMenu2;
		cout << "1. Square \n" << "2. Triangle \n" << "3. Circle \n" << "4. Rectangle \n" << "choose the geometric shapes: ";
		cin >> NumberMenu2;
	
	
	if(NumberMenu1 == 1) { // if Perimeter
		Perimeter task;
		
		if(NumberMenu2 == 1) { //if Square
			float Side;
			cout << "Side: ";
			cin >> Side;
			cout << "Result: " << task.Square(Side) << "\n";
		
		} else if (NumberMenu2 == 2) { //if Triangle
			float Side1;
			cout << "Side 1: ";
			cin >> Side1;
			float Side2;
			cout << "Side 2: ";
			cin >> Side2;
			float Side3;
			cout << "Side 3: ";
			cin >> Side3;
			cout << "Result: " << task.Triangle(Side1, Side2, Side3) << "\n";
			
			
		} else if (NumberMenu2 == 3) { //if Circle
			float Diameter;
			cout << "Diameter: ";
			cin >> Diameter;
			cout << "Result: " << task.Circle(Diameter) << "\n";
		
		} else if (NumberMenu2 == 4) { //if Rectangle
			float Width;
			cout << "Width: ";
			cin >> Width;
			float Length;
			cout << "Length: ";
			cin >> Length;
			cout << "Result: " << task.Rectangle(Length, Width) << "\n";
		}
		
		
		
	} else if (NumberMenu1 == 2) { //if Area
		Area task;
		
		if(NumberMenu2 == 1) { //if Square
			float Side;
			cout << "Side: ";
			cin >> Side;
			cout << "Result: " << task.Square(Side) << "\n";
		
		} else if (NumberMenu2 == 2) { //if Triangle
			float Base;
			cout << "Base: ";
			cin >> Base;
			float Height;
			cout << "Height: ";
			cin >> Height;
			cout << "Result: " << task.Triangle(Base, Height) << "\n";
		
		} else if (NumberMenu2 == 3) { //if Circle
			float Radius;
			cout << "Radius: ";
			cin >> Radius;
			cout << "Result: " << task.Circle(Radius) << "\n";
		
		} else if (NumberMenu2 == 4) { //if Rectangle
			float Width;
			cout << "Width: ";
			cin >> Width;
			float Length;
			cout << "Length: ";
			cin >> Length;
			cout << "Result: " << task.Rectangle(Length, Width) << "\n";
		}
	}
	
	goto Menu;
	
	return 0;
}
