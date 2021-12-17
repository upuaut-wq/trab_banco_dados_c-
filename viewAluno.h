#ifndef VIEWALUNO_H
#define VIEWALUNO_H
#include <iostream>
#include "modelAluno.h"
#include "controllerAluno.h"


class viewAluno
{
    public:
        viewAluno();
        modelAluno insert_aluno();
        std::string busca_aluno();
        void delete_aluno();
        void menu();
        virtual ~viewAluno();

    protected:

    private:
};

#endif // VIEWALUNO_H
