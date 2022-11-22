#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <iostream>

using namespace std;

#define MIN_SCORE 0
#define MAX_SCORE 10000
#define MAX_HOLES 18

extern "C" void win();

void win(){
    system("/bin/sh");
}

int main(int argc, char const *argv[]) {
    cout << "GOLF TRACKER v3.3" << endl;
    cout << "Number of holes: ";
    int numHoles = 0;
    cin >> numHoles;
    if (numHoles > MAX_HOLES || numHoles < 0) {
        cout << "Invalid number of holes" << endl;
        exit(0);
    }

    short score = 0;
    for (int i = 0; i < numHoles; i++) {
        cout << "Hole #" << i << ": ";
        int holeScore = 0;
        cin >> holeScore;
        if (holeScore < MIN_SCORE || holeScore > MAX_SCORE) {
            cout << "Invalid score" << endl;
            exit(0);
        }
        score += holeScore;
    }
    cout << "Final score: " << score << endl;
    if (score < 0) {
      cout << "How did that happen?" << endl;
      win();
    }
    return 0;
}