#include <iostream>

int choice;
char marker;
char j, k, l, m, n, o, p, q, r;

using namespace std;


 void board(char a, char b, char c, char d, char e, char f, char g, char h, char i){  ;
system("cls");

    cout << " \t\t TIC TAC TOE \n\n\n" << endl;
    cout << "\t\t\t\tPlayer 1[X]" <<endl;
    cout << "\t\t\t\tPlayer 2[O]" <<endl;
    cout << "\t\t\t\t     |     |    " << endl ;
    cout << "\t\t\t\t  "  <<a<<  "  |  "<< b <<"  |  "<<c<<"  " << endl;
    cout << "\t\t\t\t_____|_____|_____" << endl ;
    cout << "\t\t\t\t     |     |    " << endl ;
    cout << "\t\t\t\t  "  <<d<<  "  |  "<< e <<"  |  "<<f<<"  " << endl;
    cout << "\t\t\t\t_____|_____|_____" << endl;
    cout << "\t\t\t\t     |     |" << endl;
    cout << "\t\t\t\t  "  <<g<<  "  |  "<< h <<"  |  "<<i<<"  " << endl;
    cout << "\t\t\t\t     |     |\n" << endl;
    }


void P1 (){
cout << "\t\t\t\tPlayer 1[X] turn: " <<endl;
cin >> choice;
marker = 'X';

 switch(choice){
    case 1:
        j = marker;
        break;
    case 2:
        k = marker;
        break;
    case 3:
        l = marker;
        break;
    case 4:
        m = marker;
        break;
    case 5:
        n = marker;
        break;
    case 6:
        o = marker;
        break;
    case 7:
        p = marker;
        break;
    case 8:
        q = marker;
        break;
    case 9:
        r = marker;
        break;

    default:{;
    cout << "Invalid choice \n";
    }

}
board(j,k,l,m,n,o,p,q,r);
}


void P2 () {

cout << " \t\t\t\tPlayer 2[O] turn: " <<endl;
    cin >> choice;
   marker = 'O';

switch(choice){
    case 1:
        j = marker;
        break;
    case 2:
        k = marker;
        break;
    case 3:
        l = marker;
        break;
    case 4:
        m = marker;
        break;
    case 5:
        n = marker;
        break;
    case 6:
        o = marker;
        break;
    case 7:
        p = marker;
        break;
    case 8:
        q = marker;
        break;
    case 9:
        r = marker;
        break;

    default:{
    cout << "Invalid choice \n";
    }

}

board(j,k,l,m,n,o,p,q,r);

}

int main()
{
    j = '1';
    k = '2';
    l = '3';
    m = '4';
    n = '5';
    o = '6';
    p = '7' ;
    q = '8';
    r = '9';


   board('1','2','3','4','5','6','7','8','9');


P1();
P2();
P1();
P2();
P1();
P2();
P1();
P2();
P1();


if ('X' == j&&k&&l || 'X' == j&&m&&p || 'X' == j&&n&&r || 'X' == m&&n&&o || 'X' == k&&n&&q || 'X' == l&&n&&p || 'X' == l&&o&&r || 'X' == p&&q&&r) {

    cout << "Player 1 wins!" ;

}else if ('O' == j&&k&&l || 'O' == j&&m&&p || 'O' == j&&n&&r || 'O' == m&&n&&o || 'O' == k&&n&&q || 'O' == l&&n&&p || 'O' == l&&o&&r || 'O' == p&&q&&r) {

    cout << "Player 2 wins!" ;
}else {
       cout << "Draw";
    }

return 0;
}
