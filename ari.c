#include<cs50.h>
#include<string.h>
#include<ctype.h>

string ari (string s) {
    int lc = 0;
    int wc = 1;
    int sc = 0;
    for (int i = 0;i < strlen(s); i++)
    {
       if (isalnum(s[i]))
       {
           lc+=1;
       }
       else if (s[i] == ' ')
       {
           wc+=1;
       }
       else if (s[i] == '.' || s[i] == '!' || s[i] == '?')
       {
           sc+=1;
       }
    }
   int score = (4.71 * ( (lc / wc))) + (0.5 * ( (wc / sc))) - 21.43;
    if (score==1)
    {
        return "Kindergarden";
    }
    else if (score==2)
    {
       return "First/Second Grade";
    }
    else if(score==3)
    {
        return "Third Grade";
    }
     else if(score==4)
    {
        return "Fourth Grade";
    }
     else if(score==5)
    {
        return "Fifth Grade";
    }
     else if(score==6)
    {
        return "Sixth Grade";
    }
     else if(score==7)
    {
        return "Seventh Grade";
    }
     else if(score==8)
    {
        return "Eighth Grade";
    }
     else if(score==9)
    {
        return "Ninth Grade";
    }
     else if(score==10)
    {
        return "Tenth Grade";
    }
     else if(score==11)
    {
        return "Eleventh Grade";
    }
     else if(score==12)
    {
        return "Twelfth Grade";
    }
     else if(score==13)
    {
        return "College student";
    }
    else
     {
        return "Professor";
    }
}
