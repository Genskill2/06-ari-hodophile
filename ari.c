#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int noc(string s){
  int noc=0;
  for(int i=0;i<=strlen(s);i++){
    if(isalnum(s[i])>0){
      noc+=1;
    }
  }
  return noc;
}

int words(string s){
  int wc=0;
  for(int i=0;i<=strlen(s);i++){
    if(s[i]==' '){
      wc+=1;
    }
  }
  return wc;
}

int sen(string s){
  int sc=0;
  for(int i=0;i<=strlen(s);i++){
    if(s[i]=='.' || s[i]=='?' || s[i]=='!'){
      sc+=1;
    }
  }
  return sc;
}


string ari(string s){
  float cc,wc,sc,fp,sp;
  double ar;
  cc = noc(s);
  wc = words(s);
  sc = sen(s);
  fp = (4.71*(cc)/(wc));
  sp = (0.5*(wc)/(sc));
  ar=fp+sp-21.43;
  //printf("cc %f\n",cc);
  //printf("wc %f\n",wc);
  //printf("sc %f\n",sc);
  //printf("%f\n",fp);
  //printf("%f\n",sp);
  //printf("%i\n",((int)ar/1)+1);
  switch(((int)ar/1)+1){
  case 1:
    return "Kindergarten";
  case 2:
    return "First/Second Grade";
  case 3:
    return "Third Grade";
  case 4:
    return "Fourth Grade";
  case 5:
    return "Fifth Grade";
  case 6:
    return "Sixth Grade";
  case 7:
    return "Seventh Grade";
  case 8:
    return "Eight Grade";
  case 9:
    return "Ninth Grade";
  case 10:
    return "Tenth Grade";
  case 11:
    return "Eleventh Grade";
  case 12:
    return "Twelfth grade";
  case 13:
      return "College student"; 
  case 14:
    return "Professor";
  }
}
