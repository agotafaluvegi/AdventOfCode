#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;

std::ifstream infile("Day1.txt");

int n[1030];
int i = 0;
int s = 0;

int main()
{
	while (infile >> n[i])
	{
		s = s + n[i];
		i++;
	}

	cout << s;
}