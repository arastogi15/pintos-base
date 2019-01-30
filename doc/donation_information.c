

// donation chain

// 100  40   1
// A -> B -> C
// 100  100  100

// multiple threads can donate to a single thread
// one thread cannot donate to multiple threads


A -> B

// multiple donation

A-> B
C-> B


// TODO: we'll need to revisit this mentally

// When you try to query some data structure for priority donation, that data structure should be centered 
// around locks, not threads

