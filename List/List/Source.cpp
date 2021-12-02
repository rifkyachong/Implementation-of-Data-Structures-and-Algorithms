#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	//Create a list with a given length
	const int length = 10;
	int Arr[length];
	//insert array with a random number
	for (int i = 0; i < length; i++) {
		Arr[i] = rand() % 10;
	}
	//determine length of the array
	int size = sizeof(Arr) / sizeof(*Arr);
	//change the value within array
	Arr[5] = 7;
	//pointer of beginning and end of the array
	int* endptr = std::end(Arr);
	int* beginptr = std::begin(Arr);
	//count the particular number within array
	int count = std::count(Arr, Arr + length, 8);
	count = std::count(beginptr, endptr, 8);
	count = std::count(std::begin(Arr), std::end(Arr), 8);
	//find the particular number in array
	int index3 = std::find(Arr, Arr + length, 3)-Arr;
	if (index3 == length) index3 = -1; //not found
	int* find8 = std::find(beginptr, endptr, 8);
	int index_8 = std::distance(beginptr, find8);
	if (index_8 == length) index_8 = -1;

	//initialize vector
	std::vector<int> vect = { 4,3,2,5 };
	//length of vector
	int vectlen = vect.size();
	//insert vector
	vect.push_back(7);
	vect.push_back(6);
	vect.pop_back();
	vectlen = vect.size();
	//search within vector (why not working?)
	//int find5 = std::find(vect.begin(), vect.end(), 5);
	//count number within vector
	int count5 = std::count(vect.begin(), vect.end(), 5);

	std::cin.get();
}