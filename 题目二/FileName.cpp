#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	int score;
	cout << "Please enter your score : ";
	cin >> score;
	if (score >= 9 && score <= 10)
	{
		cout << "你认为电影经典." << endl;
	}
	else if (score >= 7&& score < 9)
	{
		cout << "你认为电影非常好." << endl;
	}
	else if(score >= 5 && score < 7)
	{
		cout << "你认为电影一般." << endl;
	}

	else
	{
		cout << "你认为电影一般." << endl;
	}
	return 0;
}