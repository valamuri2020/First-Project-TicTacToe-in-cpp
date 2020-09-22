#include <iostream>

using namespace std;


int choice;
char marker;
char j, k, l, m, n, o, p, q, r;
int status();

void board(char a, char b, char c, char d, char e, char f, char g, char h, char i){

 int v = status();

    if (v == 1){
        system("cls");
        cout << "You Win!!!";
    }
    else if (v == 0){
        cout << "Draw";
    }
    else{
        system("cls");

    cout << "\t\t\tTIC TAC TOE \n\n\n" << endl;
    cout << "\t\t\t\tPlayer 1[X]" <<endl;
    cout << "\t\t\t\tPlayer 2[O]\n" <<endl;
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

int status()
{
    if ( j == k && k == l)

        return 1;
    else if (m == n && n == o)

        return 1;
    else if (p == q && q == r)

        return 1;
    else if (j == m && m == p)

        return 1;
    else if (k == n && n == q)

        return 1;
    else if (l == o && o == r)

        return 1;
    else if (j == n && n == r)

        return 1;
    else if (l == n && n == p)

        return 1;
    else if (j != '1' && k != '2' && l != '3'
                    && m != '4' && n != '5' && o != '6'
                  && p != '7' && q != '8' && r != '9')

        return 0;
    else
        return -1;
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

system("cls");


// get output logic
return 0;
}


