#include <iostream>
#include <string>

using namespace std;

//Function Decleration
void fillArray(int[], &int);
//In above function, there are two parameters
//1. first parameter is about an array, and the 
//second one is about a reference to in

void printArray(int[], int)

const int CAPACITY;

int main()
{
	int numberOfElements = 0;
	int colors[CAPACITY];
	
	fillArray(colors, &numberOfElements);
	printArray(colors, numberOfElements);

	return 0;
}


//Function Definition

void fillArray(int[] colors, &int numberOfElements)
{
	cout << "Enter the name of colors (-1 to stop)" << endl;
	string color;
	cin >> color;
	int i = 0;
	while ((color != "-1") && (i < CAPACITY))
	{
		colors[i] = color;
		i++;
		cout << "Enter more stuff\n";
		cin >> color;
	}
}

void printArray(int[] colors, int numberOfElements)
{
	cout << "The name of Colors are\n";
	for (int i = 0; i < numberOfElements; i++)
	{
		cout << colors[i] << ", ";	
	}
}

