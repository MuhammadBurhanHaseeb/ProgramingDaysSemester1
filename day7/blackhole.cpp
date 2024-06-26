#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std ;

int const l = 5 ;

void displayworld( char world[][l] ) ;
void swap( char world[][l] ) ;
main()
{
    char world[5][5]={ {'_','#','#','_','#'} , {'#','_','_','#','_'} , { '_','#','_','_','_'} , { '#','_','#','_','#' } , {'#','_','_','_','_' } };
    displayworld( world ) ;
    Sleep( 500) ;
    while( true )
    {
         swap( world) ;
             if (GetAsyncKeyState(VK_SPACE) != 0)
            {
                break;
            }

    }

}

void displayworld( char  world[][l] )
{
        for(int m = 0 ; m < 5 ; m++ )
        {
             for( int z = 0 ; z < 5 ; z++ )
            {
                 cout<< world[m][z] <<"  ";
            }
             cout<<endl;
        }

}


void swap( char world[][l] )
{
             for(int m = 0 ; m < 5 ; m++ )
             {
                 for( int z = 0 ; z < 5 ; z++ )
                 {
                     if( m+1 < 5 )
                     {
                     char fir = world[m+1][z] ;
                     world[m+1][z] = world[m][z] ;
                     world[m][z] = fir ;

                     // cout<< world[m][z] <<"  ";
                     }
                     else
                     {
                        char fir = world[0][z] ;
                        world[0][z] = world[m][z] ;
                        world[m][z] = fir ; 
                     }
                 }
                 system("cls") ;
                 displayworld( world ) ;
                 Sleep(2500) ;
             cout<<endl;
             }

}