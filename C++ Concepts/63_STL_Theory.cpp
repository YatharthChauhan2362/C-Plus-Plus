//Standard Template Library (STL)
// This program was created by Yatharth Chauhan
/*
Q. Why is this important for competitive programmers?
1. Competitive programming is a part of various environments, be it job interviews, coding contests and all, and if you’re in one of those environments, you’ll be given limited time to code your program.
2. So, suppose you want in your program, a resizable array, or sort an array or any other data structure. or search for some element in your container.
3. You will always try to code a function which will execute the above mentioned things, and end up losing a great amount of time. But here is when you will use STL.

-> An STL is a library of generic functions and classes which saves you time and energy which you would have spent constructing for your use. This helps you reuse these well tested classes and functions umpteenth number of times according to your own convenience. 

-> To put this simply, STL is used because it is not a good idea to reinvent something which is already built and can be used to innovate things further. Suppose you go to a company who builds cars, they will not ask you to start from scratch, but to start from where it is left. This is the basic idea behind using STL.

--> COMPONENTS OF STL:

-> We have three components in STL:
1. Containers
2. Algorithm
3. Iterators


Containers:
-> Container is an object which stores data. We have different containers having their own benefits. These are the implemented template classes for our use, which can be used just by including this library. You can even customise these template classes.

->Containers, objects which store data, Algorithms, set of procedures to process data, and Iterators, objects which point to some element in a container. Today, in this tutorial, we will be interested in discussing more about containers.

->Containers are themselves of three types: 
1. Sequence Containers
2. Associative Containers
3. Derived Containers


---> Sequence Containers
-> A sequence container stores that data in a linear fashion. Refer to the illustration below to understand what storing something in a linear fashion means.
-> Sequence containers include Vector, List, Dequeue etc. These are some of the most used sequence containers.

---> Associative Containers
-> An associative container is designed in such a way that enhances the accessing of some element in that container. It is very much used when the user wants to fastly reach some element. Some of these containers are, Set, Multiset, Map, Multimap etc.  They store their data in a tree-like structure.

---> Derived Containers 
-> As the name suggests, these containers are derived from either the sequence or the associative containers. They often provide you with some better methods to deal with your data. They deal with real life modelling. Some examples of derived containers are Stack, Queue, Priority Queue, etc. The following illustration give you the idea of how a stack works.


In sequence containers, we have Vectors, which has following properties:

1. Faster random access to elements in comparison to array
2. Slower insertion and deletion at some random position, except at the end.
3. Faster insertion at the end.

In Lists, we have,

1. Random accessing elements is too slow, because every element is traversed using pointers.
2. Insertion and deletion at any position is relatively faster, because they only use pointers, which can easily be manipulated.


-> In associative containers, we cannot specifically tell which operation is faster or slower, we’ll have to inspect every data structure separately


---> Algorithms:
-> Algorithms are a set of instructions which manipulates the input data to arrive at some desired result. In STL, we have already written algorithms, for example, to sort some data structure, or search some element in an array. These algorithms use template functions. 

---> Iterators:
-> Iterators are objects which refer to an element in a container. And we handle them very much similarly to a pointer. Their basic job is to connect algorithms to the container and play a vital role in manipulation of the data
*/