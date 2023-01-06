#include <stdio.h>
#include <string.h>
#include <stdlib.h>
long long int binoct_dec(long long int num , int base ){
    int i,p,s;
    p=1;i=1;s=0;
    while(num>0){
            if(num%10>base)
            {
                return -1;
            }ß
        s=s+(num%10)*p ;
        p=p*base ;
        num=num/10;
        i++;}
        return s;}
long long int dec_binoct(long long int num, int base){
    int i,s,p,r;
    s=0;r=1;
    while(num>0){
        p=(num%base)*r;
        num=num/base;
            s=s+p;
            r=r*10;
        i++;}

        return s ; }
void dec_hex( long long int num){
    int i,t,m,j;
   long long int r;
    char c[50],b[50];
    i=0;
    while(num>0){
        r=num%16;
        if(r<10)
            c[i]=r+48;
        else
            c[i]=r+55;
        num=num/16;
        i++;}
        m=0;
        t=strlen(c);
        b[t]='\0';
        for(j=t-1;j>=0;j--){
            b[m++]=c[j];}
            b[j]='\0';
          printf(" Resultat de la conversion : %s \n", b);}
long long int hex_dec(char hex[50]){
    long long decimal = 0, base = 1;
    int i = 0, value, length;
    /* Get hexadecimal value from user */
    length = strlen(hex);
    for(i = length--; i >= 0; i--)
    {
        if(hex[i] >= '0' && hex[i] <= '9')
        {
            decimal += (hex[i] - 48) * base;
            base *= 16;
        }
        else if(hex[i] >= 'A' && hex[i] <= 'F')
        {
            decimal += (hex[i] - 55) * base;
            base *= 16;
        }
        else if(hex[i] >= 'a' && hex[i] <= 'f')
        {
            decimal += (hex[i] - 87) * base;
            base *= 16;
        } }
        return decimal;}
long long int bin_oct(long long int num){
long long int n;
n=binoct_dec(num,2);
return dec_binoct(n,8);}

long long int oct_bin(long long int num){
long long int n;
   n=binoct_dec(num,8);
return dec_binoct(n,2);}

void bin_hex(long long int num){
long long int n;
n=binoct_dec(num,2);
dec_hex(n);}
void oct_hex(long long int num){
long long int n;
n=binoct_dec(num,8);
dec_hex(n);}

long long int hex_bin(char f[50]){
long long int n;
n=hex_dec(f);
return dec_binoct(n,2);}
long long int hex_oct(char f[50]){
long long int n;
n=hex_dec(f);
return dec_binoct(n,8);}
