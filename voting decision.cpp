#include<iostream>
using namespace std;

int main() {

    int age;
    cout << "Enter age of a user:";
    cin>>age;

    if (age >= 18 && age <=24) 
	{
        cout << "You are eligible for voting\n";
        cout << " choose a right person ";
    } 
    else if (age>=25)
    {
    	cout << " you are eligible for vote\n";
    	cout << " you can also stand in election";
	}
    
	else 
	{
        cout << "You are not eligible for voting\n";
        cout << "you have to wait "<<18-age<<" years to vote";
    }

    return 0;
}
