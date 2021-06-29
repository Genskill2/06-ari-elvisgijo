char* ari(char* s) {
    int lc = 0;
    int wc = 1;
    int sc = 0;
    for (int i = 0; i < s[i]!='\0'; i++)
    {
       if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
       {
           lc++;
       }
       else if (s[i] == ' ')
       {
           wc++;
       }
       else if (s[i] == '.' || s[i] == '!' || s[i] == '?')
       {
           sc++;
       }
    }
     float score = (4.71 * ((float) lc / (float) wc)) + (0.5 * ( (float) wc / (float) sc)) - 21.43;
    if (score<=1.000000 && score>=1.999999)
    {
        return "Kindergarden";
    }
    else if (score<=2.000000 && score>=2.999999)
    {
       return "First/Second Grade";
    }
    else if(score<=3.000000 && score>=3.999999)
    {
        return "Third Grade";
    }
     else if(score<=4.000000 && score>=4.999999)
    {
        return "Fourth Grade";
    }
     else if(score<=5.000000 && score>=5.999999)
    {
        return "Fifth Grade";
    }
     else if(score<=6.000000 && score>=6.999999)
    {
        return "Sixth Grade";
    }
     else if(score<=7.000000 && score>=7.999999)
    {
        return "Seventh Grade";
    }
     else if(score<=8.000000 && score>=8.999999)
    {
        return "Eighth Grade";
    }
     else if(score<=9.000000 && score>=9.999999)
    {
        return "Ninth Grade";
    }
     else if(score<=10.000000 && score>=10.999999)
    {
        return "Tenth Grade";
    }
     else if(score<=11.000000 && score>=11.999999)
    {
        return "Eleventh Grade";
    }
     else if(score<=12.000000 && score>=12.999999)
    {
        return "Twelfth Grade";
    }
     else if(score<=13.000000 && score>=13.999999)
    {
        return "College student";
    }
    else
     { return "Professor";
    }

}
