#include<iostream>

using namespace std;

int main()
{
    cout << "\n To Find the factorial number:\n";
    cout << "\n-------------------------------\n";

    int number,i,fact=1;

    cout << "Presss the positive number:";
    cin  >> number;

    for(int i=1; i<=number; i++)
    {
        fact = fact*i;
    }

    cout << "Final factorial number are: << ["<<number<<"]" << fact << "\n";

    return 0;
}
