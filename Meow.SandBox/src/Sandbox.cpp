
#include <Meow.h>
#include <iostream>

class Sandbox: public Meow::Application
{
public:
	Sandbox() {

	}

	~Sandbox() {

	}

	void Run() override {
		std::cout << "SandBox Run" << std::endl;
		while (1)
		{

		}
	}
};

Meow::Application* Meow::CreatApplication() 
{
	return new Sandbox();
}