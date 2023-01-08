
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int Exam;
    int Bot;
    while(1){
        cout << "=======================" << endl;
        cout << "1. Keo" << endl;
        cout << "2. Bua" << endl;
        cout << "3. Bao" << endl;
        cout << "0. Ket thuc" << endl;
        cout << "=======================" << endl;
        cout << "Chon: ";
        cin >> Exam;
        if (Exam != 1 && Exam != 2 && Exam != 3 && Exam != 0) {
            cout << "Ko hop le" << endl;
            continue;
        }
        else {
            srand(time(NULL));
            Bot = (rand() % 3) + 1;
            /*cout << "You chon: " << Exam << " & Bot chon: " << Bot << endl;*/
            switch(Exam){
            case 1:
                if (Exam == Bot) {
                    cout << "Draw" << endl;
                }
                else if (Exam == 1 && Bot == 2) {
                    cout << "Lose" << endl;
                }
                else{
                    cout << "Victory" << endl;
                }
                break;
            case 2:
                if (Exam == Bot) {
                    cout << "Draw" << endl;
                }
                else if (Exam == 2 && Bot == 3) {
                    cout << "Lose" << endl;
                }
                else{
                    cout << "Victory" << endl;
                }
                break;
            case 3:
                if (Exam == Bot) {
                    cout << "Draw" << endl;
                }
                else if (Exam == 3 && Bot == 1) {
                    cout << "Lose" << endl;
                }
                else {
                    cout << "Victory" << endl;
                }
                break;
            case 0:
                cout << "Da thoat chuong trinh !!" << endl;
                return 0;
            default:
                break;
            }
          
        }
    }
    return 0;
}
