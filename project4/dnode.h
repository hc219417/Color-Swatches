/**
 *   @file: dnode.h
 * @author: Hannah Culver
 *   @date: March 17, 2022
 *  @brief: header file for the dnode class
 */

#ifndef DNODE
#define DNODE

template <class T>
class dnode{
    public:
        dnode(T d = T(), dnode* p = NULL, dnode* n = NULL);

        T data()const {return data_field;}
        dnode* next()const {return next_field;}
        dnode* prev()const {return prev_field;}

        void set_data(T data) {data_field = data;}
        void set_next(dnode* n) {next_field = n;}
        void set_prev(dnode* p) {prev_field = p;}

    private:
        T data_field;
        dnode* next_field;
        dnode* prev_field;
};

#include "dnode.temp"

#endif