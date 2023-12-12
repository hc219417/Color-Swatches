/**
 *   @file: dlist.h
 * @author: Hannah Culver
 *   @date: March 17, 2022
 *  @brief: header file for the dlist class
 */

#ifndef DLIST
#define DLIST

#include "dnode.h"
#include "node_iterator.h"

template <class T>
class dlist{
    public:
        typedef node_iterator<T> iterator; //typedef

        dlist(){head = tail = NULL;}

        //the big 3

        ~dlist();
        dlist(const dlist& other);
        dlist& operator = (const dlist& other);

        void front_insert(const T& item);
        void rear_insert(const T& item);
        void front_remove();
        void rear_remove();

        iterator begin()const {return iterator(head);}
        iterator end()const {return iterator();} //NULL
        iterator r_begin() {return iterator(tail);}
        iterator r_end() {return iterator();} //NULL

        void insert_before(iterator it, const T& item);
        void insert_after(iterator it, const T& item);
        void remove(iterator it);
        
        int size();
        void show();
        void reverse_show();

    private:
        dnode<T>* head;
        dnode<T>* tail;
};

#include "dlist.temp"

#endif