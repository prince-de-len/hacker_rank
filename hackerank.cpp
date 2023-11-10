/*************************************
* Автор: Тимофеев Гордей Евгеньевич. ПИ-231
* ссылка HackerRank: https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true
************************************/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<vector<int>> arrays(n);
    
    for (int i = 0; i < n; ++i) {
        int cur_size;
        cin >> cur_size;
        
        arrays[i].resize(cur_size);
        for (int j = 0; j < cur_size; ++j) {
            cin >> arrays[i][j];
        }
    }

    for (int counter_q = 0; counter_q < q; ++counter_q) {
        int index_arr_q, index_ind_q;
        cin >> index_arr_q >> index_ind_q;
        cout << arrays[index_arr_q][index_ind_q] << endl;
    }

    return 0;
}
