#include <bits/stdc++.h>
using namespace std;
void heapify(vector<long long>&a,long long n,long long i)
{
    long long Max=i,l=2*i+1,r=2*i+2;
    if(l<n && a[l]>a[Max]) Max=l;
    if(r<n && a[r]>a[Max]) Max=r;
    if(Max!=i)
    {
        swap(a[i],a[Max]);
        heapify(a,n,Max);
    }
}
void HeapSort(vector<long long>&a)
{
    long long n=a.size();
    for(int i=n/2-1;i>=0;i--) heapify(a,n,i);
    for(int i=n-1;i>0;i--)
    {
        swap(a[0],a[i]);
        heapify(a,i,0);
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
    HeapSort(a);
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    cout << duration.count();
    return 0;
}

