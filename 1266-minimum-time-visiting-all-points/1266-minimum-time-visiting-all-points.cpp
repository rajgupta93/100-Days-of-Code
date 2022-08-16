

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& a) 
    {
       int z = 0;
       
for(int i=0;i<a.size()-1;i++)
{
     int x= min(abs(a[i+1][0]-a[i][0]), abs(a[i+1][1]- a[i][1]));
    int rem = 0;
    
    // if( x != 0 ) {
        if(abs(a[i+1][0]-a[i][0]) > abs(a[i+1][1]- a[i][1]) )
         rem  = min (abs(a[i+1][0] - (a[i][0]+x)), abs(a[i+1][0] - (a[i][0]-x))); 
    else
        rem  = min (abs(a[i+1][1] - (a[i][1]+x)), abs(a[i+1][1] - (a[i][1]-x))); 
     
        // } 
cout << x <<" " <<" "<<  rem;
    z= z+ rem + x;
    
}

return z;



 //  abs(a[1][1] - a[1][0]))
      
 //    [[1,1],[3,4],[-1,0]] 
       
      

    
    }
};

/*
points = [[1,1],[3,4],[-1,0]]
move diagonally sqrt(2) units
1,1
2,2
3,3
3,4
a[0][0]= 1
a[0][1] = 1
3,3
a[1][0] =3
a[1][1] =4
2+1
3,3 
 3,2 
4 -  1 
 

min(a[1][0]-a[0][0], a[1][1]- a[0][1]) +  abs(a[1][1] - a[1][0]))
min(4 - 1, 3-1)  +       (4 - 3)
3 - 1 + 4 - 3 =  4 - 1
2,3
1,2
0,1
-1,0


-1,0

*/