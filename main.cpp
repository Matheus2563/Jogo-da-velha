#include <bits/stdc++.h>
using namespace std;

vector<char> m(9);

void outro();
void exibir_tab();
void inialize_tab();
void turno_j1();
void turno_j2();
void verif_vit();
void verif_emp();

    void verif_vit(){
        if( m[0] == m[1] && m[1] == m[2] ){
            if( m[0] == 'O' ){
                cout << "Parabens! Jogador 2 venceu!" << endl;
                outro();
            } else if( m[0] == 'X' ){
                cout << "Parabens! Jogador 1 venceu!" << endl;
                outro();
            }
        }
        if( m[3] == m[4] && m[4] == m[5] ){
            if( m[3] == 'O' ){
                cout << "Parabens! Jogador 2 venceu!" << endl;
                outro();
            } else if( m[3] == 'X' ){
                cout << "Parabens! Jogador 1 venceu!" << endl;
                outro();
            }
        }
        if( m[6] == m[7] && m[7] == m[8] ){
            if( m[6] == 'O' ){
                cout << "Parabens! Jogador 2 venceu!" << endl;
                outro();
            } else if( m[6] == 'X' ){
                cout << "Parabens! Jogador 1 venceu!" << endl;
                outro();
            }
        }
        if( m[0] == m[3] && m[3] == m[6] ){
            if( m[0] == 'O' ){
                cout << "Parabens! Jogador 2 venceu!" << endl;
                outro();
            } else if( m[0] == 'X' ){
                cout << "Parabens! Jogador 1 venceu!" << endl;
                outro();
            }
        }
        if( m[1] == m[4] && m[4] == m[7] ){
            if( m[1] == 'O' ){
                cout << "Parabens! Jogador 2 venceu!" << endl;
                outro();
            } else if( m[1] == 'X' ){
                cout << "Parabens! Jogador 1 venceu!" << endl;
                outro();
            }
        }
        if( m[2] == m[5] && m[5] == m[8] ){
            if( m[2] == 'O' ){
                cout << "Parabens! Jogador 2 venceu!" << endl;
                outro();
            } else if( m[2] == 'X' ){
                cout << "Parabens! Jogador 1 venceu!" << endl;
                outro();
            }
        }
        if( m[0] == m[4] && m[4] == m[8] ){
            if( m[0] == 'O' ){
                cout << "Parabens! Jogador 2 venceu!" << endl;
                outro();
            } else if( m[0] == 'X' ){
                cout << "Parabens! Jogador 1 venceu!" << endl;
                outro();
            }
        }
        if( m[2] == m[4] && m[4] == m[6] ){
            if( m[2] == 'O' ){
                cout << "Parabens! Jogador 2 venceu!" << endl;
                outro();
            } else if( m[2] == 'X' ){
                cout << "Parabens! Jogador 1 venceu!" << endl;
                outro();
            }
        }

    }

    void outro(){
    char c;
    cout << "Deseja reiniciar o jogo? (S/N)" << endl;
    cin >> c;
    if( c == 's' || c == 'S' ){
        inialize_tab();
        exibir_tab();
        turno_j1();
    } else if( c == 'n' || c == 'N' ){
       exit(0);
    } else {
        cout << "Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao." << endl;
        outro();
    }
}

   void verif_emp(){
       if( m[0] !=  '1' && m[1] !=  '2' && m[2] !=  '3' && m[3] !=  '4' && m[4] !=  '5' && m[5] !=  '6' && m[6] !=  '7' && m[7] !=  '8' && m[8] !=  '9' ){
        cout << "Empate! Nenhum jogador venceu." << endl;
        outro();
       }
   }

    void inialize_tab(){
    m[0] = '1';
    m[1] = '2';
    m[2] = '3';
    m[3] = '4';
    m[4] = '5';
    m[5] = '6';
    m[6] = '7';
    m[7] = '8';
    m[8] = '9';
    }

    void exibir_tab(){


        cout << m[0] << " | " << m[1] << " | " << m[2] << endl;
        cout << "-----------" << endl;
        cout << m[3] << " | " << m[4] << " | " << m[5] << endl;
        cout << "-----------" << endl;
        cout << m[6] << " | " << m[7] << " | " << m[8] << endl;

    }

    void turno_j1(){
        int pos_esc1;
       cout << "Jogador 1 (X), escolha uma posicao: ";

       if (!(cin >> pos_esc1)){
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Posicao invalida ou ja ocupada! Escolha outra posicao." << endl;
        turno_j1();
       }

       if( pos_esc1 < 1 || pos_esc1 > 9 ){
        cout << "Posicao invalida ou ja ocupada! Escolha outra posicao." << endl;
        turno_j1();
       }
       if( m[pos_esc1 - 1] == 'X' || m[pos_esc1 - 1] == 'O' ){
        cout << "Posicao invalida ou ja ocupada! Escolha outra posicao." << endl;
        turno_j1();
       }
        m[pos_esc1-1] = 'X';
        exibir_tab();
        verif_vit();
        verif_emp();
        turno_j2();
    }

    void turno_j2(){
        int pos_esc2;
       cout << "Jogador 2 (O), escolha uma posicao: ";

       if (!(cin >> pos_esc2)){
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Posicao invalida ou ja ocupada! Escolha outra posicao." << endl;
        turno_j2();
       }
       if( pos_esc2 < 1 || pos_esc2 > 9 ){
        cout << "Posicao invalida ou ja ocupada! Escolha outra posicao." << endl;
        turno_j2();
       }
       if( m[pos_esc2 - 1] == 'X' || m[pos_esc2 - 1] == 'O' ){
        cout << "Posicao invalida ou ja ocupada! Escolha outra posicao." << endl;
        turno_j2();
       }
        m[pos_esc2-1] = 'O';
        exibir_tab();
        verif_vit();
        verif_emp();
        turno_j1();
    }




int main() {

    inialize_tab();
    exibir_tab();
    turno_j1();

    return 0;
}

