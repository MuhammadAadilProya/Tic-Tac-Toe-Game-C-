#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

char space[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

void Design() 
{	
    cout << "T i c k  T o e  Game" << endl << endl;

    cout << "    |  " << " | " << endl;
    cout << "  " << space[0][0] << " |" << " " << space[0][1] << " | " << space[0][2] << endl;
    cout << "____|__" << "_|____" << endl;
    cout << "    |  " << " | " << endl;
    cout << "  " << space[1][0] << " |" << " " << space[1][1] << " | " << space[1][2] << endl;
    cout << "____|__" << "_|____" << endl;
    cout << "    |  " << " | " << endl;
    cout << "  " << space[2][0] << " |" << " " << space[2][1] << " | " << space[2][2] << endl;
    cout << "    |  " << " | " << endl;
}

void pr_x(int p1) 
{
    int choice = 0;
    cout << "Player " << p1 << " turn : ";
    cout << "Enter the Choice :";
    do {
        cin >> choice;
        if (choice == 1 && space[0][0] != 'x' && space[0][0] != 'O') 
		{
            space[0][0] = 'x';
        } else if (choice == 2 && space[0][1] != 'x' && space[0][1] != 'O') 
		{
            space[0][1] = 'x';
        } else if (choice == 3 && space[0][2] != 'x' && space[0][2] != 'O') 
		{
            space[0][2] = 'x';
        } else if (choice == 4 && space[1][0] != 'x' && space[1][0] != 'O') 
		{
            space[1][0] = 'x';
        } else if (choice == 5 && space[1][1] != 'x' && space[1][1] != 'O') 
		{
            space[1][1] = 'x';
        } else if (choice == 6 && space[1][2] != 'x' && space[1][2] != 'O') 
		{
            space[1][2] = 'x';
        } else if (choice == 7 && space[2][0] != 'x' && space[2][0] != 'O') 
		{
            space[2][0] = 'x';
        } else if (choice == 8 && space[2][1] != 'x' && space[2][1] != 'O') 
		{
            space[2][1] = 'x';
        } else if (choice == 9 && space[2][2] != 'x' && space[2][2] != 'O') 
		{
            space[2][2] = 'x';
        } else {
            cout << "invalid choice!\nEnter the player " << p1 << " choice again :";
            continue;
        }
        break;
    } while (true);
}

void pr_O(int p2) 
{
    int choice = 0;
    cout << "Player " << p2 << " turn : ";
    cout << "Enter the Choice :";
    
    do {
        cin >> choice;
        
        if (choice == 1 && space[0][0] != 'x' && space[0][0] != 'O') 
		{
            space[0][0] = 'O';
            break;
        } else if (choice == 2 && space[0][1] != 'x' && space[0][1] != 'O') 
		{
            space[0][1] = 'O';
            break;
        } else if (choice == 3 && space[0][2] != 'x' && space[0][2] != 'O') 
		{
            space[0][2] = 'O';
            break;
        } else if (choice == 4 && space[1][0] != 'x' && space[1][0] != 'O') 
		{
            space[1][0] = 'O';
            break;
        } else if (choice == 5 && space[1][1] != 'x' && space[1][1] != 'O') 
		{
            space[1][1] = 'O';
            break;
        } else if (choice == 6 && space[1][2] != 'x' && space[1][2] != 'O') 
		{
            space[1][2] = 'O';
            break;
        } else if (choice == 7 && space[2][0] != 'x' && space[2][0] != 'O') 
		{
            space[2][0] = 'O';
            break;
        } else if (choice == 8 && space[2][1] != 'x' && space[2][1] != 'O') 
		{
            space[2][1] = 'O';
            break;
        } else if (choice == 9 && space[2][2] != 'x' && space[2][2] != 'O') 
		{
            space[2][2] = 'O';
            break;
        } else {
            cout << "invalid choice!\nEnter the player " << p2 << " choice again :";
            continue;
        }
        
    } while (true);
}

bool check_Winnerx() 
{
    if ((space[0][0] == 'x' && space[0][1] == 'x' && space[0][2] == 'x') ||
        (space[0][0] == 'x' && space[1][0] == 'x' && space[2][0] == 'x') ||
        (space[2][0] == 'x' && space[2][1] == 'x' && space[2][2] == 'x') ||
        (space[0][2] == 'x' && space[1][2] == 'x' && space[2][2] == 'x') ||
		(space[0][1] == 'x' && space[1][1] == 'x' && space[2][1] == 'x')) 
	{
        cout << "Player 1 winner";
        return true;
    }
    if ((space[0][0] == 'x' && space[1][1] == 'x' && space[2][2] == 'x') ||
        (space[0][2] == 'x' && space[1][1] == 'x' && space[2][0] == 'x')) 
	{
        cout << "Player 1 winner";
        return true;
    }
    return false;
}

bool check_WinnerO() 
{
    if ((space[0][0] == 'O' && space[0][1] == 'O' && space[0][2] == 'O') ||
        (space[0][0] == 'O' && space[1][0] == 'O' && space[2][0] == 'O') ||
        (space[2][0] == 'O' && space[2][1] == 'O' && space[2][2] == 'O') ||
        (space[0][2] == 'O' && space[1][2] == 'O' && space[2][2] == 'O') ||
		(space[0][1] == 'O' && space[1][1] == 'O' && space[2][1] == 'O')) 
	{
        cout << "Player 2 winner";
        return true;
    }
    if ((space[0][0] == 'O' && space[1][1] == 'O' && space[2][2] == 'O') ||
        (space[0][2] == 'O' && space[1][1] == 'O' && space[2][0] == 'O')) 
	{
        cout << "Player 2 winner";
        return true;
    }
    return false;
}

int main() 
{
    int p1 = 1, p2 = 2,a=1,cntx=0,cntO=0;
    char playAgain;
    
    do {
        bool gameOver = false;
        Design();
        for (int i = 0; i < 9; i++) 
		{
            if (i % 2 == 0)
            {
            	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
                pr_x(p1);
                cntx++;	
			}
                
            else
            {
            	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
			    pr_O(p2);
			    cntO++;
			}    
            system("cls");
            Design();
            if (check_Winnerx() || check_WinnerO()) 
			{
                gameOver = true;
                break;
            }
        }
        if (!gameOver)
            cout << "It's a draw!" << endl;
        cout<<"\nplayer 1 number of turns : "<<cntx;
        cout<<"\nplayer 2 number of turns : "<<cntO;
        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;
        
        if (playAgain != 'y' && playAgain != 'Y')
            break;
            
        for (int i = 0; i < 3; i++) 
		{
            for (int j = 0; j < 3; j++) 
			{
                space[i][j] = '1'+i*3+j;
            }
        }
        
    } while (true);
    
    return 0;
}

