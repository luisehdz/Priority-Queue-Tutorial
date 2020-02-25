Priority-Queue-Tutorial

I. OVERVIEW

Priority queues are important data structures that are useful for many different application of other Data Structures.
They are very easy to implement and it is not a very hard concept to grasp despite it being a powerful tool to add to your arsenal.

II. HOW DOES IT WORK?

A priority queue(PQ) is the same thing as a normal queue except it has a special feature to it. A PQ has the special ability to have any element inside of it "skip" the line.
A queue usually has the FIFO(First in First Out) approach but a PQ does not. PQ's add a level of priority to elements and choose to differentiate data using that approach.
This information is usually stored in a Vector to compare elements with another to determine the "largest element." How one would go about implementing a PQ is the same way you would approach a regular queue.
The STL library for queue contains all the information you need to create one. All you need is the keyword "priority_queue <datatype you want> variable name" and you'll have created a PQ.
Now all you have to do is stuff data inside your PQ and create a way to print out the information. I recommend using a while loop to check if the PQ is empty.
By default, the PQ will pop larger elements first and then smaller elements later. One solution to this is to modify the parameter of the PQ.
"priority_queue <int, vector<int>, greater<int>> variablename" is how you would set up a PQ that pops the smallest elements first and the then later the larger elements.
In the code sample provided you can see how all of this is brought together to form a PQ. As for time complexity, a PQ is not a very effective method to use in large quantities of data.
However, with small quantities of data this is a good data structure to implement and it is easy to use as well!

III. HOW IS THIS DATA STRUCTURE USEFUL?

Priority Queue's are used alongside of many other data structures and work in tangent with them. A very notable example is in the A* search algorithm.
A PQ can hold data that the A* search has not gone through yet and can return the smallest heurestic function for the search to go into next.
Another notable example is in heaps. Heaps are an implementation of PQ's. Operating Systems can utilize PQ in interrupts and check what job has highest priority to complete.
Judging from these examples, I would say PQ is a very powerful tool to have available to a programmer.


IV. FURTHER READING

These are a couple of articles that are helpful and further explain this topic.

https://www.fluentcpp.com/2018/03/20/heaps-and-priority-queues-in-c-part-3-queues-and-priority-queues/
https://www.geeksforgeeks.org/priority-queue-in-cpp-stl/
https://en.wikipedia.org/wiki/Priority_queue
https://www.geeksforgeeks.org/applications-priority-queue/