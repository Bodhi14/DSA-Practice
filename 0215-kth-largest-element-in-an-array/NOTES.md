The default heap in cpp is a Max Heap, so to implement a min Heap, we need to pass comparators to the heap ds, like:-
​
priority_queue<int, vector<int>, greater<int>> q;
​