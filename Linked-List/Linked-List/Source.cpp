#include <iostream> 

struct node {
	int val;
	int* nextptr;
	int next() {
		return *nextptr;
	}
};

struct coord {
	int x;
	int y;
};

int main() {
	//init head
	node head;
	head.val = 3;
	//init node1
	node node1;
	node1.val = 6;
	//link node1
	head.nextptr = &node1.val;
	
	//test
	std::cout << head.val << std::endl;
	std::cout << head.nextptr << std::endl;
	std::cout << head.next() << std::endl;
	//node nya kok gak membentuk block of memory??
	//edit:: ternyata membentuk, karena pointer itu 8-byte dan int itu 4-byte. jadinya block yang terbentuk adalah 2*8=16 byte

	//init koor1
	coord koor1;
	koor1.x = 4;
	koor1.y = 3;

	std::cout << sizeof(koor1);
	std::cout << sizeof(head);
	std::cin.get();
}