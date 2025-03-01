#include <bits/stdc++.h>
using namespace std;
void hop(vector<long long>&a,long long l,long long mid,long long r)
{
    long long n1=mid-l+1,n2=r-mid;
    vector<long long> L(n1), R(n2);
    for(int i=0;i<n1;i++)
    {
        L[i]=a[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        R[j]=a[mid+1+j];
    }
    long long i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=R[j];
        j++;
        k++;
    }
}
void MergeSort(vector<long long>&a,long long l,long long r)
{
    if(l>=r) return;
    long long mid=l+(r-l)/2;
    MergeSort(a,l,mid);
    MergeSort(a,mid+1,r);
    hop(a,l,mid,r);
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
    MergeSort(a,0,a.size()-1);
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    cout << duration.count();
    return 0;
}
