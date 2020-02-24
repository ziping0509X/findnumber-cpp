#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool Find(int target, vector<vector<int> >array) {
        bool find = false;
        int row = array.size(), cul = array[0].size();
        int flag = 0;
        if (row == 1 && cul == 0) {
            return find;
        }
        else {
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < cul; j++) {
                    if (array[i][j] == target) {
                        find = true;
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1)
                    break;
            }
            return find;
        }
    }
};

int main(void) {
    vector<vector<int> > array;
    for (int i = 0; i < 2; ++i)
        array.push_back(vector<int>());
    array[0].push_back(1);
    array[0].push_back(4);
    array[1].push_back(3);
    array[1].push_back(2);
    int target = 4;
    bool answer;
    Solution solution;
    answer = solution.Find(target, array);
    cout << answer << endl;
}
//调试成功！
//这是我使用C++编写的第一个代码！使用CLion和VS2015共同编译。CLion的界面更友好，编写的时候体验更好，
// //以后可以在接受编译较慢的前提下使用CLion编写C++程序