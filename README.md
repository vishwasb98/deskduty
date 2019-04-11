# deskduty
Using this code, we can help people in assigning the duties. The person with maximim free slots will be alloted maximum duty.


Implementation

Data Structure used:

Queues : 

Queue is a linear structure which follows a particular order in which the operations are performed. The order is First In First Out (FIFO).  A good example of queue is any queue of consumers for a resource where the consumer that came first is served first.

The difference between stacks and queues is in removing. In a stack we remove the item the most recently added; in a queue, we remove the item the least recently added.

Operations on Queue:

Mainly the following four basic operations are performed on queue:

Enqueue: Adds an item to the queue. If the queue is full, then it is said to be an Overflow condition.

Dequeue: Removes an item from the queue. The items are popped in the same order in which they are pushed. If the queue is empty, then it is said to be an Underflow condition.

Front: Get the front item from queue.

Rear: Get the last item from queue.

Arrays : 

An array is collection of items stored at continuous memory locations. The idea is to store multiple items of same type together. This makes it easier to calculate the position of each element by simply adding an offset to a base value, i.e., the memory location of the first element of the array (generally denoted by the name of the array).

Using these two data structure we have created this project. The floating queue is being used here with two dimensional arrays.

The procedure to calculate is by taking the free slots of students. Once we have free slots of students, we can check which student has maximum free slot that day and assign duties to them.

We would create 2 matrix, studentlist and timesave. Studentlist matrix has the free slots of each student and creates a queue having how many free slots each student has on that particular day.The name of the queue is timefree. Timesave matrix contains the name of students having free slot at that particular time and then an array having the number of students free at a particular slot.

The studentlist matrix and timefree queue are created with user input, while others are created using studentlist matrix. The available time slots are 9, 10, 11, 2, 3, 4, 5. 

To assign duty at 9, we will check timesave[0][j] for those students who are free at that time and then check for the student with maximum free slots on that particular day.The student with maximum free slots on that particular day will be assigned the duty. Similarly all duties are assigned.

All these duties are assigned in the finalarr named matrix.Then these duties are printed.

