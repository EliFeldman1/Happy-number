#pragma once
#include"TestNumber.h"
#include"Binary.h"
#include "Dictionary.h"
#include <vector>
#include<string>
using namespace std;

class Controler
{
public:
	Controler(int Number);
	int moltiply(int Number);
	void setMassages(string _massage);
	string getMassages();

private:	
	
	string massage;
};

