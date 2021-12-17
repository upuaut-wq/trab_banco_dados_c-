#include "controllerAluno.h"

controllerAluno::controllerAluno()
{

}


void controllerAluno::insert_aluno(modelAluno model){
    this->read_head();
    if(this->mh.qt_fr > 0){
        //Inserir na primeira posição livre
        this->file_aluno.open("aluno.txt",std::ios::in);
        std::string buffer = "";
        int pos_free = this->mh.fr_pos[0];
        std::string line;
        int i = 0;
        while(getline(file_aluno,line)){
            if(i == pos_free){
                model.id_aluno = i;
                buffer += this->convert_model_string(model) + '\n';
            }else{
                buffer += line + '\n';
            }
            i++;
        }
        this->mh.qt_fr--;
        for(int j = 0; j < this->mh.qt_fr;j++){
            this->mh.fr_pos[j] = this->mh.fr_pos[j+1];
        }

        file_aluno.close();
        this->file_aluno.open("aluno.txt",std::ios::out);
        file_aluno << buffer;
        file_aluno.close();
    }else{
        //Final
        this->file_aluno.open("aluno.txt",std::ios::app);
        model.id_aluno = mh.qt_t;
        this->file_aluno.imbue(locale("pt_BR.utf8"));
        std::string md = this->convert_model_string(model);
        file_aluno<< md << '\n';
        std::cout << md << endl;
        mh.qt_t++;
        file_aluno.close();
    }

    this->write_head();
    //Grava aluno



}




std::string controllerAluno::busca_aluno(std::string cpf){
    this->read_head();
    int i = 0;
        this->file_aluno.open("aluno.txt",std::ios::in);
        std::string line;
        while(getline(file_aluno,line)){
            modelAluno md = convert_string_model(line);
            if(md.cpf.compare(cpf) ==  true && md.free == 1){
                return line;
            }
            i++;
        }
        file_aluno.close();
        return nullptr;
}

void controllerAluno::read_head(){
    //Le cabecalho
    this->file_head.open("head.txt",std::ios::in);
    if(this->file_head.is_open()){
        std::string line;

        getline(file_head,line);
        this->mh.qt_t = std::stoi(line);
        getline(file_head,line);
        this->mh.qt_fr = stoi(line);

        int i = 0;
        while(i < this->mh.qt_fr && getline(file_head,line)){
            this->mh.fr_pos[i] = stoi(line);
            i++;
        }
    }
    file_head.close();
}


void controllerAluno::write_head(){
 this->file_head.open("head.txt",std::ios::out);
    std::string tmp = "";
    tmp += std::to_string(this->mh.qt_t) + '\n';
    tmp += std::to_string(this->mh.qt_fr) + '\n';

    for(int i = 0; i < this->mh.qt_fr; i++){
        tmp += std::to_string(this->mh.fr_pos[i]) + '\n';
    }
    file_head << tmp;
    file_head.close();

}


std::string controllerAluno::convert_model_string(modelAluno md){
    std::string str_ret = std::to_string(md.id_aluno) + ":";
    str_ret += md.nome_aluno + ":";
    str_ret += md.cpf + ":" ;
    str_ret += md.num + ":" ;
    str_ret += md.complemento + ":" ;
    str_ret += std::to_string(md.id_endereco) + ":" ;
    str_ret += std::to_string(md.id_sexo) + ":" ;
    str_ret += std::to_string(md.id_email) + ":" ;
    str_ret += std::to_string(md.id_telefone) + ":" ;
    str_ret += std::to_string(md.id_tipo_ingresso) + ":" ;
    str_ret += std::to_string(md.free);
    return str_ret;
}

modelAluno controllerAluno::convert_string_model(std::string str_line){
    modelAluno md;
    std::string id_aluno;
    int i = 0;
    while(str_line[i] != ':'){
        id_aluno += str_line[i];
        i++;
    }
    id_aluno += '\0';
    md.id_aluno = std::stoi(id_aluno);
    i++;

    std::string nome_aluno;
    while(str_line[i] != ':'){
        nome_aluno += str_line[i];
        i++;
    }
    nome_aluno += '\0';
    md.nome_aluno = nome_aluno;
     i++;

    std::string cpf;
    while(str_line[i] != ':'){
        cpf += str_line[i];
        i++;
    }
    cpf += '\0';
    md.cpf = cpf;
     i++;

    std::string num;
    while(str_line[i] != ':'){
        num += str_line[i];
        i++;
    }
    num += '\0';
    md.num = num;
     i++;

    std::string com;
    while(str_line[i] != ':'){
        com += str_line[i];
        i++;
    }
    com += '\0';
    md.complemento = com;
    i++;


    std::string ender;
    while(str_line[i] != ':'){
        ender += str_line[i];
        i++;
    }
    ender += '\0';
    md.id_endereco = std::stoi(ender);
    i++;

    std::string sex;
    while(str_line[i] != ':'){
        sex += str_line[i];
        i++;
    }
    sex += '\0';
    md.id_sexo = std::stoi(sex);
    i++;

    std::string email;
    while(str_line[i] != ':'){
        email += str_line[i];
        i++;
    }
    email += '\0';
    md.id_email = std::stoi(email);
    i++;

    std::string tel;
    while(str_line[i] != ':'){
        tel += str_line[i];
        i++;
    }
    tel += '\0';
    md.id_telefone = std::stoi(tel);
    i++;


    std::string ting;
    while(str_line[i] != ':'){
        ting += str_line[i];
        i++;
    }
    ting += '\0';
    md.id_tipo_ingresso = std::stoi(ting);
    i++;

    std::string free;
    while(str_line[i] != '\0'){
        free += str_line[i];
        i++;
    }
    free += '\0';
    md.free = std::stoi(free);
    i++;

    return md;
}


controllerAluno::~controllerAluno()
{
    //dtor
}
