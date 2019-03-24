#include "callables.h"

void Button::AssignHandler(std::function<void()> handler)
{
	OnPressHandler = handler;
}

void Button::OnPress()
{
	OnPressHandler();
}

double Multiply(double a, double b)
{
	return a * b;
}

void Callable::main()
{
	// functions for a result on a button
	Button* testButton = new Button();
	testButton->AssignHandler([]() {std::cout << "Test button pressed!" << std::endl; });
	testButton->OnPress();

	// std::bind
	std::cout << Multiply(3.0, 2.0) << std::endl;

	auto MultiplyByTwo = std::bind(Multiply, 2.0, std::placeholders::_1);
	std::cout << MultiplyByTwo(3.0);
}