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

	cout << "DFA Diagram Test - " << endl;
	cout << "String = " << test << endl;
	cout << endl;


	for (int i= 0; i<test.length(); i++)
	{
		cout << "Current State = " << state << endl;


		if (state == "S") 
		{
			if (test[i] == 'A')
			{
				cout << "Letter = " << test[i] << endl;
				cout << "S --> State 1\n" << endl;
				state = "1";
			}
			else
			{
				cout << "Letter = " << test[i] << endl;
				cout << "S --> Dead State 3\n" << endl;
				state = "3";
			}
		}

		else if (state == "1")
		{
			if (test[i] == 'T')
			{
				cout << "Letter = " << test[i] << endl;
				cout << "State 1 --> State 2\n" << endl;
				state = "2";
			}
			else
			{
				cout << "Letter = " << test[i] << endl;
				cout << "State 1 --> State 1\n" << endl;
				state ="1";
			}
		}

		else if (state == "2")
		{
			if (test[i] == 'T')
			{
				cout << "Letter = " << test[i] << endl;
				cout << "State 2 --> State 2\n" << endl;
				state = "2";
			}
			else
			{
				cout << "Letter = " << test[i] << endl;
				cout << "State 2 --> State 1\n" << endl;
				state = "1";
			}
		}

		else if (state == "3")
		{
			cout << "Letter = " << test[i] << endl;
			cout << "Dead State 3 --> Dead State 3\n" << endl;
			state = "3";
		}
	}

	if (state == "2")
	{
		cout << "This is a valid string, because we are at the final state 2." << endl;
	}
	else
	{
		cout << "This is not a valid string, because we are in the non final state " << state <<"."<< endl;
	}

	return true;
}

void all_patterns(string test)
{
	cout << "\nAll Pattern Combinations -" << endl;
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
	string word;

	cout << "Input a DNA sequence please. (Note: use Uppercase letters only)" << endl;
	cin >> word;
	all_patterns(word);
	DFA(word);

}
