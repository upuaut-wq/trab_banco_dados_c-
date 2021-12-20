#include "viewAluno.h"

viewAluno::viewAluno()
{
    //ctor
}


std::string viewAluno::busca_aluno(){
    system("clear");
    std::string tmp;
    std::cin.ignore();
    std::cout << "Busca Aluno" << std::endl;
    modelAluno md;
    std::cout << "cpf:";
    getline(std::cin,tmp);
    return tmp;

}


modelAluno viewAluno::insert_aluno(){
    system("clear");
    std::cin.ignore();
    std::cout << "Iserir Aluno" << std::endl;
    modelAluno md;
    std::cout << "nome_aluno:";
    getline(std::cin,md.nome_aluno);

    std::cout << "cpf:";
    getline(std::cin,md.cpf);

    std::cout << "num:";
    getline(std::cin,md.num);

    std::cout << "complemento:";
    getline(std::cin,md.complemento);

    std::cout << "id_endereco:";
    std::cin >> md.id_endereco;

    std::cout << "id_sexo:";
    std::cin >> md.id_sexo;

    std::cout << "id_email:";
    std::cin >> md.id_email;

    std::cout << "id_telefone:";
    std::cin >> md.id_telefone;

    std::cout << "id_tipo_ingresso:";
    std::cin >> md.id_tipo_ingresso;

    md.free = 1;
    return md;

}

std::string viewAluno::delete_aluno(){
    std::cout << "Delete Aluno" << std::endl;
      system("clear");
    std::string tmp;
    std::cin.ignore();
    std::cout << "Deleta aluno:" << std::endl;
    std::cout << "cpf:";
    getline(std::cin,tmp);


    return tmp;

}


void viewAluno::menu(){
    system("clear");
    bool op = true;
    int menu_select = -1;
    while(op != false){
        system("clear");
        std::cout << "Menu" << std::endl;
        std::cout << " 1-> Inserir Aluno" << std::endl;
        std::cout << " 2-> Buscar Aluno" << std::endl;
        std::cout << " 3-> Deletar Aluno" << std::endl;
        std::cout << " 4-> Sair" << std::endl;
        std::cout << " Escolher:" << std::endl;
        std::cin >> menu_select;

        if(menu_select == 1){
            modelAluno md = insert_aluno();
            //Executa insert
            controllerAluno cont_aluno;
            cont_aluno.insert_aluno(md);

        }


        if(menu_select == 2){
            //Executa Busca
            std::string str_b = busca_aluno();
            controllerAluno cont_aluno;
            std::string ret = "";
            ret += cont_aluno.busca_aluno(str_b);
            system("clear");
            if(ret.length() > 0){
                std::cout << "Aluno:" << cont_aluno.busca_aluno(str_b) << std::endl;
            }else{
                std::cout << "Aluno não encontrado..." << std::endl;
            }
            std::cout << "Enter para continuar..." << std::endl;
            std::cin.ignore();
            std::cin;

        }


        if(menu_select == 3){
            //Deleta
            std::string str_b= delete_aluno();
            controllerAluno cont_aluno;
            std::string ret = cont_aluno.deleta_aluno(str_b);
            system("clear");
            if(ret.length() > 1){
                    std::cout << "Aluno:" << ret << std::endl;
                    std::cout << "Aluno excluido com sucesso..." << std::endl;
            }else{
                    std::cout << "Aluno nao encontrado..." << std::endl;
            }
            std::cout << "Enter para continuar..." << std::endl;
            std::cin.ignore();
            std::cin;
        }


        if(menu_select == 4){
            op = false;
        }
    }
}


viewAluno::~viewAluno()
{
    //dtor
}
