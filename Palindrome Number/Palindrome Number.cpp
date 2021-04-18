//This program evaluates a five-digit integer and determines whether it is a palindrome number

#include <iostream>
using namespace std;

int main()
{
    //num = input
    //rev = reverse
    //x = unput duplicate for manipulating
    int num, rev=0, x;

    cout << "This program evaluates a five-digit integer and determines whether it is a palindrome number\n\n";
    cout << "Enter a five-digit integer: ";

    cin >> num;
    x = num;

    //Loop repeats until num is reversed and stores reverse in rev
    while (x>0)
    {
        //Takes the last digit of rev and moves it to the tens place
        //Then, takes last digit of num and places it in the ones place of rev
        rev = rev * 10 + x % 10;
        //Removes the last digit of num
        x /= 10;
    }

    if (num==rev)
    {
    cout << "\n" << num << " IS a palindrome\n";
    }
    else
    {
    cout << "\n" << num << " is NOT a palindrome\n";
    }
}