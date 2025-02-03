/*Escribe un programa que muestre por pantalla todos los números de 4 cifras 
en los cuales se cumpla la condición de que la suma de las cifras pares sea 
                igual a la suma de las cifras impares*/
#include<stdio.h>
int main(void)
{
    int i,m,d,c,u,sumpares,sumimpares;
    sumimpares=0;
    sumpares=0;
    for (i=1000; i<=9999; i++)
    {
        m=i/1000;
        d=(i-m*1000)/100;
        c=(i-m*1000-d*100)/10;
        u=i-m*1000-d*100-c*10;
        if (m%2==0)
        {
        if (d%2==0)
            {
            if (c%2==0)
                {
                    if (u%2!=0)
                    {
                        sumpares=d+c+m;
                        if (sumpares==u) printf(" %d",i);
                    }
                    
                }
                
            }
            
        }
        
        if (m%2==0)
        {
        if (d%2==0)
            {
            if (c%2!=0)
                {
                    if (u%2!=0)
                    {
                        sumpares=d+m;
                        sumimpares=c+u;
                        if (sumpares==sumimpares) printf(" %d",i);
                    }
                    
                }
                
            }
            
        }
        
        if (m%2==0)
        {
        if (d%2==0)
            {
            if (c%2!=0)
                {
                    if (u%2==0)
                    {
                        sumpares=m+d+u;
                        if (sumpares==c) printf(" %d",i);
                    }
                    
                }
                
            }
            
        }

        if (m%2==0)
        {
            if (d%2!=0)
             {
                if (c%2==0)
                  {
                    if (u%2==0)
                    {
                        sumpares=m+c+u;
                        if (sumpares==d) printf(" %d",i);
                    }
                    
                 }
                
            }
            
        }
        if (m%2!=0)
        {
            if (d%2==0)
             {
                if (c%2==0)
                  {
                    if (u%2==0)
                    {
                        sumpares=d+c+u;
                        if (sumpares==m) printf(" %d",i);
                    }
                    
                 }
                
            }
            
        }
        if (m%2==0)
        {
            if (d%2!=0)
             {
                if (c%2!=0)
                  {
                    if (u%2==0)
                    {
                        sumpares=m+u;
                        sumimpares=d+c;
                        if (sumpares==sumimpares) printf(" %d",i);
                    }
                    
                 }
                
            }
            
        }
        if (m%2==0)
        {
            if (d%2!=0)
             {
                if (c%2==0)
                  {
                    if (u%2!=0)
                    {
                        sumpares=m+c;
                        sumimpares=d+u;
                        if (sumpares==sumimpares) printf(" %d",i);
                    }
                    
                 }
                
            }
            
        }
        if (m%2!=0)
        {
            if (d%2==0)
             {
                if (c%2==0)
                  {
                    if (u%2!=0)
                    {
                        sumpares=d+c;
                        sumimpares=m+u;
                        if (sumpares==sumimpares) printf(" %d",i);
                    }
                    
                 }
                
            }
            
        }
        if (m%2!=0)
        {
            if (d%2!=0)
             {
                if (c%2==0)
                  {
                    if (u%2==0)
                    {
                        sumpares=m+d;
                        sumimpares=c+u;
                        if (sumpares==sumimpares) printf(" %d",i);
                    }
                    
                 }
                
            }
            
        }
        if (m%2!=0)
        {
            if (d%2==0)
             {
                if (c%2!=0)
                  {
                    if (u%2==0)
                    {
                        sumpares=d+u;
                        sumimpares=m+c;
                        if (sumpares==sumimpares) printf(" %d",i);
                    }
                    
                 }
                
            }
            
        }
    }
    return 0;
}