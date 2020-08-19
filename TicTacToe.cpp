#include<iostream>
using namespace std;

void Space(int key) {
    for(int i=0 ; i<key ; i++)
        cout << " ";
}
void Print_Disclaimer()
{
    cout << endl << endl;
    cout << "--------------------------------------------TIC - TAC - TOE --------------------------------------------------" << endl << endl;
    cout << "-------------------------------------------## DISCLAIMER ##---------------------------------------------------"<< endl;
    cout << "This game can only be played between two human players// computer IQ is very low :)" << endl << endl;
    cout << "--> Hello. I am bot xTend. Welcome to code0.1.5;  Ready to play the game......"<<endl;
    cout << "--> Following are the rules : " << endl;
    cout << "--> Player 'A' plays first turn and then Player 'B'." << endl;
    cout << "--> Enter the position of your mark in range 1 - 9 in particular's turn." << endl << endl;
    cout << "# EXAMPLE :" << endl;
    Space(20);
    cout << " 1 " << "|"<< " 2 " << "|" << " 3" << endl;
    Space(20);
    cout << "-----------" << endl;
    Space(20);
    cout << " 4 " << "|"<< " 5 " << "|" << " 6" << endl;
    Space(20);
    cout << "-----------" << endl;
    Space(20);
    cout << " 7 " << "|"<< " 8 " << "|" << " 9" << endl << endl;
    cout << "--> Here the position of mark is shown above i.e. at first turn mark 'X' will be printed at marked position."<< endl;
    cout << "--> Hence enter a number in range 1 - 9 where that number is the position of your mark." << endl;
    cout << "--> Player A has 'X' mark and player B has 'O' mark." << endl;
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;
    cout << endl;
}

void print_Cell_X()
{
    cout << " X ";
}
void print_Cell_O()
{
    cout << " O ";
}
void Space_Cell()
{
    cout << "   ";
}

int Tic_Tac_Toe(int arr[])
{
    int count = 0;

    if(arr[0] == 1 && arr[4] == 1 && arr[8] == 1)
        count = 1;
    else if(arr[0] == 1 && arr[1] == 1 && arr[2] == 1)
        count = 1;
    else if(arr[0] == 1 && arr[3] == 1 && arr[6] == 1)
        count = 1;
    else if(arr[3] == 1 && arr[4] == 1 && arr[5] == 1)
        count = 1;
    else if(arr[6] == 1 && arr[7] == 1 && arr[8] == 1)
        count = 1;
    else if(arr[1] == 1 && arr[4] == 1 && arr[7] == 1)
        count = 1;
    else if(arr[2] == 1 && arr[5] == 1 && arr[8] == 1)
        count = 1;
    else if(arr[2] == 1 && arr[4] == 1 && arr[6] == 1)
        count = 1;

    if(arr[0] == 1 && arr[4] == 2 && arr[8] == 2)
        count = 2;
    else if(arr[0] == 2 && arr[1] == 2 && arr[2] == 2)
        count = 2;
    else if(arr[0] == 2 && arr[3] == 2 && arr[6] == 2)
        count = 2;
    else if(arr[3] == 2 && arr[4] == 2 && arr[5] == 2)
        count = 2;
    else if(arr[6] == 2 && arr[7] == 2 && arr[8] == 2)
        count = 2;
    else if(arr[1] == 2 && arr[4] == 2 && arr[7] == 2)
        count = 2;
    else if(arr[2] == 2 && arr[5] == 2 && arr[8] == 2)
        count = 2;
    else if(arr[2] == 2 && arr[4] == 2 && arr[6] == 2)
        count = 2;

    return count;
}
int Return_Rar(int key ,string nameA ,string nameB)
{
    int Rar = 0;
    if(key == 1) {
        cout << "STRAIGNT LINE!!!!! Player "+ nameA +" wins :)" << endl;
        Rar = 1;
    }
    else if(key == 2){
        cout << "STRAIGHT LINE!!!!! Player "+ nameB +" wins :)" << endl;
        Rar = 2;
    }
    return Rar;
}

int Print_User_Input(int A[] , int N , string nameA , string nameB)
{
    int i , temp , flag , X , key , Y = 0 , C[9] = {0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0};

    if(N > 0) {
        if(A[N] == A[N-1]){
            Y = 1;
        }
        else {
            key = A[N];
            for (i = 0; i < N - 1; i++) {
                if (A[i] == key)
                    Y = 1;
            }
        }
    }

    if(Y == 0) {

        for (i = 0; i <= N; i++) {
            temp = A[i];
            if (i % 2 == 0) {
                C[temp - 1] = 1;
            } else {
                C[temp - 1] = 2;
            }
        }

        for (i = 0; i < 9; i++) {
            if (C[i] == 1) {
                print_Cell_X();
            } else if (C[i] == 2) {
                print_Cell_O();
            } else if (C[i] == 0) {
                Space_Cell();
            }
            temp = i + 1;
            if (temp % 3 != 0)
                cout << "|";
            if (temp % 3 == 0) {
                cout << endl;
                if (temp != 9)
                    cout << "-----------" << endl;
            }
        }

        flag = Tic_Tac_Toe(C);
        X = Return_Rar(flag , nameA , nameB);
        return X;
    }
    else if(Y == 1)
    {
        return 3;
    }

}




int main()
{
    int i , n , N , temp , Ar[9] ;
    string nameA , nameB;
    Print_Disclaimer();
    cout << endl;
    cout << "-->  Press 1 to begin !!!....  OR"<< endl;
    cout << "-->  Press 0 to EXIT." << endl;
    cout << endl;
    cin >> n;
    cout << endl;
    switch (n) {
        case 1:

            cout << "If you want to make custom names of player, press 1... OR" <<endl;
            cout << "Enter 0 for default names: "<< endl;
            cin >> N;
            if(N == 1) {
                cout << "Enter Player A name: " << endl;
                cin >> nameA;
                cout << "Enter Player B name: " << endl;
                cin >> nameB;
            }else{
                nameA = 'A';
                nameB = 'B';
            }

            for (i = 0; i < 9; i++) {
                if (i % 2 == 0) // payer A turn
                {
                    cout << endl;
                    cout << "-->  Player " + nameA + " turn...........(enter value in range 1 to 9) " << endl;
                    cin >> Ar[i];
                    temp = Print_User_Input(Ar, i , nameA , nameB);
                    if (temp == 1 || temp == 2) {
                        break;
                    } else if (temp == 3) {
                        cout << "!!!ERROR - you entered the already marked position //-" << endl;
                        i--;
                        continue;
                    }
                    if(i == 8) {
                        cout << "DRAW!!! no one can win now." << endl;
                        break;
                    }
                } else {
                    cout << endl;
                    cout << "-->  Player " + nameB + " turn...........(enter value in range 1 to 9)" << endl;
                    cin >> Ar[i];
                    temp = Print_User_Input(Ar, i , nameA , nameB);
                    if (temp == 1 || temp == 2) {
                        break;
                    } else if (temp == 3) {
                        cout << "!!!ERROR - you entered the already marked position //-" << endl;
                        i--;
                        continue;
                    }
                    if(i == 8) {
                        cout << "DRAW!!! no one can win now." << endl;
                        break;
                    }

                }
            }

        case 0:
            exit(0);
    }

}