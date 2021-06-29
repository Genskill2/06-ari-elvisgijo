char* ari(char* s) {
    int lc = 0;
    int wc = 1;
    int sc = 0;
    for (int i = 0; s[i]!='\0'; i++)
    {
       if (isalnum(s[i]))//(s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
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
     float score = (4.71 * ((float) (lc / wc))) + (0.5 * ( (float) (wc / sc))) - 21.43;
    if (round(score)==1.000000)
    {
        return "Kindergarden";
    }
    else if (round(score)==2.000000)
    {
       return "First/Second Grade";
    }
    else if(round(score)==3.000000)
    {
        return "Third Grade";
    }
     else if(round(score)==4.000000)
    {
        return "Fourth Grade";
    }
     else if(round(score)==5.000000)
    {
        return "Fifth Grade";
    }
     else if(round(score)==6.000000)
    {
        return "Sixth Grade";
    }
     else if(round(score)==7.000000)
    {
        return "Seventh Grade";
    }
     else if(round(score)==8.000000)
    {
        return "Eighth Grade";
    }
     else if(round(score)==9.000000)
    {
        return "Ninth Grade";
    }
     else if(round(score)==10.000000)
    {
        return "Tenth Grade";
    }
     else if(round(score)==11.000000)
    {
        return "Eleventh Grade";
    }
     else if(round(score)==12.000000)
    {
        return "Twelfth Grade";
    }
     else if(round(score)==13.000000)
    {
        return "College student";
    }
    else
     { return "Professor";
    }

}
