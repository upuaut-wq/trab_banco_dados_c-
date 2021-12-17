#include "modelHead.h"

modelHead::modelHead()
{

}

void modelHead::set_head(std::string str_line){
    std::string tmp_qt;
    int i = 0;
    while(str_line[i] != '\n'){
        tmp_qt += str_line[i];
        i++;
    }
    tmp_qt += '\0';
    this->qt_t = std::stoi(tmp_qt);
    i++;

    std::string tmp_qt_fr;

    while(str_line[i] != ':' && str_line[i] != '\0'){
        tmp_qt_fr += str_line[i];
        i++;
    }
    tmp_qt_fr += '\0';
    this->qt_fr = std::stoi(tmp_qt_fr);
    i++;

    for(int j = 0; j < this->qt_fr ; j++){
        std::string tmp_fr_pos;
        while(str_line[i] != ':' && str_line[i] != '\0'){
            tmp_fr_pos += str_line[i];
            i++;
        }
        tmp_fr_pos += '\0';
        this->fr_pos[j] = std::stoi(tmp_fr_pos);
    }
}

void modelHead::print_head(){
    std::cout << this->qt_t << std::endl;
    std::cout << this->qt_fr << std::endl;
    for(int i = 0 ;  i < this->qt_fr; i++){
        std::cout << this->fr_pos[i] << std::endl;
    }
}

modelHead::~modelHead()
{
    //dtor
}
