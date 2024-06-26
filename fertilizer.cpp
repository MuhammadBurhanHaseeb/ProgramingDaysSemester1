#include <iostream>
using namespace std;
main()
{
  int size_bag_pound,cost_bag,area_sq_bag,cost_fertilizer_perpound,cost_fertilizer_persqfoot;
  cout<<"size of bag in pounds";
  cin>>size_bag_pound;
  cout<<"cost of the bag";
  cin >>cost_bag;
  cout<<"area in sq feet that covered by the bag";
  cin>>area_sq_bag;
  cost_fertilizer_perpound = cost_bag/size_bag_pound;
  cout<<"cost of fertilizer per pound is ="<<cost_fertilizer_perpound;
  cost_fertilizer_persqfoot = cost_bag/area_sq_bag;
  cout<<"the cost of fertilizer the area per square foot ="<<cost_fertilizer_persqfoot;
  
  
  
   

 }
