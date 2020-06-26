#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
	int n;
	map<string, int> my_map;
	cout << "Please Enter the Number of Cities about to be entered"<<endl;
	cin >> n; cin.ignore();
	cout << "Enter the " << n << " cities and population alongside"<<endl;

	for (int i = 0; i < n; i++) {
		string city;
		int population;
		cin >> city >> population; cin.ignore();
		my_map.insert(pair<string, int>(city, population));
	}
	string search;
	cout << "What do you wanna search"<<endl;
	getline(cin, search);
	map<string, int>::const_iterator it = my_map.lower_bound(search);
	cout << (*it).second;

	// Write an answer using cout. DON'T FORGET THE "<< endl"
	// To debug: cerr << "Debug messages..." << endl;


	cout << "total" << endl;
}