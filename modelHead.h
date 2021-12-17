#ifndef MODELHEAD_H
#define MODELHEAD_H
#include <iostream>
#include <fstream>

class modelHead
{
    public:
        modelHead();
        void set_head(std::string str_line);
        void print_head();
        ~modelHead();

        int qt_t;
        int qt_fr;
        int fr_pos[20];
    protected:

    private:

};

#endif // MODELHEAD_H
