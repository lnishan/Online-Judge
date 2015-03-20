#include <cstdio>
#include <cstring>

using namespace std;

int t, a[91][27], dlist[26], dct, acorn, tree;
char s[50], c, vdot[91], o[14][27][50];

void dfs(int ch){
	int i;
	for( i=1; i<=a[ch][0]; i++ )
		if( !vdot[a[ch][i]] ){
			vdot[a[ch][i]]=1;
			dfs(a[ch][i]);
		}
}

int main(){
strcpy(o[0][0],"There are 0 tree(s) and 0 acorn(s).");
strcpy(o[0][1],"There are 0 tree(s) and 1 acorn(s).");
strcpy(o[0][2],"There are 0 tree(s) and 2 acorn(s).");
strcpy(o[0][3],"There are 0 tree(s) and 3 acorn(s).");
strcpy(o[0][4],"There are 0 tree(s) and 4 acorn(s).");
strcpy(o[0][5],"There are 0 tree(s) and 5 acorn(s).");
strcpy(o[0][6],"There are 0 tree(s) and 6 acorn(s).");
strcpy(o[0][7],"There are 0 tree(s) and 7 acorn(s).");
strcpy(o[0][8],"There are 0 tree(s) and 8 acorn(s).");
strcpy(o[0][9],"There are 0 tree(s) and 9 acorn(s).");
strcpy(o[0][10],"There are 0 tree(s) and 10 acorn(s).");
strcpy(o[0][11],"There are 0 tree(s) and 11 acorn(s).");
strcpy(o[0][12],"There are 0 tree(s) and 12 acorn(s).");
strcpy(o[0][13],"There are 0 tree(s) and 13 acorn(s).");
strcpy(o[0][14],"There are 0 tree(s) and 14 acorn(s).");
strcpy(o[0][15],"There are 0 tree(s) and 15 acorn(s).");
strcpy(o[0][16],"There are 0 tree(s) and 16 acorn(s).");
strcpy(o[0][17],"There are 0 tree(s) and 17 acorn(s).");
strcpy(o[0][18],"There are 0 tree(s) and 18 acorn(s).");
strcpy(o[0][19],"There are 0 tree(s) and 19 acorn(s).");
strcpy(o[0][20],"There are 0 tree(s) and 20 acorn(s).");
strcpy(o[0][21],"There are 0 tree(s) and 21 acorn(s).");
strcpy(o[0][22],"There are 0 tree(s) and 22 acorn(s).");
strcpy(o[0][23],"There are 0 tree(s) and 23 acorn(s).");
strcpy(o[0][24],"There are 0 tree(s) and 24 acorn(s).");
strcpy(o[0][25],"There are 0 tree(s) and 25 acorn(s).");
strcpy(o[0][26],"There are 0 tree(s) and 26 acorn(s).");
strcpy(o[1][0],"There are 1 tree(s) and 0 acorn(s).");
strcpy(o[1][1],"There are 1 tree(s) and 1 acorn(s).");
strcpy(o[1][2],"There are 1 tree(s) and 2 acorn(s).");
strcpy(o[1][3],"There are 1 tree(s) and 3 acorn(s).");
strcpy(o[1][4],"There are 1 tree(s) and 4 acorn(s).");
strcpy(o[1][5],"There are 1 tree(s) and 5 acorn(s).");
strcpy(o[1][6],"There are 1 tree(s) and 6 acorn(s).");
strcpy(o[1][7],"There are 1 tree(s) and 7 acorn(s).");
strcpy(o[1][8],"There are 1 tree(s) and 8 acorn(s).");
strcpy(o[1][9],"There are 1 tree(s) and 9 acorn(s).");
strcpy(o[1][10],"There are 1 tree(s) and 10 acorn(s).");
strcpy(o[1][11],"There are 1 tree(s) and 11 acorn(s).");
strcpy(o[1][12],"There are 1 tree(s) and 12 acorn(s).");
strcpy(o[1][13],"There are 1 tree(s) and 13 acorn(s).");
strcpy(o[1][14],"There are 1 tree(s) and 14 acorn(s).");
strcpy(o[1][15],"There are 1 tree(s) and 15 acorn(s).");
strcpy(o[1][16],"There are 1 tree(s) and 16 acorn(s).");
strcpy(o[1][17],"There are 1 tree(s) and 17 acorn(s).");
strcpy(o[1][18],"There are 1 tree(s) and 18 acorn(s).");
strcpy(o[1][19],"There are 1 tree(s) and 19 acorn(s).");
strcpy(o[1][20],"There are 1 tree(s) and 20 acorn(s).");
strcpy(o[1][21],"There are 1 tree(s) and 21 acorn(s).");
strcpy(o[1][22],"There are 1 tree(s) and 22 acorn(s).");
strcpy(o[1][23],"There are 1 tree(s) and 23 acorn(s).");
strcpy(o[1][24],"There are 1 tree(s) and 24 acorn(s).");
strcpy(o[2][0],"There are 2 tree(s) and 0 acorn(s).");
strcpy(o[2][1],"There are 2 tree(s) and 1 acorn(s).");
strcpy(o[2][2],"There are 2 tree(s) and 2 acorn(s).");
strcpy(o[2][3],"There are 2 tree(s) and 3 acorn(s).");
strcpy(o[2][4],"There are 2 tree(s) and 4 acorn(s).");
strcpy(o[2][5],"There are 2 tree(s) and 5 acorn(s).");
strcpy(o[2][6],"There are 2 tree(s) and 6 acorn(s).");
strcpy(o[2][7],"There are 2 tree(s) and 7 acorn(s).");
strcpy(o[2][8],"There are 2 tree(s) and 8 acorn(s).");
strcpy(o[2][9],"There are 2 tree(s) and 9 acorn(s).");
strcpy(o[2][10],"There are 2 tree(s) and 10 acorn(s).");
strcpy(o[2][11],"There are 2 tree(s) and 11 acorn(s).");
strcpy(o[2][12],"There are 2 tree(s) and 12 acorn(s).");
strcpy(o[2][13],"There are 2 tree(s) and 13 acorn(s).");
strcpy(o[2][14],"There are 2 tree(s) and 14 acorn(s).");
strcpy(o[2][15],"There are 2 tree(s) and 15 acorn(s).");
strcpy(o[2][16],"There are 2 tree(s) and 16 acorn(s).");
strcpy(o[2][17],"There are 2 tree(s) and 17 acorn(s).");
strcpy(o[2][18],"There are 2 tree(s) and 18 acorn(s).");
strcpy(o[2][19],"There are 2 tree(s) and 19 acorn(s).");
strcpy(o[2][20],"There are 2 tree(s) and 20 acorn(s).");
strcpy(o[2][21],"There are 2 tree(s) and 21 acorn(s).");
strcpy(o[2][22],"There are 2 tree(s) and 22 acorn(s).");
strcpy(o[3][0],"There are 3 tree(s) and 0 acorn(s).");
strcpy(o[3][1],"There are 3 tree(s) and 1 acorn(s).");
strcpy(o[3][2],"There are 3 tree(s) and 2 acorn(s).");
strcpy(o[3][3],"There are 3 tree(s) and 3 acorn(s).");
strcpy(o[3][4],"There are 3 tree(s) and 4 acorn(s).");
strcpy(o[3][5],"There are 3 tree(s) and 5 acorn(s).");
strcpy(o[3][6],"There are 3 tree(s) and 6 acorn(s).");
strcpy(o[3][7],"There are 3 tree(s) and 7 acorn(s).");
strcpy(o[3][8],"There are 3 tree(s) and 8 acorn(s).");
strcpy(o[3][9],"There are 3 tree(s) and 9 acorn(s).");
strcpy(o[3][10],"There are 3 tree(s) and 10 acorn(s).");
strcpy(o[3][11],"There are 3 tree(s) and 11 acorn(s).");
strcpy(o[3][12],"There are 3 tree(s) and 12 acorn(s).");
strcpy(o[3][13],"There are 3 tree(s) and 13 acorn(s).");
strcpy(o[3][14],"There are 3 tree(s) and 14 acorn(s).");
strcpy(o[3][15],"There are 3 tree(s) and 15 acorn(s).");
strcpy(o[3][16],"There are 3 tree(s) and 16 acorn(s).");
strcpy(o[3][17],"There are 3 tree(s) and 17 acorn(s).");
strcpy(o[3][18],"There are 3 tree(s) and 18 acorn(s).");
strcpy(o[3][19],"There are 3 tree(s) and 19 acorn(s).");
strcpy(o[3][20],"There are 3 tree(s) and 20 acorn(s).");
strcpy(o[4][0],"There are 4 tree(s) and 0 acorn(s).");
strcpy(o[4][1],"There are 4 tree(s) and 1 acorn(s).");
strcpy(o[4][2],"There are 4 tree(s) and 2 acorn(s).");
strcpy(o[4][3],"There are 4 tree(s) and 3 acorn(s).");
strcpy(o[4][4],"There are 4 tree(s) and 4 acorn(s).");
strcpy(o[4][5],"There are 4 tree(s) and 5 acorn(s).");
strcpy(o[4][6],"There are 4 tree(s) and 6 acorn(s).");
strcpy(o[4][7],"There are 4 tree(s) and 7 acorn(s).");
strcpy(o[4][8],"There are 4 tree(s) and 8 acorn(s).");
strcpy(o[4][9],"There are 4 tree(s) and 9 acorn(s).");
strcpy(o[4][10],"There are 4 tree(s) and 10 acorn(s).");
strcpy(o[4][11],"There are 4 tree(s) and 11 acorn(s).");
strcpy(o[4][12],"There are 4 tree(s) and 12 acorn(s).");
strcpy(o[4][13],"There are 4 tree(s) and 13 acorn(s).");
strcpy(o[4][14],"There are 4 tree(s) and 14 acorn(s).");
strcpy(o[4][15],"There are 4 tree(s) and 15 acorn(s).");
strcpy(o[4][16],"There are 4 tree(s) and 16 acorn(s).");
strcpy(o[4][17],"There are 4 tree(s) and 17 acorn(s).");
strcpy(o[4][18],"There are 4 tree(s) and 18 acorn(s).");
strcpy(o[5][0],"There are 5 tree(s) and 0 acorn(s).");
strcpy(o[5][1],"There are 5 tree(s) and 1 acorn(s).");
strcpy(o[5][2],"There are 5 tree(s) and 2 acorn(s).");
strcpy(o[5][3],"There are 5 tree(s) and 3 acorn(s).");
strcpy(o[5][4],"There are 5 tree(s) and 4 acorn(s).");
strcpy(o[5][5],"There are 5 tree(s) and 5 acorn(s).");
strcpy(o[5][6],"There are 5 tree(s) and 6 acorn(s).");
strcpy(o[5][7],"There are 5 tree(s) and 7 acorn(s).");
strcpy(o[5][8],"There are 5 tree(s) and 8 acorn(s).");
strcpy(o[5][9],"There are 5 tree(s) and 9 acorn(s).");
strcpy(o[5][10],"There are 5 tree(s) and 10 acorn(s).");
strcpy(o[5][11],"There are 5 tree(s) and 11 acorn(s).");
strcpy(o[5][12],"There are 5 tree(s) and 12 acorn(s).");
strcpy(o[5][13],"There are 5 tree(s) and 13 acorn(s).");
strcpy(o[5][14],"There are 5 tree(s) and 14 acorn(s).");
strcpy(o[5][15],"There are 5 tree(s) and 15 acorn(s).");
strcpy(o[5][16],"There are 5 tree(s) and 16 acorn(s).");
strcpy(o[6][0],"There are 6 tree(s) and 0 acorn(s).");
strcpy(o[6][1],"There are 6 tree(s) and 1 acorn(s).");
strcpy(o[6][2],"There are 6 tree(s) and 2 acorn(s).");
strcpy(o[6][3],"There are 6 tree(s) and 3 acorn(s).");
strcpy(o[6][4],"There are 6 tree(s) and 4 acorn(s).");
strcpy(o[6][5],"There are 6 tree(s) and 5 acorn(s).");
strcpy(o[6][6],"There are 6 tree(s) and 6 acorn(s).");
strcpy(o[6][7],"There are 6 tree(s) and 7 acorn(s).");
strcpy(o[6][8],"There are 6 tree(s) and 8 acorn(s).");
strcpy(o[6][9],"There are 6 tree(s) and 9 acorn(s).");
strcpy(o[6][10],"There are 6 tree(s) and 10 acorn(s).");
strcpy(o[6][11],"There are 6 tree(s) and 11 acorn(s).");
strcpy(o[6][12],"There are 6 tree(s) and 12 acorn(s).");
strcpy(o[6][13],"There are 6 tree(s) and 13 acorn(s).");
strcpy(o[6][14],"There are 6 tree(s) and 14 acorn(s).");
strcpy(o[7][0],"There are 7 tree(s) and 0 acorn(s).");
strcpy(o[7][1],"There are 7 tree(s) and 1 acorn(s).");
strcpy(o[7][2],"There are 7 tree(s) and 2 acorn(s).");
strcpy(o[7][3],"There are 7 tree(s) and 3 acorn(s).");
strcpy(o[7][4],"There are 7 tree(s) and 4 acorn(s).");
strcpy(o[7][5],"There are 7 tree(s) and 5 acorn(s).");
strcpy(o[7][6],"There are 7 tree(s) and 6 acorn(s).");
strcpy(o[7][7],"There are 7 tree(s) and 7 acorn(s).");
strcpy(o[7][8],"There are 7 tree(s) and 8 acorn(s).");
strcpy(o[7][9],"There are 7 tree(s) and 9 acorn(s).");
strcpy(o[7][10],"There are 7 tree(s) and 10 acorn(s).");
strcpy(o[7][11],"There are 7 tree(s) and 11 acorn(s).");
strcpy(o[7][12],"There are 7 tree(s) and 12 acorn(s).");
strcpy(o[8][0],"There are 8 tree(s) and 0 acorn(s).");
strcpy(o[8][1],"There are 8 tree(s) and 1 acorn(s).");
strcpy(o[8][2],"There are 8 tree(s) and 2 acorn(s).");
strcpy(o[8][3],"There are 8 tree(s) and 3 acorn(s).");
strcpy(o[8][4],"There are 8 tree(s) and 4 acorn(s).");
strcpy(o[8][5],"There are 8 tree(s) and 5 acorn(s).");
strcpy(o[8][6],"There are 8 tree(s) and 6 acorn(s).");
strcpy(o[8][7],"There are 8 tree(s) and 7 acorn(s).");
strcpy(o[8][8],"There are 8 tree(s) and 8 acorn(s).");
strcpy(o[8][9],"There are 8 tree(s) and 9 acorn(s).");
strcpy(o[8][10],"There are 8 tree(s) and 10 acorn(s).");
strcpy(o[9][0],"There are 9 tree(s) and 0 acorn(s).");
strcpy(o[9][1],"There are 9 tree(s) and 1 acorn(s).");
strcpy(o[9][2],"There are 9 tree(s) and 2 acorn(s).");
strcpy(o[9][3],"There are 9 tree(s) and 3 acorn(s).");
strcpy(o[9][4],"There are 9 tree(s) and 4 acorn(s).");
strcpy(o[9][5],"There are 9 tree(s) and 5 acorn(s).");
strcpy(o[9][6],"There are 9 tree(s) and 6 acorn(s).");
strcpy(o[9][7],"There are 9 tree(s) and 7 acorn(s).");
strcpy(o[9][8],"There are 9 tree(s) and 8 acorn(s).");
strcpy(o[10][0],"There are 10 tree(s) and 0 acorn(s).");
strcpy(o[10][1],"There are 10 tree(s) and 1 acorn(s).");
strcpy(o[10][2],"There are 10 tree(s) and 2 acorn(s).");
strcpy(o[10][3],"There are 10 tree(s) and 3 acorn(s).");
strcpy(o[10][4],"There are 10 tree(s) and 4 acorn(s).");
strcpy(o[10][5],"There are 10 tree(s) and 5 acorn(s).");
strcpy(o[10][6],"There are 10 tree(s) and 6 acorn(s).");
strcpy(o[11][0],"There are 11 tree(s) and 0 acorn(s).");
strcpy(o[11][1],"There are 11 tree(s) and 1 acorn(s).");
strcpy(o[11][2],"There are 11 tree(s) and 2 acorn(s).");
strcpy(o[11][3],"There are 11 tree(s) and 3 acorn(s).");
strcpy(o[11][4],"There are 11 tree(s) and 4 acorn(s).");
strcpy(o[12][0],"There are 12 tree(s) and 0 acorn(s).");
strcpy(o[12][1],"There are 12 tree(s) and 1 acorn(s).");
strcpy(o[12][2],"There are 12 tree(s) and 2 acorn(s).");
strcpy(o[13][0],"There are 13 tree(s) and 0 acorn(s).");
	int i;
	scanf("%d\n", &t);
	while( t-- )
    {
		dct=acorn=tree=0;
		for( i=65; i<91; i++) a[i][0]=0;
		while( gets(s) && s[0]!='*' )
		{
			a[s[1]][++a[s[1]][0]]=s[3];
			a[s[3]][++a[s[3]][0]]=s[1];
		}
		gets(s);
		dct=(strlen(s)+1)>>1;
		for( i=0; i<dct; i++ )
		{
			c=s[i<<1];
			if(a[c][0]==0)
			{
				acorn++;
				vdot[c]=1;
			}else
				vdot[c]=0;
			dlist[i]=c;
		}
		for( i=0; i<dct; i++ )
			if( !vdot[dlist[i]] ){
				vdot[dlist[i]]=1;
				dfs(dlist[i]);
				tree++;
			}
		puts(o[tree][acorn]);
	}
	return 0;
}
