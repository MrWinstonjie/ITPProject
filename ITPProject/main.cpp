#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

void printMap(char board[15][15]){
    for (int i = 0; i < 15; i++){
        for(int j = 0; j < 15; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    bool program = true, game = false, editBoard = false, Kapal1 = false, Kapal2 = false, Kapal3 = false, Kapal4 = false, Kapal5 = false, Kapal6 = false;
    int dx, dy, JumlahKapal = 0;
    char board[15][15]=
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
            printMap(board);
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
                    if(Kapal1){
                        cout << "Kapal 1 sudah dibuat" << endl << endl;
                    }
                    else{
                        char input;
                        while(input != 99){
                            dx = 0;
                            dy = 0;
                            system("cls");
                            printMap(board);
                            Sleep(300);
                            board[dy][dx] = 'O';
                            board[dy][dx + 1] = 'O';
                            if (kbhit()){
                                input = getch();
                                cin >> input;
                                if (input == 'w'){
                                    board[dy][dx] = board[dy - 1][dx];
                                    board[dy][dx] = board[dy - 2][dx];
//                                    dy-=2;
                                }
                                else if (input == 'a'){
                                    board[dy][dx] = board[dy][dx - 2];
                                    board[dy][dx] = board[dy][dx - 4];
//                                    dx += 2;
                                }
                                else if (input == 's'){
                                    board[dy][dx] = board[dy + 1][dx];
                                    board[dy][dx] = board[dy + 2][dx];
//                                    dy += 2;
                                }
                                else if (input == 'd'){
                                    board[dy][dx] = board[dy][dx + 4];
                                    board[dy][dx] = board[dy][dx + 2];
//                                    dx -= 2;
                                }
                                else if (input == 'c'){
                                    Kapal1 = true;
                                }
                            }

                        }
//                        cout << "Koordinat x: ";
//                        cin >> dx;
//                        cout << "Koordinat y: ";
//                        cin >> dy;
//                        while(board[dy][dx * 2] == 'O' || board[dy][dx*2+2] == 'O' || board[dy][(dx*2-1)+1] == 'O' || board[dy][(dx*2-1)+3] == 'O'){
//                            cout << "Koordinat kapal sudah terisi!" << endl << endl;
//                            cout << "Koordinat x: ";
//                            cin >> dx;
//                            cout << "Koordinat y: ";
//                            cin >> dy;
//                        }

//                        if ((dx > 13 || dx < 0) || (dy > 14 || dy < 0)){
//                            cout << "Koordinat tidak terdeteksi!" << endl;
//                            cout << endl;
//                        }
//                        else{
//                            if (dx % 2 == 0){
//                                board[dy][dx*2] = 'O';
//                                board[dy][dx*2+2] = 'O';
//                                JumlahKapal++;
//                            } else {
//                                board[dy][(dx*2-1)+1] = 'O';
//                                board[dy][(dx*2-1)+3] = 'O';
//                                JumlahKapal++;
//                            }
//                        }
                    }

                }
                else if(menu == 2){
                    if(Kapal2){
                        cout << "Kapal 2 sudah dibuat" << endl << endl;
                    }
                    else{
                        cout << "Koordinat x: ";
                        cin >> dx;
                        cout << "Koordinat y: ";
                        cin >> dy;
                        while(board[dy][dx * 2] == 'O' || board[dy][dx * 2 + 2] == 'O' || board[dy][dx * 2 + 4] == 'O' || board[dy + 1][dx * 2] == 'O' || board[dy + 1][dx * 2 + 2] == 'O' || board[dy + 1][dx * 2 + 4] == 'O' ||  board[dy][(dx * 2 - 1) + 1] == 'O' ||  board[dy][(dx * 2 - 1) + 3] == 'O' ||  board[dy][(dx * 2 - 1) + 5] == 'O' || board[dy + 1][(dx * 2 - 1) + 1] == 'O' || board[dy + 1][(dx * 2 - 1) + 3] == 'O' || board[dy + 1][(dx * 2 - 1) + 5] == 'O'){
                            cout << "Koordinat kapal sudah terisi!" << endl;
                            cout << "Koordinat x: ";
                            cin >> dx;
                            cout << "Koordinat y: ";
                            cin >> dy;
                        }
                        if ((dx > 12 || dx < 0) || (dy > 13 || dy < 0)){
                            cout << "Koordinat tidak terdeteksi!" << endl << endl;
                            cout << endl;
                        }
                        else{
                            if (dx % 2 == 0){
                                board[dy][dx * 2] = 'O';
                                board[dy][dx * 2 + 2] = 'O';
                                board[dy][dx * 2 + 4] = 'O';
                                board[dy + 1][dx * 2] = 'O';
                                board[dy + 1][dx * 2 + 2] = 'O';
                                board[dy + 1][dx * 2 + 4] = 'O';
                                JumlahKapal++;
                            } else {
                                board[dy][(dx * 2 - 1) + 1] = 'O';
                                board[dy][(dx * 2 - 1) + 3] = 'O';
                                board[dy][(dx * 2 - 1) + 5] = 'O';
                                board[dy + 1][(dx * 2 - 1) + 1] = 'O';
                                board[dy + 1][(dx * 2 - 1) + 3] = 'O';
                                board[dy + 1][(dx * 2 - 1) + 5] = 'O';
                                JumlahKapal++;
                            }
                            Kapal2 = true;
                        }
                    }
                }
                else if(menu == 3){
                    if(Kapal3){
                        cout << "Kapal 3 sudah dibuat" << endl << endl;
                    }
                    else{
                        cout << "Koordinat x: ";
                        cin >> dx;
                        cout << "Koordinat y: ";
                        cin >> dy;
                        while(board[dy][dx * 2] == 'O' || board[dy][dx * 2 + 2] == 'O' || board[dy + 1][dx * 2] == 'O' || board[dy + 1][dx * 2 + 2] == 'O' || board[dy][(dx * 2 - 1) + 1] == 'O' ||  board[dy][(dx * 2 - 1) + 3] == 'O' || board[dy + 1][(dx * 2 - 1) + 1] == 'O' || board[dy + 1][(dx * 2 - 1) + 3] == 'O'){
                            cout << "Koordinat kapal sudah terisi!" << endl << endl;
                            cout << "Koordinat x (0 - 14): ";
                            cin >> dx;
                            cout << "Koordinat y (0 - 14): ";
                            cin >> dy;
                        }
                        if ((dx > 13 || dx < 0) || (dy > 13 || dy < 0)){
                            cout << "Koordinat tidak terdeteksi!" << endl;
                            cout << endl;
                        }
                        else{
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
                            Kapal3 = true;
                        }
                    }
                }
                else if(menu == 4){
                    if(Kapal4){
                        cout << "Kapal 4 sudah dibuat" << endl << endl;
                    }
                    else{
                        cout << "Koordinat x: ";
                        cin >> dx;
                        cout << "Koordinat y: ";
                        cin >> dy;
                        while(board[dy][dx * 2] == 'O' || board[dy][dx * 2 + 2] == 'O' || board[dy][dx * 2 + 4] == 'O' || board[dy][dx * 2 + 6] == 'O' || board[dy][(dx*2-1)+1] == 'O' || board[dy][(dx*2-1)+3] == 'O' || board[dy][(dx*2-1)+5] == 'O' || board[dy][(dx*2-1)+7] == 'O'){
                            cout << "Koordinat kapal sudah terisi!" << endl << endl;
                            cout << "Koordinat x: ";
                            cin >> dx;
                            cout << "Koordinat y: ";
                            cin >> dy;
                        }
                        if ((dx > 11 || dx < 0) || (dy > 14 || dy < 0)){
                            cout << "Koordinat tidak terdeteksi!" << endl;
                            cout << endl;
                        }
                        else{
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
                            Kapal4 = true;
                        }
                    }
                }
                else if(menu == 5){
                    if (Kapal5){
                        cout << "Kapal 5 sudah dibuat" << endl << endl;
                    }
                    else{

                        cout << "Koordinat x: ";
                        cin >> dx;
                        cout << "Koordinat y: ";
                        cin >> dy;
                        while(board[dy][dx * 2] == 'O' || board[dy][dx * 2 + 2] == 'O' || board[dy][dx * 2 + 4] == 'O' || board[dy][dx * 2 + 6] == 'O' || board[dy + 1][dx * 2] == 'O' || board[dy + 1][dx * 2 + 2] == 'O' || board[dy + 1][dx * 2 + 4] == 'O' || board[dy + 1][dx * 2 + 6] == 'O' ||  board[dy][(dx * 2 - 1) + 1] == 'O' ||  board[dy][(dx * 2 - 1) + 3] == 'O' ||  board[dy][(dx * 2 - 1) + 5] == 'O' || board[dy][(dx * 2 - 1) + 7] == 'O' || board[dy + 1][(dx * 2 - 1) + 1] == 'O' || board[dy + 1][(dx * 2 - 1) + 3] == 'O' || board[dy+1][(dx*2-1)+5] == 'O' || board[dy+1][(dx*2-1)+7] == 'O'){
                            cout << "Koordinat kapal sudah terisi!" << endl << endl;
                            cout << "Koordinat x: ";
                            cin >> dx;
                            cout << "Koordinat y: ";
                            cin >> dy;
                        }
                        if ((dx > 11 || dx < 0) || (dy > 13 || dy < 0)){
                            cout << "Koordinat tidak terdeteksi!" << endl;
                            cout << endl;
                        }

                        else{
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
                            Kapal5 = true;
                        }
                    }
                }
                else if(menu == 6){
                    if (Kapal6){
                        cout << "Kapal 6 sudah dibuat" << endl << endl;
                    }
                    else{
                        cout << "Koordinat x: ";
                        cin >> dx;
                        cout << "Koordinat y: ";
                        cin >> dy;
                        while(board[dy][dx * 2] == 'O' || board[dy][dx * 2 + 2] == 'O' || board[dy][dx * 2 + 4] == 'O' || board[dy][(dx*2 - 1) + 1] == 'O' || board[dy][(dx*2 - 1) + 3] == 'O' || board[dy][(dx*2 - 1) + 5] == 'O'){
                            cout << "Koordinat kapal sudah terisi!" << endl << endl;
                            cout << "Koordinat x (0 - 14): ";
                            cin >> dx;
                            cout << "Koordinat y (0 - 14): ";
                            cin >> dy;
                        }
                        if ((dx > 12 || dx < 0) || (dy > 14 || dy < 0)){
                            cout << "Koordinat tidak terdeteksi!" << endl;
                            cout << endl;
                        }
                        else{
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
                            Kapal6 = true;
                        }
                    }
                }
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
