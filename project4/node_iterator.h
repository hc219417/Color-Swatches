/**
 *   @file: node_iterator.h
 * @author: Hannah Culver
 *   @date: March 17, 2022
 *  @brief: header file for the node iterator class
 */

#ifndef NIT
#define NIT

#include "dnode.h"

template <class T> class dlist; //forward declaration

template <class T>
class node_iterator{
    public:
        friend class dlist<T>; //friend function

        node_iterator(dnode<T>* c = NULL) {current = c;}
        T operator *()const {return current -> data();}

        bool operator == (node_iterator other)const {return current == other.current;}
        bool operator != (node_iterator other)const {return current != other.current;}

        node_iterator operator ++(); //prefix (++it)
        node_iterator operator ++(int); //postfix (it++)

        node_iterator operator --(); //prefix (--it)
        node_iterator operator --(int); //postfix (it--)

    private:
        dnode<T>* current;
};

#include "node_iterator.temp"

#endif