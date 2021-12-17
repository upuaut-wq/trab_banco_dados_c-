#ifndef CONTROLLERALUNO_H
#define CONTROLLERALUNO_H
#include <iostream>
#include <fstream>
#include "modelAluno.h"
#include "modelHead.h"

using namespace std;
class controllerAluno
{
public:
    modelHead mh;

    controllerAluno();
    void insert_aluno(modelAluno model);
    void write_head();
    modelAluno convert_string_model(std::string str_line);
    std::string busca_aluno(std::string cpf);
    std::string convert_model_string(modelAluno md);
    void read_head();
    virtual ~controllerAluno();

protected:

private:
    std::fstream file_aluno;
    std::fstream file_head;

};

#endif // CONTROLLERALUNO_H
