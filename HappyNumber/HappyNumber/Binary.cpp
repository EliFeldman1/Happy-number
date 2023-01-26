#ifndef three
#define three
#include "Binary.h"

//vector <Dictionary> binaryTree;

Binary::Binary(int _Number,int _key) {

	
}
Binary::Binary(int _Number) {


}

	bool Binary::binaryFind(int Number, vector <Dictionary>& binaryTree) {
		//this function find if the Number is alrdey in the tree
		bool flag = true;
		int key = 0;
		while (  flag ==true)
		{
			if (binaryTree[key].getValue() == Number) {
				return true;
				
			}
			if (binaryTree[key].getValue() < Number ) {
				if (binaryTree[key].getrightChild()==NULL)
				{
					return false;
				}
				key = binaryTree[key].getrightChild();
				
			}
			if (binaryTree[key].getValue() > Number) {
				if (binaryTree[key].getLeftChild() == NULL)
				{
					return false;
				}
				key = binaryTree[key].getLeftChild();
				
			}
		}
		return true;
	}

	void Binary::binaryInsert(int Number, vector < Dictionary>& binaryTree)
	{
		int Key = 0;
		bool flag = true;
		while (flag==true)
		{
			if (Number<binaryTree[Key].getValue() ) {
				if (binaryTree[Key].getLeftChild()==NULL)
				{
					binaryTree[Key].setLeftChild(binaryTree[binaryTree.size()-1].getKey());
					binaryTree[binaryTree.size()-1].setFather(binaryTree[Key].getKey());
					flag = false;
				}
				else
				{
					Key = binaryTree[Key].getLeftChild();
				}
				
			}
			if (Number > binaryTree[Key].getValue()) {
				if (binaryTree[Key].getrightChild() == NULL)
				{
					binaryTree[Key].setRightChild(binaryTree[binaryTree.size()-1].getKey());
					binaryTree[binaryTree.size()-1].setFather(binaryTree[Key].getKey());
					flag = false;
				}
				else
				{
					Key = binaryTree[Key].getrightChild();
				}

			}
			
			
		}
		
	}

	void Binary::setIsFind(bool _isFind) {
		IsFind = _isFind;
	}
	bool Binary::getIsFind() {
		return IsFind;
	}



#endif // !three	