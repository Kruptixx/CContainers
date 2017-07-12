/*
* Lab 7 IT-Academy
* Max @Kruptixx <zexqmap@gmail.com>
*
* Abstract class List and its' inheritors Stack and Queue
*/
#include <iostream>
#include "queue.hpp"
#include "stack.hpp"
#include "stackExtended.hpp"

//   ***MAIN***
int main() {
    StackExtended a, b;
	Queue c;
	c.push(5);
	c.push(10);
	c.push(36);
	c.push(1);
    a.push(2);
    a.push(4);
    a.push(13);
    a.push(17);
    b.push(8);
    b.push(19);
    b = a;
    std::cout << "A=" << a.sum() << std::endl;
    std::cout << a.pop() << std::endl;
    std::cout << a.pop() << std::endl;
    std::cout << a.pop() << std::endl;
    std::cout << a.pop() << std::endl;
    std::cout << "\n\nB=" << b.sum() << std::endl;
    std::cout << b.pop() << std::endl;
    std::cout << b.pop() << std::endl;
    std::cout << b.pop() << std::endl;
    std::cout << b.pop() << std::endl;
	std::cout << "\n\nC" << std::endl;
    std::cout << c.pop() << std::endl;
    std::cout << c.pop() << std::endl;
    std::cout << c.pop() << std::endl;
    std::cout << c.pop() << std::endl;
}
