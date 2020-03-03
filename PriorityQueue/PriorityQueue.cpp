#include <iostream>
#include <queue>

using namespace std;

//Here we initialize our function declarations
void showData(priority_queue <int> pq);
void showData(priority_queue <int, vector<int>, greater<int>> gq);

int main()
{
	//priority_queue is the syntax we use to create a Priority Queue. 
	//Think of it similar to a Vector list. We can specifify if we want it 
	//to print it in descending(min to max) or asscending(max to min) order 
	//by giving the priority queue variable different parameters.
	priority_queue <int> descendingPQ;
	priority_queue <int, vector<int>, greater<int>> ascendingPQ;

	//This is just pushing numbers into the queue list
	//Change this variable to descendingPQ if you want to pop them in descending order.
	ascendingPQ.push(4);
	ascendingPQ.push(10);
	ascendingPQ.push(3);
	ascendingPQ.push(32);
	ascendingPQ.push(2);

	//This is the function we are using to show the data inside the list
	showData(ascendingPQ);

	return 0;
}

void showData(priority_queue <int> pq)
{
	//While the priority queue is not empty, we are going to continuously pop items out of the queue and print them.
	while (!pq.empty())
	{
		cout << " " << pq.top();
		pq.pop();
	}
	cout << '\n';
}

void showData(priority_queue <int, vector<int>, greater<int>> pq)
{
	//Same logic as in the previous function except this time we will pop them in ascending order.
	while (!pq.empty())
	{
		cout << " " << pq.top();
		pq.pop();
	}
	cout << '\n';
}