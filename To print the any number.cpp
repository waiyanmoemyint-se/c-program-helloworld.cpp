#include<iostream>

using namespace std;

int main()
{
    cout << "\nTo print the any number\n::";
    cout << "\n_____________________\n";

    int i, number, table;

    cout << "TO press the positive number:";
    cin  >> number;

    cout << "Multipilication table program given below:";

    for(int i=0; i<=10; i++)
    {
        table = i*number;

        cout << "\t" << number << "*" << i << "=" << table << "\n\n";

    }
    return 0;
}
