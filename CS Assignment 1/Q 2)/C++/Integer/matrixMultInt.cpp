#include<bits/stdc++.h>
using namespace std;



int main(int argc,char * argv[]){

    srand(time(0));
    
    int n,m;
    n=(int)atoi(argv[1]);
    m=(int)atoi(argv[2]);
    vector<vector<int>> a(n,vector<int>(m)),b(n,vector<int>(m)),c(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int value=rand();
            a[i][j]=value;
            b[i][j]=value;
        }
    }
   
    clock_t begin = clock();

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int sum=0;
            for(int k=0;k<n;k++){
                sum+=a[i][k]*b[j][k];
            }
            c[i][j]=sum;
        }
    }

    clock_t end = clock();
    cout << "\n\nMeat portion Executed in " << (double(end - begin) / (CLOCKS_PER_SEC)) << "s.\n";
    

    return 0;
}

