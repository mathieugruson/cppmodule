#include <iostream>
#include <stack>

int main() {
  std::stack<int> myStack;
  myStack.push(1);
  myStack.push(2);
  myStack.push(3);

  std::stack<int>::iterator it;
  for (it = myStack.begin(); it != myStack.end(); it++) {
    std::cout << *it << " ";
  }

  return 0;
}
