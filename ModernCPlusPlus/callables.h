#ifndef CALLABLES_H
#define CALLABLES_H

#include <functional>
#include <iostream>

using namespace std;

struct Callable
{
	void main();
};

class Button
{
private:
	std::function<void()> OnPressHandler;

public:
	void AssignHandler(std::function<void()> handler);
	void OnPress();
};

#endif // !CALLABLES_H