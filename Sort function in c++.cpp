#include <bits/stdc++.h>
#include <fstream>

using namespace std;
int main()
{
    //ifstream file("Test1.txt");
    //ifstream file("Test2.txt");
    //ifstream file("Test3.txt");
    //ifstream file("Test4.txt");
    //ifstream file("Test5.txt");
    //ifstream file("Test6.txt");
    //ifstream file("Test7.txt");
    //ifstream file("Test8.txt");
    //ifstream file("Test9.txt");
    //ifstream file("Test10.txt");
    vector<long long>a;
    string line;
    while(getline(file,line))
    {
        istringstream ss(line);
        long long num;
        while(ss>>num)
        {
            a.push_back(num);
        }
    }
    file.close();
    auto start = chrono::high_resolution_clock::now();
    sort(a.begin(),a.end());
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    cout << duration.count();
    return 0;
}
