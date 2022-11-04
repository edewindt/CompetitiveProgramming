# Data Structures:

* Static Array: Most basic data structure, that is just a collection of elements. A static array has a fixed size that's allocated (decided) during initlization.
Dynamic Array: The same as a static array except its length is dynamic, meaning it can change, this is represented as a <vector> in C++.

* Stack: Last In First Out (LIFO) data structure, can be thought of as a stack of cards or pancakes. It has the 3 methods, push(), to push an element to the top of the stack, pop() to remove the element from the top of the stack, and top() which retrieves the element at the top of the stack without popping it off.

* Queue: First In First Out (FIFO) data structure, can be thought of as a line, or conveyor belt. It supports 3 methods, push(), push an element to the back of the queue, pop() removing an element from the front of the queue, and front() which retrieves the element at the front of the queue without removing it.

* Deque: A double ended queue that combines the qualities of both a stack and queue. Supporting insertion, deletion and retrieval from both the front and the back of the deque. It supports 6 methods, push_front(), pushing an element to the front (first), push_back(), pushing an element to the back (last), pop_front(), removing an element from the front, pop_back(), removing an element from the back. And for retrieval, front() will retrive the first element, and back() will retrieve the last.