#pragma once
#include"Dictionary.h"
#include <vector>
using namespace std;
class Binary
{
public:
	//vector <Dictionary> binaryTree;
	Binary(int Number, int key);
	Binary(int _Number);
	bool binaryFind(int Number, vector <Dictionary>& binaryTree);
	
	void binaryInsert(int Number, vector < Dictionary> & binaryTree);
	void setIsFind(bool _isFind);
	bool getIsFind();
	
private:
	bool IsFind;
	
};

