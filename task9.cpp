# include <iostream>
using namespace std;
main()
{
    int x , y, h;
    cout<<"enter the x cordinate";
    cin>>x;
    cout<<"enter the y cordinate";
    cin>>y;
    cout<<"enter the h cordinate";
    cin>>h;
    // bottom horizontal straight line condition
    if ((x>=0 && x<=3*h) && (y ==0))
    {
    cout<<"the point is on the border";
    }
    // left small vertical straight line condition
    else if (x==0   && ( y >=0 && y<=h))
    {
    cout<<"the point is on the border";
    }
    // right small vertical straight line condition
    else if (x==3*h  &&( y >=0 && y<=h))
    {
    cout<<"the point is on the border";
    }
    // horizontal left line side condition 
    else  if ((x>=0 && x<=h) && (y ==h))
    {
    cout<<"the point is on the border";
    }
    // horizontal right  line side condition 
    else if ((x>2*h && x<=3*h) && (y ==h))
    {
    cout<<"the point is on the border";
    }
    // top  horizontal   line side condition
   else  if ((x>=h && x<=2*h) && y ==4*h)
   {
    cout<<"the point is on the border";
   }
    // points outside from the top or bottom of  the to horizonyal lines
   else if (y < 0 || y> 4*h)
   { 
    cout<<"the point is oustside the block";
   }
    // points outside from the left or right side of small vertical lines
   else if (x<0 || x > 3*h)
   {
    cout<<"the point is oustside the block";
   }
    // points outside from the left  side of big or small   vertical lines 
   else if ( (x<h) && (y > h))
   {
    cout<<"the point is oustside the block";
   }
    //  points outside from the  right side of big and small vertical lines
   else if ((x>2*h) && (y > h))
   {
    cout<<"the point is oustside the block";
   }
   // point in side the bottom horizontal line block
   else if (( x>0 && x< 3*h) && (y>0 && y < h))
   {
    cout<<"the point is inside  the block";
   }
    // point inside the vertical straight blocks
   else if ((x>h && x<2*h ) && (y>0 && y < 4*h))
   {
    cout<<"the point is inside  the block";
   }
  
   


    
}