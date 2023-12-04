#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int main()
{
    bool program = true, game, editBoard;
    int dx, dy, JumlahKapal = 0;
    string board[15][15]=
    {
    {'+','+','+','+','+','+','+','+','+','+','+','+','+','+','+'},
    {'+','+','+','+','+','+','+','+','+','+','+','+','+','+','+'},
    {'+','+','+','+','+','+','+','+','+','+','+','+','+','+','+'},
    {'+','+','+','+','+','+','+','+','+','+','+','+','+','+','+'},
    {'+','+','+','+','+','+','+','+','+','+','+','+','+','+','+'},
    {'+','+','+','+','+','+','+','+','+','+','+','+','+','+','+'},
    {'+','+','+','+','+','+','+','+','+','+','+','+','+','+','+'},
    {'+','+','+','+','+','+','+','+','+','+','+','+','+','+','+'},
    {'+','+','+','+','+','+','+','+','+','+','+','+','+','+','+'},
    {'+','+','+','+','+','+','+','+','+','+','+','+','+','+','+'},
    {'+','+','+','+','+','+','+','+','+','+','+','+','+','+','+'},
    {'+','+','+','+','+','+','+','+','+','+','+','+','+','+','+'},
    {'+','+','+','+','+','+','+','+','+','+','+','+','+','+','+'},
    {'+','+','+','+','+','+','+','+','+','+','+','+','+','+','+'},
    {'+','+','+','+','+','+','+','+','+','+','+','+','+','+','+'},
    };
    while(program)
    {
        int menu;
        cout << "Welcome to BattleShip!\n";
        cout << "1. Play\n";
        cout << "2. Edit Board\n";
        cout << "0. Exit\n";
        cout << ">>";
        cin >> menu;
        if(menu == 1){

        }
        else if(menu == 2){
            editBoard = true;
        }
        else if(menu == 0){
            program = false;
        }

        while(game){

        }
        while(editBoard){
            int menu;
            for (int i=0;i<=14;i++){
                for(int j=0;j<=28;j++){
                    cout << board[i][j];
                }
                cout << endl;
            }
            if(JumlahKapal < 7){
                cout << "1. 2x1 ship" << endl;
                cout << "2. 3x2 ship" << endl;
                cout << "3. 2x2 ship" << endl;
                cout << "4. 4x1 ship" << endl;
                cout << "5. 4x2 ship" << endl;
                cout << "6. 3x1 ship" << endl;
                cout << "0. Back to Main Menu" << endl;
                cout << ">>";
                cin >> menu;
                if(menu == 1){

//                    cout << "Koordinat x (0 - 14): ";
//                    cin >> dx;
//                    cout << "Koordinat y (0 - 14): ";
//                    cin >> dy;

//                    if ((dx > 14 || dx < 0) || (dy > 14 || dy < 0)){
//                        cout << "Koordinat tidak terdeteksi!" << endl;
//                        cout << endl;
//                    }

//                    if ((dx <= 14 && dx >= 0) && (dy >= 0 && dy <= 14)){
//                        if (dx % 2 == 0){
//                            board[dy][dx*2] = 'O';
//                            board[dy][dx*2+2] = 'O';
//                            JumlahKapal++;
//                        } else {
//                            board[dy][(dx*2-1)+1] = 'O';
//                            board[dy][(dx*2-1)+3] = 'O';
//                            JumlahKapal++;
//                        }
//                    }

                }
                else if(menu == 2){
                    char input;
                    dx = 0;
                    dy = 0;

                    board[dy][dx] = 'O';



                }
                else if(menu == 3){
                    cout << "Koordinat x (0 - 14): ";
                    cin >> dx;
                    cout << "Koordinat y (0 - 14): ";
                    cin >> dy;

                    if ((dx > 14 || dx < 0) || (dy > 14 || dy < 0)){
                        cout << "Koordinat tidak terdeteksi!" << endl;
                        cout << endl;
                    }

                    if ((dx <= 14 && dx >= 0) && (dy >= 0 && dy <= 14)){
                        if (dx % 2 == 0){
                            board[dy][dx*2] = 'O';
                            board[dy][dx*2+2] = 'O';
                            board[dy+1][dx*2] = 'O';
                            board[dy+1][dx*2+2] = 'O';
                            JumlahKapal++;
                        } else {
                            board[dy][(dx*2-1)+1] = 'O';
                            board[dy][(dx*2-1)+3] = 'O';
                            board[dy+1][(dx*2-1)+1] = 'O';
                            board[dy+1][(dx*2-1)+3] = 'O';
                            JumlahKapal++;
                        }
                    }


                }
                else if(menu == 4){
                    cout << "Koordinat x (0 - 14): ";
                    cin >> dx;
                    cout << "Koordinat y (0 - 14): ";
                    cin >> dy;

                    if ((dx > 14 || dx < 0) || (dy > 14 || dy < 0)){
                        cout << "Koordinat tidak terdeteksi!" << endl;
                        cout << endl;
                    }

                    if ((dx <= 14 && dx >= 0) && (dy >= 0 && dy <= 14)){
                        if (dx % 2 == 0){
                            board[dy][dx*2] = 'O';
                            board[dy][dx*2+2] = 'O';
                            board[dy][dx*2+4] = 'O';
                            board[dy][dx*2+6] = 'O';
                            JumlahKapal++;
                        } else {
                            board[dy][(dx*2-1)+1] = 'O';
                            board[dy][(dx*2-1)+3] = 'O';
                            board[dy][(dx*2-1)+5] = 'O';
                            board[dy][(dx*2-1)+7] = 'O';
                            JumlahKapal++;
                        }
                    }
                }
                else if(menu == 5){
                    cout << "Koordinat x (0 - 14): ";
                    cin >> dx;
                    cout << "Koordinat y (0 - 14): ";
                    cin >> dy;

                    if ((dx > 14 || dx < 0) || (dy > 14 || dy < 0)){
                        cout << "Koordinat tidak terdeteksi!" << endl;
                        cout << endl;
                    }

                    if ((dx <= 14 && dx >= 0) && (dy >= 0 && dy <= 14)){
                        if (dx % 2 == 0){
                            board[dy][dx*2] = 'O';
                            board[dy][dx*2+2] = 'O';
                            board[dy][dx*2+4] = 'O';
                            board[dy][dx*2+6] = 'O';
                            board[dy+1][dx*2] = 'O';
                            board[dy+1][dx*2+2] = 'O';
                            board[dy+1][dx*2+4] = 'O';
                            board[dy+1][dx*2+6] = 'O';
                            JumlahKapal++;
                        } else {
                            board[dy][(dx*2-1)+1] = 'O';
                            board[dy][(dx*2-1)+3] = 'O';
                            board[dy][(dx*2-1)+5] = 'O';
                            board[dy][(dx*2-1)+7] = 'O';
                            board[dy+1][(dx*2-1)+1] = 'O';
                            board[dy+1][(dx*2-1)+3] = 'O';
                            board[dy+1][(dx*2-1)+5] = 'O';
                            board[dy+1][(dx*2-1)+7] = 'O';
                            JumlahKapal++;
                        }
                    }
                }
                else if(menu == 6){
                    cout << "Koordinat x (0 - 14): ";
                    cin >> dx;
                    cout << "Koordinat y (0 - 14): ";
                    cin >> dy;

                    if ((dx > 14 || dx < 0) || (dy > 14 || dy < 0)){
                        cout << "Koordinat tidak terdeteksi!" << endl;
                        cout << endl;
                    }
                    if ((dx <= 14 && dx >= 0) && (dy >= 0 && dy <= 14)){
                        if (dx % 2 == 0){
                            board[dy][dx*2] = 'O';
                            board[dy][dx*2 + 2] = 'O';
                            board[dy][dx*2 + 4] = 'O';
                            JumlahKapal++;
                        } else {
                            board[dy][(dx*2 - 1) + 1] = 'O';
                            board[dy][(dx*2 - 1) + 3] = 'O';
                            board[dy][(dx*2 - 1) + 5] = 'O';
                            JumlahKapal++;
                        }
                    }
                }//aaronganteng
                //honggiekontol
                else if(menu == 0){
                    editBoard = false;
                }
            } else {
                cout << "Kapal sudah penuh..." << endl;
                editBoard = false;
            }
        }
    }
    return 0;
}
