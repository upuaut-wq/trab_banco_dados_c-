#ifndef CONTROLLERHEAD_H
#define CONTROLLERHEAD_H
#include <iostream>
#include <fstream>
#include "modelHead.h"


class controllerHead
{
    public:
        controllerHead();
        void open_head();
        void write_head();
        void read_head();
        virtual ~controllerHead();

        modelHead mh;
    protected:

    private:
        std::fstream file_op;
};

#endif // CONTROLLERHEAD_H
