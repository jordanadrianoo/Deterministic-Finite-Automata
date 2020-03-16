// Jordan Adriano
//3-16-2020
// This code will find all valid combinations of strings that start with an 'A' and end with 'T'
// The combinations will consist of {'A','C','G','T'}

# include <iostream>
# include <string>

using namespace std;

bool DFA(string test)
{
	bool result = false;
	string state = "S";

	cout << " String = " << test << endl;


	for (int i= 0; i<test.length(); i++)
	{
		cout << "Current State = " << state << endl;

		if (state == "S") 
		{
			if (test[i] == 'A')
			{
				cout << test[i] << " will take us to state 1\n" << endl;
				state = "1";
			}
			else
			{
				cout << test[i] << " will take us to state 3\n" << endl;
				state = "3";
			}
		}

		if (state == "1")
		{
			if (test[i] == 'T')
			{
				cout << test[i] << " will take us to state 2\n" << endl;
				state = 2;
			}
			else
			{
				cout << test[i] << " will take us to state 1\n" << endl;
				state ="1";
			}
		}

		if (state == "2")
		{
			if (test[i] == 'T')
			{
				cout << test[i] << " will take us to state 2\n" << endl;
				state = "2";
			}
		}



	}
	return true;
}

void all_patterns(string test)
{
	cout << "All Pattern Combinations -" << endl;
	for (int first_letter = 0; first_letter < test.length(); first_letter++)
	{
		if (test[first_letter] == 'A')
		{
			for (int second_letter = first_letter; second_letter < test.length(); second_letter++)
			{
				if (test[second_letter] == 'T')
				{
					for (int temp=first_letter; temp <= second_letter; temp++)
					{
						cout << test[temp];
					}
					cout << endl;
				}

			}
		}
	}
	cout << endl;
}

int main()
{

	all_patterns("CATTTGCAGGTG");
	DFA("ACATGAGCGAT");
	system("pause");
}
