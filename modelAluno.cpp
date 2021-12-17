#include "modelAluno.h"

modelAluno::modelAluno(){

}



/*
void modelAluno::set_id_aluno(int id){

}

void modelAluno::set_nome_aluno(std::string nome_aluno){
    this->nome_aluno = nome_aluno;
}

void modelAluno::set_cpf(std::string cpf){
    this->cpf = cpf;
}

void modelAluno::set_num(std::string num){
    this->num = num;
}

void modelAluno::set_complemento(std::string complemento){
    this->complemento = complemento;
}
void modelAluno::set_id_endereco(int id){
    this->id_endereco = id;
}

void modelAluno::set_id_sexo(int id){
    this->id_sexo = id;
}

void modelAluno::set_id_mail(int id){
    this->id_email = id;
}

void modelAluno::set_id_telefone(int id){
    this->id_telefone = id;
}
void modelAluno::set_id_tipo_ingresso(int id){
    this->id_tipo_ingresso = id;
}

void modelAluno::set_free(int fr){
    this->free = fr;
}


int modelAluno::get_id_aluno(){
    return this->id_aluno;
}

std::string modelAluno::get_nome_aluno(){
    return this->nome_aluno;
}

std::string modelAluno::get_cpf(){
    return this->cpf;
}

std::string modelAluno::get_num(){
    return this->num;
}

std::string modelAluno::get_complemento(){
    return this->complemento;
}

int modelAluno::get_id_endereco(){
    return this->id_endereco;
}

int modelAluno::get_id_sexo(){
    return this->id_sexo;
}

int modelAluno::get_id_mail(){
    return this->id_email;
}

int modelAluno::get_id_telefone(){
    return this->id_telefone;
}

int modelAluno::get_id_tipo_ingresso(){
    return this->id_tipo_ingresso;
}

int modelAluno::get_free(){
    return this->free;
}
*/

void modelAluno::print_aluno(){
    std::cout << this->id_aluno << " " <<
    this->nome_aluno << " " <<
    this->cpf << " " <<
    this->num << " " <<
    this->complemento << " " <<
    this->id_endereco << " " <<
    this->id_sexo << " " <<
    this->id_email << " " <<
    this->id_telefone << " " <<
    this->id_tipo_ingresso << " " <<
    this->free << " " << std::endl;


}



modelAluno::~modelAluno(){
    //END
}
