#include<iostream>

using namespace std;

int a[1000]={0,1,2,3,4,1,2,3,4,5,1,2,3,4,5,2,3,4,5,6,2,3,4,5,6,3,4,5,6,7,1,2,3,4,5,2,3,4,5,6,2,3,4,5,6,3,4,5,6,7,1,2,3,4,5,2,3,4,5,6,2,3,4,5,6,3,4,5,6,7,1,2,3,4,5,2,3,4,5,6,2,3,4,5,6,3,4,5,6,7,3,4,5,6,7,4,5,6,7,8,1,2,3,4,5,2,3,4,5,6,1,2,3,4,5,2,3,4,5,6,2,3,4,5,6,3,4,5,6,7,2,3,4,5,6,3,4,5,6,7,2,3,4,5,6,3,4,5,6,7,2,3,4,5,6,3,4,5,6,7,2,3,4,5,6,3,4,5,6,7,2,3,4,5,6,3,4,5,6,7,2,3,4,5,6,3,4,5,6,7,3,4,5,6,7,4,5,6,7,8,2,3,4,5,6,3,4,5,6,7,2,3,4,5,6,3,4,5,6,7,2,3,4,5,6,3,4,5,6,7,3,4,5,6,7,4,5,6,7,8,3,4,5,6,7,4,5,6,7,8,3,4,5,6,7,4,5,6,7,8,3,4,5,6,7,4,5,6,7,8,3,4,5,6,7,4,5,6,7,8,3,4,5,6,7,4,5,6,7,8,3,4,5,6,7,4,5,6,7,8,3,4,5,6,7,4,5,6,7,8,3,4,5,6,7,4,5,6,7,8,3,4,5,6,7,4,5,6,7,8,3,4,5,6,7,4,5,6,7,8,4,5,6,7,8,5,6,7,8,9,4,5,6,7,8,5,6,7,8,9,4,5,6,7,8,5,6,7,8,9,4,5,6,7,8,5,6,7,8,9,4,5,6,7,8,5,6,7,8,9,4,5,6,7,8,5,6,7,8,9,4,5,6,7,8,5,6,7,8,9,4,5,6,7,8,5,6,7,8,9,4,5,6,7,8,5,6,7,8,9,4,5,6,7,8,5,6,7,8,9,4,5,6,7,8,5,6,7,8,9,5,6,7,8,9,6,7,8,9,10,5,6,7,8,9,6,7,8,9,10,5,6,7,8,9,6,7,8,9,10,5,6,7,8,9,6,7,8,9,10,5,6,7,8,9,6,7,8,9,10,1,2,3,4,5,2,3,4,5,6,2,3,4,5,6,3,4,5,6,7,3,4,5,6,7,4,5,6,7,8,2,3,4,5,6,3,4,5,6,7,3,4,5,6,7,4,5,6,7,8,2,3,4,5,6,3,4,5,6,7,3,4,5,6,7,4,5,6,7,8,2,3,4,5,6,3,4,5,6,7,3,4,5,6,7,4,5,6,7,8,4,5,6,7,8,5,6,7,8,9,2,3,4,5,6,3,4,5,6,7,2,3,4,5,6,3,4,5,6,7,3,4,5,6,7,4,5,6,7,8,3,4,5,6,7,4,5,6,7,8,3,4,5,6,7,4,5,6,7,8,3,4,5,6,7,4,5,6,7,8,3,4,5,6,7,4,5,6,7,8,3,4,5,6,7,4,5,6,7,8,3,4,5,6,7,4,5,6,7,8,4,5,6,7,8,5,6,7,8,9,3,4,5,6,7,4,5,6,7,8,3,4,5,6,7,4,5,6,7,8,3,4,5,6,7,4,5,6,7,8,4,5,6,7,8,5,6,7,8,9,4,5,6,7,8,5,6,7,8,9,4,5,6,7,8,5,6,7,8,9,4,5,6,7,8,5,6,7,8,9,4,5,6,7,8,5,6,7,8,9,4,5,6,7,8,5,6,7,8,9,4,5,6,7,8,5,6,7,8,9,4,5,6,7,8,5,6,7,8,9,4,5,6,7,8,5,6,7,8,9,4,5,6,7,8,5,6,7,8,9,4,5,6,7,8,5,6,7,8,9,5,6,7,8,9,6,7,8,9,10,5,6,7,8,9,6,7,8,9,10,5,6,7,8,9,6,7,8,9,10,5,6,7,8,9,6,7,8,9,10,5,6,7,8,9,6,7,8,9,10,5,6,7,8,9,6,7,8,9,10,5,6,7,8,9,6,7,8,9,10,5,6,7,8,9,6,7,8,9,10,5,6,7,8,9,6,7,8,9,10,5,6,7,8,9,6,7,8,9,10,5,6,7,8,9,6,7,8,9,10,6,7,8,9,10,7,8,9,10,11,6,7,8,9,10,7,8,9,10,11,6,7,8,9,10,7,8,9,10,11,6,7,8,9,10,7,8,9,10,11,6,7,8,9,10,7,8,9,10,11},t,n;

int input(){
    char c;
    for(c=getchar();c<48||c>57;c=getchar());
    int x=c-48;
    for(c=getchar();c>47&&c<58;c=getchar())x=x*10+c-48;
    return x;
}

int main(){
    /*
    freopen("D655.txt","w",stdout);
    a[0]=0;
    for(int i=1;i<1000;i++) a[i]=1000;
    for(int i=0;i<10;i++)
        for(int j=0;j<1000;j++)
            if(j+m[i]<1000)
                if(a[j]+1<a[j+m[i]]) a[j+m[i]]=a[j]+1;
    for(int i=0;i<1000;i++) printf("%d,",a[i]);
    */
    t=input();
    for(int i=0;i<t;i++)
    {
        n=input();
        printf("%d\n",n/1000+a[n%1000]);
    }
    return 0;
}
