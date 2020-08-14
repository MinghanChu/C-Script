#include <iostream>

void Log(const char* message);
int main(int argc, char *argv[])
{
	std::cout << "Hello world!" << std::endl;
	
	Log("Hello World from minghan");
   
    std::cin.get();
}