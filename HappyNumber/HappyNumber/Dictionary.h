#pragma once
#include<vector>
class Dictionary
{
public:
	
	Dictionary (int value_i);
	Dictionary(int value_i, int key_i);
	void setKey(int key_i);
	void setValue(int value_i);
	
	void setLeftChild(int key_pre);
	void setRightChild(int key_pre);
	void setFather(int key_pre);
	int getLeftChild();
	int getrightChild();
	int getFather();
	
	int getValue();	
	int getKey();
private:
	int key =NULL;
	int value=NULL;
	int leftChild = NULL;
	int rightChild = NULL;
	int father = NULL;
};

