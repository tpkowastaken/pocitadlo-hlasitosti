#include <conio.h>
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int noise = 0;
    char kk;
    bool helo = true, first = true, change = false;
    cout << "zmacknete sipku nahoru, nebo dolu pro start programu...\n";
    while(helo){
        if (kbhit() != 0){
            kk = getch();
            if(first)first = false;
            else first = true;
            if(kk == 'x' || kk == 27)helo = false;
            if(kk == 72 && first && noise < 10)noise++;//up
            if(kk == 80 && first && noise > 0)noise--;//down
            change = true;
        }
        if(change){
            system("cls");
            change = false;
            switch(noise){
                case 0:
                cout << "Hlasitost tridy:\nTest\n10\n9\n8\n7\n6\n5\n4\n3\n2\n1\n0        x\n";
                break;
                case 1:
                cout << "Hlasitost tridy:\nTest\n10\n9\n8\n7\n6\n5\n4\n3\n2\n1        x\n0\n";
                break;
                case 2:
                cout << "Hlasitost tridy:\nTest\n10\n9\n8\n7\n6\n5\n4\n3\n2        x\n1\n0\n";
                break;
                case 3:
                cout << "Hlasitost tridy:\nTest\n10\n9\n8\n7\n6\n5\n4\n3        x\n2\n1\n0\n";
                break;
                case 4:
                cout << "Hlasitost tridy:\nTest\n10\n9\n8\n7\n6\n5\n4        x\n3\n2\n1\n0\n";
                break;
                case 5:
                cout << "Hlasitost tridy:\nTest\n10\n9\n8\n7\n6\n5        x\n4\n3\n2\n1\n0\n";
                break;
                case 6:
                cout << "Hlasitost tridy:\nTest\n10\n9\n8\n7\n6        x\n5\n4\n3\n2\n1\n0\n";
                break;
                case 7:
                cout << "Hlasitost tridy:\nTest\n10\n9\n8\n7        x\n6\n5\n4\n3\n2\n1\n0\n";
                break;
                case 8:
                cout << "Hlasitost tridy:\nTest\n10\n9\n8        x\n7\n6\n5\n4\n3\n2\n1\n0\n";
                break;
                case 9:
                cout << "Hlasitost tridy:\nTest\n10\n9        x\n8\n7\n6\n5\n4\n3\n2\n1\n0\n";
                break;
                case 10:
                cout << "Hlasitost tridy:\nTest\n10       x\n9\n8\n7\n6\n5\n4\n3\n2\n1\n0\n";
                break;
            }
        }
    }
}