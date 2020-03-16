// Jordan Adriano


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
				stat

			}
		}
	}
}

int main()
{

	DFA("CATTTGCAGGTG");
	system("pause");
}
