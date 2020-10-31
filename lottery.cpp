#include <iostream>
#include <vector>
#include <time.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

using std::vector;
using std::cin;
using std::cout;
using std::endl;


void get_numbers(vector<int> &);             //get vec

void show_numbers(const vector<int> &);     //show numbers

void get_winner(vector<int> &, int);  //lottery


void get_numbers(vector<int> &V) {
    int num;
    bool flag = true;
    while (cin >> num) {        //get number , end with Ctrl^D / Ctrl^Z
        if (cin.eof())
            break;
        for (const auto &e : V) {
            if (num == e) {
                cout << "Repetitive datas" << endl;    //more detail
                flag = false;
                break;
            }
            flag = true;
        }
        if (flag)
            V.push_back(num);
    }
}

std::ostream &operator<<(std::ostream &out, const vector<int> &V) {
    decltype(V.size()) last_count = 1;
    out << '[';
    for (auto &e : V) {
        out << e;
        if (last_count == V.size())
            break;
        out << ",";
        last_count++;
    }
    out << ']';
    return out;
}

void show_numbers(const vector<int> &V) {
    system("cls");
    cout << "All members: " << endl;
    int changeLine = 0;
    for (auto &e : V) {
        cout << e << "\t\t";
        changeLine++;
        if (changeLine == 4) {
            cout << "\n";
            changeLine = 0;
        }
    }
}

void get_winner(vector<int> &V, int num) {
    getchar();
    srand(time(0));
    int speed = 4;
    int winner[num], del[num];
    vector<int> winners;
    cout << "Starts : " << endl;
    bool flag = false;
    while (true) {
        flag = true;
        if (speed <= 64)
            speed *= 2;
        if (_kbhit() && speed >= 64)
            break;
        for (int i = 0; i < num; i++) {
            del[i] = rand() % (V.size() - 1);
            for (int j = 0; j < i; j++) {
                if (del[j] == del[i])
                    flag = false;
            }
        }
        if (!flag)
            continue;
        cout << "winner(s)  :";
        for (int i = 0; i < num; i++) {
            winner[i] = V.at(del[i]);
            cout << winner[i] << "  \t";
        }
        cout << "\r";
        Sleep(8000 / speed);
    }
    for (int i = 0; i < num; i++) {
        V.erase(V.begin() + del[i] - i);
    }
}

int main() {
    vector<int> vec;
    get_numbers(vec);
    std::cout << vec << endl;
    show_numbers(vec);
    get_winner(vec, 1);
    get_winner(vec, 2);

    return 0;
}
