//Alfred Albizures
//7/20/16
//computer security 
//summer 2016

#include <iostream>
#include <string>
#include <fstream>
#include<cmath>
using namespace std;

int main()
{
	const int num = 26;
	string input;
	int shifts;
	int counter = 0;

	const int arr = 26;
	char alfab[arr] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	cout << "Please input the text" << endl;
	getline(cin, input);
	cout << "Please enter the Key 1-26 " << endl;
	cin >> shifts;
	cout << " " << endl;

	int TempNumOne = input.size();
	char Filename[1000];

	for (int index = 0; index < TempNumOne; index++)
	{
		Filename[index] = input[index];
	}

	int WOW[1000];
	
	for (int index = 0; index < TempNumOne; index++)
	{
		for (int index2 = 0; index2 < 26; index2++)
		{
			if (Filename[index] == alfab[index2])
			{	
				WOW[index] = index2-shifts;
				counter++;
			}
		}
	}
	
	for (int index = 0; index < counter; index++)
	{

		if (WOW[index] < 0)
		{
			WOW[index]=WOW[index] + 26;

		}

		
	}
    
	for (int index = 0; index < counter; index++)
	{
		for (int index2 = 0; index2 < 25; index2++)
		{
			if (WOW[index] == index2)
			{
				cout<<alfab[index2];
				
			}
		}
	}

	cout << " " << endl;

	system("pause");



	return 0;
}