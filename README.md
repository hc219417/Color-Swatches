# Color-Swatches

This list is a *universal list*, of which the iterator access is done as an external iterator. This list is also implemented as a *template*, allowing it to hold any type of data.

Our list is a *doubly linked* list. In a doubly linked list, each node has a pointer pointing to the next node and another one pointing to the previous node. A `Dnode` template class has been made for nodes appropriate for use in a doubly linked list. Functions to access next, previous, and data as well as functions to `set_next`, `set_previous` and `set_data` are included. A constructor is provided that uses default arguments to set the pointers to `NULL`.

Using this node class, a template list class has been developed, including pointers for head and tail along with functions for `front_insert`, `rear_insert`, `front_remove`, and `rear_remove`.

This list holds dynamic memory (although the node class does not), meaning that the default forms of the “Big 3” do not work correctly so a Big 3 has been defined specifically for this class. The destructor is much the same as one for a singly linked list, but the other two are different because in copying the list all of the pointers (head and tail, next and previous) must be mantained.

The last thing developed in this process is a *bidirectional, external iterator*. An additional class is made just for this. The list class has been altered to include `begin`, `end`, `r_begin`, and `r_end` functions, and finally `insert_before` and `insert_after` functions have been added that each take an iterator and an item to be added, and a remove function that takes an iterator as its argument.

Colors on a computer are frequently represented as a hexadecimal number, such as cc0099. Hexadecimal numbers are base 16 numbers and consist of the digits 0 – f. This number is actually three numbers, with the first two digits representing the intensity of red, the second two the amount of green and the third pair blue. There are 256 possible values for each color (a total of 16,777,216 distinct colors can be represented in this way with 000000 being black and ffffff being white).

A small class to store color swatches is provided, much like something used in a paint store. Each “swatch” consists of a hexadecimal number representing the color, and two decimal numbers representing the dimensions of the swatch in millimeters. A data file listing a whole collection of these swatches has been provided too, called `swatches.txt`. There are also a couple of executables that convert these numbers into viewable html files, as well as the application for the program, **main2.cc** (this part will compile with `g++ -g swatch.cc main2.cc`).

This application reads swatch data from the data file and places the *predominantly green* colors *at the start of the list*, the *predominantly red* colors *at the back of the list*, and the *predominantly blue* colors *at the spot immediately following the centermost spot in the list*. It then:

- Makes a copy of the list using either the copy constructor or the overloaded assignment operator.
- Removes the front, back and centermost swatch *from the copy*.
- Outputs the original list frontwards.
- Outputs the copy frontwards.
- Outputs the original list backwards.
- Destroys the original list by alternating between removal of the first item and the last item, outputting each item as it is removed.
- Outputs the copy backwards.

Notice that there is no user interaction in this application. It simply runs the test and stops, outputting the results to the screen, one “swatch” per line with two or more blank lines between each of the outputs. Although it is not required you can see the colors by doing the following:

- Redirect the output of your program to a file: `a.out > result`
- Run either: `p1p2_mkhtml result` OR `labs_mkhtml result` depending on what machine you’re on. If you are working on the lab at home, you can compile the makinghtml program provided with the lab (`g++ makinghtml.cc swatches.cc -o makinghtml`) and then running: `./makinghtml result`
- This will create a .html file which you can transfer to your local machine via winscp or something similar, which you can then open by double-clicking
