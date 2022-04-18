#include<iostream>
#include<fstream>
#include<stdio.h>
#include<conio.h>
#include<ctime>
#include<stdlib.h>
#include<string>
using namespace std;
void WordsPresentInGrid() {
	srand(time(NULL));
	string nameOfInputFile, currentWord;
	cout << "Enter the name of text file to load the words: ";
	cin >> nameOfInputFile;

	//You don't have to write "input.txt", just writing "input" works beacuse of the "if" condition below. 
	//Not necessary but makes the code more user friendly
	if (nameOfInputFile.size() >= 4 && (nameOfInputFile.substr(nameOfInputFile.size() - 4, 4) != ".txt"))
	{
		nameOfInputFile += ".txt";
	}

	//Creating an object of ifstream that actually allows us to read files from the system (instead of the console only). 
	//inputFile is just a name and you can change this name to whatever your heart desires
	ifstream inputFile(nameOfInputFile.c_str());

	//Checks if the loading of text file was successful or not. Always make sure the text file is in the same folder as your Source.cpp file,
	//otherwise the system won't be able to find the text file and you'll get an error. 
	if (!inputFile)
	{
		cout << "Text file could not be loaded. Please verify its name and location.\n";
		system("pause>0");
		return ;
	}
	while (!inputFile.eof())
	{
		getline(inputFile, currentWord);
		cout << currentWord << "\n";
	}
}
void gridcontainingwordstobesearched()
{
	srand(time(NULL));
	string nameOfInputFile, currentWord;
	cout << "Enter the name of text file to load the words: ";
	cin >> nameOfInputFile;

	//You don't have to write "input.txt", just writing "input" works beacuse of the "if" condition below. 
	//Not necessary but makes the code more user friendly
	if (nameOfInputFile.size() >= 4 && (nameOfInputFile.substr(nameOfInputFile.size() - 4, 4) != ".txt"))
	{
		nameOfInputFile += ".txt";
	}

	//Creating an object of ifstream that actually allows us to read files from the system (instead of the console only). 
	//inputFile is just a name and you can change this name to whatever your heart desires
	ifstream inputFile(nameOfInputFile.c_str());

	//Checks if the loading of text file was successful or not. Always make sure the text file is in the same folder as your Source.cpp file,
	//otherwise the system won't be able to find the text file and you'll get an error. 
	if (!inputFile)
	{
		cout << "Text file could not be loaded. Please verify its name and location.\n";
		system("pause>0");
		return;
	}
	while (!inputFile.eof())
	{
		getline(inputFile, currentWord);
		cout << currentWord << "\n";
	}
}
int main()
{
	WordsPresentInGrid();
	gridcontainingwordstobesearched();
	return 0;
}

