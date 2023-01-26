#ifndef four
#define four

#include "Controler.h"


	Controler:: Controler(int Number) {
		// this constructor get a number and create a binary tree with the number
		TestNumber	Number1;
		Binary Binary1(1);
		bool flag = Number1.NumberIsEmpty1(Number);
		if (flag==false)
		{
			setMassages("the number is empty, please enter a number");
			return;
		}
		Dictionary dictionary(Number);
		//Dictionary.setKey(0);
		vector<Dictionary> DictionaryVector;
		DictionaryVector.push_back(dictionary);

		int sum = Number;
		while (sum!=1)
		{
			 sum = moltiply(sum);
			Dictionary dictionary(sum, DictionaryVector.size());
			//Binary1().setIsFind(Binary1().binaryFind(sum, DictionaryVector));
			
			if (Binary1.binaryFind(sum, DictionaryVector)==false)
			{
				DictionaryVector.push_back(dictionary);
				Binary1.binaryInsert(sum, DictionaryVector);
			}
			
			else
			{
				setMassages("this number is not happy");
				return;
			}
			//bool find2 = Binary1().getIsFind();
			//Binary1().IsFind = false;
			//Binary1.IsFind = Binary1.binaryFind(sum, DictionaryVector);
			
			//binary1().binaryinsert(sum, dictionaryvector);

		}
		setMassages("this number is Happy ");

	}
	int Controler::moltiply(int Number)
		// this function get a number and return the sum of the square of the digits
	{
		int sum = 0;
		int temp = 0;
		Number = abs(Number);
		while (Number>0)
		{
			temp = Number % 10;
			sum += temp * temp;
			Number = Number / 10;
		}
		return sum;

	}
	void Controler:: setMassages(string _massage) {
		massage = _massage;
	}
	string Controler:: getMassages() {
		return massage; {
		}
	}



	//string massage;

#endif // !four



