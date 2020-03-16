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
	cout << " Current State = S\n" << endl;


	for (int i= 0; i<test.length(); i++)
	{
		if (state == "S")
		{
			if (test[i] == 'A')
			{
				state = "1";
			}
			else
			{
				state = "3";
			}
		}
	}
	return true;
}

void all_patterns(string test)
{
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
}

int main()
{

	DFA("CATTTGCAGGTG");
	system("pause");
}