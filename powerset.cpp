#include <iostream>
#include <vector>
#include <string>
using namespace std;

int Combination(vector<string> &vec, vector<bool> &X1, int total, int i = 0)
{
    vector<bool> X2;
    X2.assign(X1.begin(), X1.end());

    if(i < total) {
        Combination(vec, X2, total, (i+1)); //recursive
        X2.at(i) = 1;
        Combination(vec, X2, total, (i+1)); //recursive
    }

    if(i == total) {
        cout << "{";
        for(int k = 0; k < total; ++k) {
            if(X2.at(k) == 1) {
                cout << vec.at(k);
                if(k < total-1) cout << " ";
            }
        }
        cout << "}" << endl;
        return 0;
    }

    return 1;
}

int main(void)
{
    int num, i = 0;
    vector<string> S(10);
    vector<bool> X(10,0);
    string str, str_0;

    while (!cin.eof()) {
        for(num = 0;;) {
            str_0 = cin.get();
            if(str_0 == "\n") {
                if(str != "") {
                    S.at(num) = str;
                    ++num;
                }

                str = "";
                break;
            }
            if(str_0 != " ") {
                str = str + str_0;
            } else {
                S.at(num) = str;
                str = "";
                ++num;
            }
        }

        Combination(S, X, num);
        cout << endl;
    }

    return 0;
}