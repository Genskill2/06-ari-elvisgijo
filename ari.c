
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
     float score = (4.71 * ((float) (lc / wc))) + (0.5 * ( (float) (wc / sc))) - 21.43;
    if (score>1.0 && score<2.0)
    {
        return "Kindergarden";
    }
    else if (score>1.5 && score<3.0)
    {
       return "First/Second Grade";
    }
    else if(score>2.5 && score<4.0)
    {
        return "Third Grade";
    }
     else if(score>3.5 && score<5.0)
    {
        return "Fourth Grade";
    }
     else if(score>4.5 && score<6.0)
    {
        return "Fifth Grade";
    }
     else if(score>5.5 && score<7.0)
    {
        return "Sixth Grade";
    }
     else if(score>6.5 && score<8.0)
    {
        return "Seventh Grade";
    }
     else if(score>7.5 && score<9.0)
    {
        return "Eighth Grade";
    }
     else if(score>8.5 && score<10.0)
    {
        return "Ninth Grade";
    }
     else if(score>9.5 && score<11.0)
    {
        return "Tenth Grade";
    }
     else if(score>10.5 && score<12.0)
    {
        return "Eleventh Grade";
    }
     else if(score>11.5 && score<13.0)
    {
        return "Twelfth Grade";
    }
     else if(score>12.5 && score<14.0)
    {
        return "College student";
    }
    else if(score>=14.0)
     { return "Professor";
    }

}
