
#include <Meow.h>

class Sandbox: public Meow::Application
{
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Meow::Application* Meow::CreatApplication() {
	return new Sandbox();
}