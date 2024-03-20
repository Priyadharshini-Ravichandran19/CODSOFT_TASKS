#include <bits/stdc++.h>
using namespace std;

// TIC TAC TOE GAME
char bd[3][3];
char playerA;
char playerB;

void resetBoard(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            bd[i][j]=' ';

        }
    }
}
void XOBoard(){

    cout<<" "<<bd[0][0]<<"  | "<<bd[0][1]<<"    | "<<bd[0][2]<<"  ";
    cout<<"\n"<<"____"<<"|"<<"_____"<<" | "<<"_____"<<"\n";
    cout<<" "<<bd[1][0]<<"  | "<<bd[1][1]<<"    | "<<bd[1][2]<<"  ";
    cout<<"\n"<<"____"<<"|"<<"_____"<<" | "<<"_____"<<"\n";
    cout<<" "<<bd[2][0]<<"  | "<<bd[2][1]<<"    | "<<bd[2][2]<<"  ";

}
int Space(){
    int space=9;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(bd[i][j]!=' ')
                space--;

        }
    }
    return space;
}
void playerAturn(char c){
    int x,y;
    do{
        cout<<"\n"<<"Player "<<c<<" Enter row #(1-3):";

        cin>>x;
        x--;
        cout<<"\n"<<"Player "<<c<<" Enter column #(1-3):";
        cin>>y;
        y--;
        if(bd[x][y]!=' ')
            cout<<"\n"<<"Invalid move!\n";
        else {
            bd[x][y] = c;
            break;
        }
    }
    while (bd[x][y]!=' ');

}
void playerBturn(char c){
    int x,y;
    do{
        cout<<endl<<"Player "<<c<<" Enter row #(1-3):\n";
        cin>>x;
        x--;
        cout<<endl<<"Player "<<c<<" Enter column #(1-3):\n";
        cin>>y;
        y--;
        if(bd[x][y]!=' ')
            cout<<endl<<"Invalid move!\n";
        else {
            bd[x][y] = c;
            break;
        }
    }
    while (bd[x][y]!=' ');
}
char checkwinner(){
    
    for(int i=0;i<3;i++) {
        if (bd[i][0] == bd[i][1] && bd[i][0] == bd[i][2]) {
            return bd[i][0];

        }
    }
    
    for(int i=0;i<3;i++) {
        if (bd[0][i] == bd[1][i] && bd[0][i] == bd[2][i]) {
            return bd[0][i];

        }
    }
    
    if (bd[0][0] == bd[1][1] && bd[0][0] == bd[2][2]) {
        return bd[0][0];

    }
   
    if (bd[0][2] == bd[1][1] && bd[0][2] == bd[2][0]) {
        return bd[0][2];

    }
    return ' ';


}
void printWinner(char winner){
    if(winner == playerA){
        cout<<endl<<"PLAYER ONE WINS!\n";
    }
    else if(winner == playerB){
        cout<<endl<<"PLAYER TWO WINS!\n";
    }
    else
        cout<<endl<<"IT'S A TIE!\n";


}



int main() {
    char winner=' ';
    char response;

    cout<<endl<<"Welcome to TIC-TAC-TOE game!\n";
    start:
    {
        char winner=' ';
        char response;
        cout << endl<<"PLAYER A IS: ";
        cin >> playerA;


        do { cout<<"\n"<<"PLAYER B IS: ";
            cin>>playerB;}
        while(playerA==playerB);
        cout<<"\n";

        resetBoard();

        while (winner == ' ' && Space() > 0) {
            XOBoard();

            playerAturn(playerA);
            XOBoard();
            winner = checkwinner();
            if (winner != ' ' || Space() == 0)
                break;

            playerBturn(playerB);
            winner = checkwinner();
        }

        XOBoard();
        printWinner(winner);

    }
    cout<<endl<<"Would you like to play again? (Y/N):";
    cin>>response;
    if(response=='Y')goto start;
    else cout<<endl<<"Thank you for playing!Visit again\n";
    return 0;
}

