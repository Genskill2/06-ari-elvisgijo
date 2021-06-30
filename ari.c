#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

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
   float score = (4.71 * ( (float)(lc / wc))) + (0.5 * ((float) (wc / sc))) - 21.43;
    if (random(score)==1.0)
    {
        return "Kindergarden";
    }
    else if (random(score)==2.0)
    {
       return "First/Second Grade";
    }
    else if(random(score)==3.0)
    {
        return "Third Grade";
    }
     else if(random(score)==4.0)
    {
        return "Fourth Grade";
    }
     else if(random(score)==5.0)
    {
        return "Fifth Grade";
    }
     else if(random(score)==6.0)
    {
        return "Sixth Grade";
    }
     else if(random(score)==7.0)
    {
        return "Seventh Grade";
    }
     else if(random(score)==8.0)
    {
        return "Eighth Grade";
    }
     else if(random(score)==9.0)
    {
        return "Ninth Grade";
    }
     else if(random(score)==10.0)
    {
        return "Tenth Grade";
    }
     else if(random(score)==11.0)
    {
        return "Eleventh Grade";
    }
     else if(random(score)==12.0)
    {
        return "Twelfth Grade";
    }
     else if(random(score)==13.0)
    {
        return "College student";
    }
    else
     {
        return "Professor";
    }
}
