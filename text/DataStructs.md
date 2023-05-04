# Data Structures:

* **Static Array:** Most basic data structure, that is just a collection of elements. A static array has a fixed size that's allocated (decided) during initlization.
**Dynamic Array:** The same as a static array except its length is dynamic, meaning it can change, this is represented as a \<vector\> in C++.

* **Stack:** Last In First Out (LIFO) data structure, can be thought of as a stack of cards or pancakes. It has the 3 methods, push(), to push an element to the top of the stack, pop() to remove the element from the top of the stack, and top() which retrieves the element at the top of the stack without popping it off.

* **Queue:** First In First Out (FIFO) data structure, can be thought of as a line, or conveyor belt. It supports 3 methods, push(), push an element to the back of the queue, pop() removing an element from the front of the queue, and front() which retrieves the element at the front of the queue without removing it.

* **Deque:** A double ended queue that combines the qualities of both a stack and queue. Supporting insertion, deletion and retrieval from both the front and the back of the deque. It supports 6 methods, push_front(), pushing an element to the front (first), push_back(), pushing an element to the back (last), pop_front(), removing an element from the front, pop_back(), removing an element from the back. And for retrieval, front() will retrive the first element, and back() will retrieve the last.

* **Priority Queue:** A special queue that sorts elements automatically based on a predetermined comparator function. In C++ this will automatically sort elements from highest to lowest. In other words, it will place the highest element first at the front giving it "priority". It supports three methods that work the same as described in other data structures. pop(), push(), top(). The difference being that these methods operate only on the highest element.

* **Unordered Set:** A collection of elements or objects that has no duplicates, but in no specific order. This data structure works by hashing (asigning a hash value to every element for quick operations). It supports 3 methods, insert(), inserts an element if the element isn't already present, erase(), deletes an element if it exists, count(), returns 1 if the element exists, and returns 0 if it doesn't exist.

* **Sorted Set/Ordered Set:** A collection of elements or objects that has no duplicates, but in a specific order. It supports all methods from an unsorted set, but has 4 additional methods aswell. begin(), returns a iterator to the lowest element, end(), return an iterator to the highest element. lower_bound(), returns an iterator to the lowest element greater than or equal to some value. upperbound(), returns an iterator to the lowest element strictly greater than some value.

* **Unordered Map**: A set of key value pairs, where each key is mapped to a value. All keys must be unique but values can be repeated. Unordered Maps have key value pairs that aren't in a specific order as the name implies. It supports Map\[Key\] where the key will retrive the value of that key. count(), a method that returns the number of times a key is present inside of a map, which will always either be 1 or 0, by extension it also checks wether or not a key exists. erase(), removes the key value pair of the specified key.

* **Ordered Map:** Ordered Maps have key value pairs that *are* in a specific order as the name implies. An ordered map supports all methods from an unordered map, but has 2 additional methods aswell. lower_bound(), returns an iterator pointing to the lowest key value pair greater than or equal to the the specified key. upper_bound() returns an iterator strictly greater than the specified key.

* **Multimap:** A map that allows for duplicate keys. This is most commonly used as a tree data structure. Retrievinh values must be done by using a find() method, which returns the first valuje associated with a key, or you can retrieve multiple values by means of an iterator.

* **Multiset:** A sorted set, that allows for duplicate elements. It supports all methods for a set, but the count() method returns the number of all instances of an element that exist in the set.