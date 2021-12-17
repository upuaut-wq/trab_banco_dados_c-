#include "controllerHead.h"

controllerHead::controllerHead()
{
    //ctor
}

void controllerHead::open_head(){
    this->file_op.open("head.txt");
}

void controllerHead::read_head(){
      std::string line;
      if(this->file_op.is_open()){
        while(getline(this->file_op,line)){
            std::cout << line << std::endl;
            modelHead model(line);
            std::cout << "\n";
            model.print_head();
        }
    }
    this->file_op.close();
}


controllerHead::~controllerHead()
{
    //dtor
}
