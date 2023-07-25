#include "../lib/MutantStack.hpp"

int main( void ){

	{
		std::cout << RED "---------------- Mandatory part ----------------" END << std::endl;
		MutantStack<int>	mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);

		mstack.push(3);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite){
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}

	{
		std::cout << RED "---------------- iterator example ----------------" END << std::endl;

		MutantStack<int>	Stack;

		Stack.push(10);
		Stack.push(20);
		Stack.push(30);

		MutantStack<int>::iterator it = Stack.begin();
		MutantStack<int>::iterator ite = Stack.end();

		std::cout << "Stack elements (bottom to top): ";
		while (it != ite){
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
	}

	{
		std::cout << RED "---------------- reverse_iterator example ----------------" END << std::endl;
		MutantStack<int> reStack;

		reStack.push(10);
		reStack.push(20);
		reStack.push(30);

		MutantStack<int>::reverse_iterator it = reStack.rbegin();
		MutantStack<int>::reverse_iterator ite = reStack.rend();

		std::cout << "Stack elements (top to bottom): ";
		while (it != ite) {
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
	}

	{
		std::cout << RED "---------------- stack empty method ----------------" END << std::endl;

		MutantStack<int> emptyStack;

		if (emptyStack.empty())
			std::cout << "Stack is empty" << std::endl;

		emptyStack.push(1);

		if (!emptyStack.empty())
			std::cout << "Stack is not empty" << std::endl;
	}

	{
		std::cout << RED "---------------- stack find size method ----------------" END << std::endl;

		MutantStack<int> sizeStack;

		sizeStack.push(5);

		std::cout << "Size: " << sizeStack.size() << std::endl;

		sizeStack.push(10);

		std::cout << "Size: " << sizeStack.size() << std::endl;
	}

	{
		std::cout << RED "---------------- stack top method ----------------" END << std::endl;

		MutantStack<int> topStack;

		topStack.push(10);
		topStack.push(20);

		std::cout << "Top element: " << topStack.top() << std::endl;

		topStack.push(30);

		std::cout << "Top element: " << topStack.top() << std::endl;

	}

	{
		std::cout << RED "---------------- stack pop method ----------------" END << std::endl;

		MutantStack<int> popStack;

		popStack.push(10);
		popStack.push(20);
		popStack.push(30);

		std::cout << "Top element: " << popStack.top() << std::endl;
		std::cout << "Size: " << popStack.size() << std::endl;

		popStack.pop();

		std::cout << "Top element: " << popStack.top() << std::endl;
		std::cout << "Size: " << popStack.size() << std::endl;

		popStack.pop();

		std::cout << "Top element: " << popStack.top() << std::endl;
		std::cout << "Size: " << popStack.size() << std::endl;

		popStack.pop();
		// std::cout << "Top element: " << popStack.top() << std::endl; // argüman kalmayınca bunu kullanırsak seg fault yiyoruz.
		std::cout << "Size: " << popStack.size() << std::endl;
	}

	{
		std::cout << RED "---------------- stack swap method ----------------" END << std::endl;

		MutantStack<int>	swapStack;

		swapStack.push(5);
		swapStack.push(10);
		swapStack.push(15);

		std::cout << "First stack size: " << swapStack.size() << std::endl;
		std::cout << "First stack top element: " << swapStack.top() << std::endl;

		MutantStack<int>	tmpStack;

		tmpStack.push(3);

		tmpStack.swap(swapStack);

		tmpStack.push(20);

		std::cout << "Second stack size: " << tmpStack.size() << std::endl;
		std::cout << "Second stack top element: " << tmpStack.top() << std::endl;

		std::cout << "First stack size: " << swapStack.size() << std::endl;
		std::cout << "First stack top element: " << swapStack.top() << std::endl;

	}

	{
		std::cout << RED "---------------- stack copy method ----------------" END << std::endl;

		MutantStack<int>	copyStack;

		copyStack.push(3);
		copyStack.push(6);
		copyStack.push(9);
		copyStack.push(12);

		std::cout << "First stack size: " << copyStack.size() << std::endl;
		std::cout << "First stack top element: " << copyStack.top() << std::endl;
		std::cout << "First stack bottom element: " << *copyStack.begin() << std::endl;

		MutantStack<int>	tmpStack(copyStack);

		std::cout << "Second stack size: " << tmpStack.size() << std::endl;
		std::cout << "Second stack top element: " << tmpStack.top() << std::endl;
		std::cout << "Second stack bottom element: " << *tmpStack.begin() << std::endl;

		tmpStack.pop();

		std::cout << "First stack size: " << copyStack.size() << std::endl;
		std::cout << "First stack top element: " << copyStack.top() << std::endl;

		std::cout << "Second stack size: " << tmpStack.size() << std::endl;
		std::cout << "Second stack top element: " << tmpStack.top() << std::endl;
	}

	{
		std::cout << RED "---------------- stack class difference type (double) ----------------" END << std::endl;

		MutantStack<double>	dStack;

		dStack.push(3.33);
		dStack.push(4.44);
		dStack.push(5);


		MutantStack<double>::iterator it = dStack.begin();
		MutantStack<double>::iterator ite = dStack.end();

		std::cout << "Stack elements (bottom to top): ";
		while (it != ite){
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
	}

	{
		std::cout << RED "---------------- stack class difference type (string) ----------------" END << std::endl;

		MutantStack<std::string>	sStack;

		sStack.push("Alice");
		sStack.push("John");
		sStack.push("Micheal");

		MutantStack<std::string>::iterator it = sStack.begin();
		MutantStack<std::string>::iterator ite = sStack.end();

		std::cout << "Stack elements (bottom to top): ";
		while (it != ite){
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
	}
	return (0);
}
