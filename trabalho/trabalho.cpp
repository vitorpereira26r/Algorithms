#include <iostream>
#include <string>
#define qtd 5

using namespace std;

struct Conta{
    string nome;
    int cpf;
    float saldo;
};

Conta conta[qtd];

void newConta(Conta &conta){
    
    string resp;
    cout << "\nNome: ";
    //cin >> cad->nome;
    cin >> conta.nome;
        
    cout << "Digita CPF: ";
    //cin >> cad->cpf;
    cin >> conta.cpf;
    
    cout << "\nColocar saldo?";
    cin >> resp;
    if(resp == "S"){
        cout << "Digite seu deposito: ";
        //cin >> cad->saldo;
        cin >> conta.saldo;
    }
    
    cout << "Acao Efetuada com Sucesso!" << endl;
    cout << "Pressione Qualquer Tecla para Continuar\n";
    
}

void showConta(Conta &conta){
    cout<<"Nome\t: "<< conta.nome <<endl;
    cout<<"CPF\t: "<< conta.cpf <<endl;
    cout<<"Saldo\t: "<< conta.saldo <<endl;
    
    cout << "Pressione Qualquer Tecla para Continuar\n";
   
}

void menu(){
    cout << "1 - Criar Conta\n";
    cout << "2 - Listar Dados\n";
    cout << "3 - Sair do Sistema\n";
    
}

int main(){
    int d = 0;
    int op = 0;
    //struct conta *cadastro = new conta;
    Conta cad[qtd];
    
    
    //Loop de Opções do Menu
    //Esse aqui funciona, só não possui o array de registros como o loop For abaixo
    do{
        menu();
        cout << "Digite a Opcao desejada: ";
        cin >> op;
        
        switch(op){
            case 1:
                system("cls");
                newConta(cad[d]);
                system("pause>0");
                system("cls");
                break;
            case 2:
                system("cls");
                cout<<"\nDados:"<< endl;
                showConta(cad[d]);
                system("pause>0");
                break;
        }
        
    }while(op != 3);
    
    
    //Loop para testar, com 4 contas de teste
    
    for(d = 0; d < 4; d++){
        system("cls");
        newConta(cad[d]);
    }
    
    cout<<"\nDados:"<< endl;
    for(d = 0; d < 4; d++){
        showConta(cad[d]);
    }
    
    return 0;
}
