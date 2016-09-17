  #include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cstring>

using namespace std;

struct playerInfo
{
    char name[50];
    int attackingAbility;
    int defendingAbility;
};
bool comparebyAttack(const playerInfo &a,const playerInfo &b)
{
    if(a.attackingAbility==b.attackingAbility)
    {
        if(a.defendingAbility == b.defendingAbility) return (strcmp(a.name,b.name)<0);
        return a.defendingAbility < b.defendingAbility;
    }
    return a.attackingAbility>b.attackingAbility;

}
bool ComparebyName(const playerInfo &a,const playerInfo &b)
{
     return (strcmp(a.name,b.name)<0);
	
}

int main()
{

    int t,c=1;
    cin>>t;
    while(t--)
    {
        vector<playerInfo>  player;
        playerInfo temp;
        for(int i=0;i<10;i++)
        {
            cin>>temp.name>>temp.attackingAbility>>temp.defendingAbility;
            player.push_back(temp);
        }
        sort(player.begin(),player.end(),comparebyAttack);
		 sort(player.begin(),player.begin()+5,ComparebyName); 
		
     
        printf("Case %d:\n",c++);
        printf("(%s, %s, %s, %s, %s)\n",player[0].name,player[1].name,player[2].name,player[3].name,player[4].name);
        printf("(%s, %s, %s, %s, %s)\n",player[5].name,player[6].name,player[7].name,player[8].name,player[9].name);

        player.clear();
    }
    return 0;
}
