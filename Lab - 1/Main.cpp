#include <iostream>
#include <string>
#include <fstream>


using namespace std;


int main()
{
	ofstream file("text1.txt");

		while (true)
	{

		string data;
		cout << "Input something: ";
		cin >> data;
		if (data == "exit")
			break;
		file << data << endl;

	}
	file.close();

	ifstream in;
	in.open("text1.txt");
	if (!in.is_open())

	{
		cout << "Error" << endl;
		exit(1);
	}

	while (!in.eof())
	{

		string data;
		getline(in, data,'\n');
		ofstream file(data);
				
	}
	in.close();
		return(1);
}
