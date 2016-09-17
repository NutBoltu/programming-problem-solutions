#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>

 using namespace std;

struct alphabet
{
    int letter;
    bool appear;
    int frequency;

};
alphabet Letter[27];

bool sortbyFreq(const alphabet &a, const  alphabet &b)
{
    if(a.frequency == b.frequency) return a.letter<b.letter;
    return a.frequency>b.frequency;
}

void initializeLetter()
{
        for(int i=1;i<=26;i++)
        {
            Letter[i].letter = i;
            Letter[i].appear = false;
            Letter[i].frequency = 0;
        }
}
 int main()
 {
     int n,AsciValue;
     string line;

     initializeLetter();
     cin>>n;
     getline(cin,line);

     while(n--)
     {
        getline(cin,line);

        for(unsigned int i=0;i<line.length();i++)
        {
            AsciValue = (int) line[i];
            if(AsciValue>=65 && AsciValue<=90) AsciValue-=64;
            else if(AsciValue>=97 && AsciValue<=122) AsciValue-=96;
            if(AsciValue<=26)
            {
                Letter[AsciValue].appear = true;
                Letter[AsciValue].frequency++;
            }
        }

     }
     sort(Letter,Letter+26,sortbyFreq);
     for(int i=0;i<=26;i++)
     {
         if(Letter[i].appear) printf("%c %d\n",Letter[i].letter+64,Letter[i].frequency);
     }
     return 0;
 }
