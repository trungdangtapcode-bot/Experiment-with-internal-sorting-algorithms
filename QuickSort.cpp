#include <bits/stdc++.h>
#include <chrono>
using namespace std;
int chia(vector<long long>&a,int l,int h)
{
    long long pi=a[h],i=l-1;
    for(int j=l;j<=h-1;j++)
    {
        if(a[j]<pi)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[h]);
    return i+1;
}
void QuickSort(vector<long long>&a,int l,int h)
{
    if(l<h)
    {
        long long pi=chia(a,l,h);
        QuickSort(a,l,pi-1);
        QuickSort(a,pi+1,h);
    }
}
long long n,M=1e9;
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
    QuickSort(a,0,a.size()-1);
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::seconds>(end - start);
    cout << duration.count();
    return 0;
}
