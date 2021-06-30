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
   double score = (4.71 * ( (double)(lc / wc))) + (0.5 * ((double) (wc / sc))) - 21.43;
    if (ceil(score)==1.000000)
    {
        return "Kindergarden";
    }
    else if (ceil(score)==2.000000)
    {
       return "First/Second Grade";
    }
    else if(ceil(score)==3.000000)
    {
        return "Third Grade";
    }
     else if(ceil(score)==4.000000)
    {
        return "Fourth Grade";
    }
     else if(ceil(score)==5.000000)
    {
        return "Fifth Grade";
    }
     else if(ceil(score)==6.000000)
    {
        return "Sixth Grade";
    }
     else if(ceil(score)==7.000000)
    {
        return "Seventh Grade";
    }
     else if(ceil(score)==8.000000)
    {
        return "Eighth Grade";
    }
     else if(ceil(score)==9.000000)
    {
        return "Ninth Grade";
    }
     else if(ceil(score)==10.000000)
    {
        return "Tenth Grade";
    }
     else if(ceil(score)==11.000000)
     {
        return "Eleventh Grade";
    }
     else if(ceil(score)==12.000000)
    {
        return "Twelfth Grade";
    }
     else if(ceil(score)==13.000000)
    {
        return "College student";
    }
    else
     {
        return "Professor";
    }
}
