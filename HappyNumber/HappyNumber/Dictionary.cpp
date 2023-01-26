#ifndef twe
#define twe
using namespace std;
#include "Dictionary.h"


	Dictionary::Dictionary(int value_i, int key_i) {

		setValue(value_i);
		setKey(key_i);
	}
	Dictionary::Dictionary(int value_i) {
		// this constrokter is for the first number
		setValue(value_i);
		setKey(0);
		setFather(-1);
	}
	

	void Dictionary::setKey(int key_i) {
		key = key_i;
	}
	void Dictionary::setValue(int value_i) {
		value = value_i;
	}
	void Dictionary::setLeftChild(int key_pre) {
		leftChild = key_pre;
	}	
	void Dictionary::setRightChild(int key_pre) {
		rightChild = key_pre;
	}	
	void Dictionary::setFather(int key_pre) {
		father = key_pre;
	}	
	int Dictionary::getValue() {
		return value;
	}
	int Dictionary::getKey() {
		return key;
	}
	int Dictionary::getLeftChild() {
		return leftChild;
	}
	int Dictionary::getrightChild() {
		return rightChild;
	}
	int Dictionary::getFather() {
		return father;
	}
	
	/*int key;
	int value;
	int leftChild;
	int rightChild;
	int father;*/

#endif	// !twe