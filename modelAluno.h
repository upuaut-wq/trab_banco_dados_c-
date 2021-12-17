#ifndef MODELALUNO_H
#define MODELALUNO_H
#include <iostream>
#include <cstring>

class modelAluno{
    private:

    public:
        int id_aluno;
        std::string nome_aluno;
        std::string cpf;
        std::string num;
        std::string complemento;
        int id_endereco;
        int id_sexo;
        int id_email;
        int id_telefone;
        int id_tipo_ingresso;
        int free;

        modelAluno();
        void print_aluno();
        ~modelAluno();
};

#endif //MODELALUNO_H

/*
 void set_id_aluno(int id);
        void set_nome_aluno(std::string nome_aluno);
        void set_cpf(std::string cpf);
        void set_num(std::string num);
        void set_complemento(std::string complemento);
        void set_id_endereco(int id);
        void set_id_sexo(int id);
        void set_id_mail(int id);
        void set_id_telefone(int id);
        void set_id_tipo_ingresso(int id);
        void set_free(int fr);
        int get_id_aluno();
        std::string get_nome_aluno();
        std::string get_cpf();
        std::string get_num();
        std::string get_complemento();
        int get_id_endereco();
        int get_id_sexo();
        int get_id_mail();
        int get_id_telefone();
        int get_id_tipo_ingresso();
        int get_free();

*/
