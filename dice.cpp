//version 1.0 , im still figuring out how to make the user choose how many times to throw the dice

#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <math.h>
#include <time.h>
using namespace std;

void dice1(void);
void dice2(void);
void twodice (void);

int sum = 0;
int num1 = 0;
int num2 = 0;


int main(){

   thread dice1_thread (dado1);
   this_thread::sleep_for (chrono::seconds(1));
   thread dice2_thread (dado2);
   dice1_thread.join();
   dice2_thread.join();

}

void dice1(){

    srand(time(0));
    for(int i = 0; i <= 10; i++){

    i = 1 + rand() %6;
    num1 = i;
    cout << "dice 1: " << i << endl;
    this_thread::sleep_for (chrono::seconds(3));
   }
}

void dice2(){

    srand(time(0));
    for(int x = 0; x >= 0; x--){

    x = 1 + rand() %6;
    num2 = x;
    cout << "dice 2: " << x << endl;
    twodice();
    this_thread::sleep_for (chrono::seconds(3));
    }
}

void twodice(){

   sum = num1 + num2;
   cout << "total ==> " << sum << endl;
}
