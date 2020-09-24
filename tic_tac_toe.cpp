#include <iostream>
using namespace std;

int
main () 
{
  
int arr[3][3] = { {0, 0, 0}, 
{0, 0, 0}, 
{0, 0, 0}
  };
  
int count = 0;
  
int ch1, ch2;
  
int row, col;
  
for (int i = 1; i <= 9; i++)
    
    {
      
if (count == 0)
	
	{
	  
cout << "PLAYER 1";
	  
cout << "\n enter position";
	  
cin >> ch1;
	  
switch (ch1)
	    
	    {
	    
case 1:
	      
arr[0][0] = 1;
	      
count = 1;
	      
for (row = 0; row < 3; row++)
		
		{
		  
 
for (col = 0; col < 3; col++)
		    
		    {
		      
cout << arr[row][col] << " ";
		    
 
}
		  
cout << endl;
		
}
	      
break;
	    
case 2:
	      
arr[0][1] = 1;
	      
count = 1;
	      
for (row = 0; row < 3; row++)
		
		{
		  
 
for (col = 0; col < 3; col++)
		    
		    {
		      
cout << arr[row][col] << " ";
		    
 
}
		  
cout << endl;
		
}
	      
break;
	    
case 3:
	      
arr[0][2] = 1;
	      
count = 1;
	      
for (row = 0; row < 3; row++)
		
		{
		  
 
for (col = 0; col < 3; col++)
		    
		    {
		      
cout << arr[row][col] << " ";
		    
 
}
		  
cout << endl;
		
}
	      
break;
	    
case 4:
	      
arr[1][0] = 1;
	      
count = 1;
	      
for (row = 0; row < 3; row++)
		
		{
		  
 
for (col = 0; col < 3; col++)
		    
		    {
		      
cout << arr[row][col] << " ";
		    
 
}
		  
cout << endl;
		
}
	      
break;
	    
case 5:
	      
arr[1][1] = 1;
	      
count = 1;
	      
for (row = 0; row < 3; row++)
		
		{
		  
 
for (col = 0; col < 3; col++)
		    
		    {
		      
cout << arr[row][col] << " ";
		    
 
}
		  
cout << endl;
		
}
	      
break;
	    
case 6:
	      
arr[1][2] = 1;
	      
count = 1;
	      
for (row = 0; row < 3; row++)
		
		{
		  
 
for (col = 0; col < 3; col++)
		    
		    {
		      
cout << arr[row][col] << " ";
		    
 
}
		  
cout << endl;
		
}
	      
break;
	    
case 7:
	      
arr[2][0] = 1;
	      
count = 1;
	      
for (row = 0; row < 3; row++)
		
		{
		  
 
for (col = 0; col < 3; col++)
		    
		    {
		      
cout << arr[row][col] << " ";
		    
 
}
		  
cout << endl;
		
}
	      
break;
	    
case 8:
	      
arr[2][1] = 1;
	      
count = 1;
	      
for (row = 0; row < 3; row++)
		
		{
		  
 
for (col = 0; col < 3; col++)
		    
		    {
		      
cout << arr[row][col] << " ";
		    
 
}
		  
cout << endl;
		
}
	      
break;
	    
case 9:
	      
arr[2][2] = 1;
	      
count = 1;
	      
for (row = 0; row < 3; row++)
		
		{
		  
 
for (col = 0; col < 3; col++)
		    
		    {
		      
cout << arr[row][col] << " ";
		    
 
}
		  
cout << endl;
		
}
	      
break;
	    
default:
	      cout << "\n INVALID ENTRY";
	    
}
	
}
      
else
	
	{
	  
cout << "\n PLAYER 2";
	  
cout << "\n enter position";
	  
cin >> ch2;
	  
switch (ch2)
	    
	    {
	    
case 1:
	      
arr[0][0] = 2;
	      
count = 0;
	      
for (row = 0; row < 3; row++)
		
		{
		  
 
for (col = 0; col < 3; col++)
		    
		    {
		      
cout << arr[row][col] << " ";
		    
 
}
		  
cout << endl;
		
}
	      
break;
	    
case 2:
	      
arr[0][1] = 2;
	      
count = 0;
	      
for (row = 0; row < 3; row++)
		
		{
		  
 
for (col = 0; col < 3; col++)
		    
		    {
		      
cout << arr[row][col] << " ";
		    
 
}
		  
cout << endl;
		
}
	      
break;
	    
case 3:
	      
arr[0][2] = 2;
	      
count = 0;
	      
for (row = 0; row < 3; row++)
		
		{
		  
 
for (col = 0; col < 3; col++)
		    
		    {
		      
cout << arr[row][col] << " ";
		    
 
}
		  
cout << endl;
		
}
	      
break;
	    
case 4:
	      
arr[1][0] = 2;
	      
count = 0;
	      
for (row = 0; row < 3; row++)
		
		{
		  
 
for (col = 0; col < 3; col++)
		    
		    {
		      
cout << arr[row][col] << " ";
		    
 
}
		  
cout << endl;
		
}
	      
break;
	    
case 5:
	      
arr[1][1] = 2;
	      
count = 0;
	      
for (row = 0; row < 3; row++)
		
		{
		  
 
for (col = 0; col < 3; col++)
		    
		    {
		      
cout << arr[row][col] << " ";
		    
 
}
		  
cout << endl;

}		  
 
break;
	    
case 6:
		  
arr[1][2] = 2;
		  
count = 0;
		  
for (row = 0; row < 3; row++)
		    
		    {
		      
 
for (col = 0; col < 3; col++)
			
			{
			  
cout << arr[row][col] << " ";
			
 
}
		      
cout << endl;
		    
}
		  
break;
	    
case 7:
		  
arr[2][0] = 2;
		  
count = 0;
		  
for (row = 0; row < 3; row++)
		    
		    {
		      
 
for (col = 0; col < 3; col++)
			
			{
			  
cout << arr[row][col] << " ";
			
 
}
		      
cout << endl;
		    
}
		  
break;
	    
case 8:
		  
arr[2][1] = 2;
		  
count = 0;
		  
for (row = 0; row < 3; row++)
		    
		    {
		      
 
for (col = 0; col < 3; col++)
			
			{
			  
cout << arr[row][col] << " ";
			
 
}
		      
cout << endl;
		    
}
		  
break;
	    
case 9:
		  
arr[2][2] = 2;
		  
count = 0;
		  
for (row = 0; row < 3; row++)
		    
		    {
		      
 
for (col = 0; col < 3; col++)
			
			{
			  
cout << arr[row][col] << " ";
			
 
}
		      
cout << endl;
		    
}
		  
break;
	    
default:
		  cout << "INVALID ENTRY";
		
}
	    
}
	  
if (arr[0][0] == 1 && arr[1][0] == 1 && arr[2][0] == 1)
	    
	    {
	      cout << "\n PLAYER 1 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[0][1] == 1 && arr[1][1] == 1 && arr[2][1] == 1)
	    
	    {
	      cout << "\n PLAYER 1 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[0][2] == 1 && arr[1][2] == 1 && arr[2][2] == 1)
	    
	    {
	      cout << "\n PLAYER 1 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[0][0] == 1 && arr[0][1] == 1 && arr[0][2] == 1)
	    
	    {
	      cout << "\n PLAYER 1 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[1][0] == 1 && arr[1][1] == 1 && arr[1][2] == 1)
	    
	    {
	      cout << "\n PLAYER 1 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[2][0] == 1 && arr[2][1] == 1 && arr[2][2] == 1)
	    
	    {
	      cout << "\n PLAYER 1 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[0][0] == 1 && arr[1][1] == 1 && arr[2][2] == 1)
	    
	    {
	      cout << "\n PLAYER 1 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[0][2] == 1 && arr[1][1] == 1 && arr[2][0] == 1)
	    
	    {
	      cout << "\n PLAYER 1 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[0][0] == 2 && arr[1][0] == 2 && arr[2][0] == 2)
	    
	    {
	      cout << "\n PLAYER 2 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[0][1] == 2 && arr[1][1] == 2 && arr[2][1] == 2)
	    
	    {
	      cout << "\n PLAYER 2 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[0][2] == 2 && arr[1][2] == 2 && arr[2][2] == 2)
	    
	    {
	      cout << "\n PLAYER 2 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[0][0] == 2 && arr[0][1] == 2 && arr[0][2] == 2)
	    
	    {
	      cout << "\n PLAYER 2 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[1][0] == 2 && arr[1][1] == 2 && arr[1][2] == 2)
	    
	    {
	      cout << "\n PLAYER 2 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[2][0] == 2 && arr[2][1] == 2 && arr[2][2] == 2)
	    
	    {
	      cout << "\n PLAYER 2 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[0][0] == 2 && arr[1][1] == 2 && arr[2][2] == 2)
	    
	    {
	      cout << "\n PLAYER 2 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[0][2] == 2 && arr[1][1] == 2 && arr[2][0] == 2)
	    
	    {
	      cout << "\n PLAYER 2 WINS";
	      
count = 3;
	      
return 1;
	    
}
	
}
      
if (count != 3)
	
	{
	  
if (arr[0][0] == 1 && arr[1][0] == 1 && arr[2][0] == 1)
	    
	    {
	      cout << "\n PLAYER 1 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[0][1] == 1 && arr[1][1] == 1 && arr[2][1] == 1)
	    
	    {
	      cout << "\n PLAYER 1 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[0][2] == 1 && arr[1][2] == 1 && arr[2][2] == 1)
	    
	    {
	      cout << "\n PLAYER 1 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[0][0] == 1 && arr[0][1] == 1 && arr[0][2] == 1)
	    
	    {
	      cout << "\n PLAYER 1 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[1][0] == 1 && arr[1][1] == 1 && arr[1][2] == 1)
	    
	    {
	      cout << "\n PLAYER 1 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[2][0] == 1 && arr[2][1] == 1 && arr[2][2] == 1)
	    
	    {
	      cout << "\n PLAYER 1 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[0][0] == 1 && arr[1][1] == 1 && arr[2][2] == 1)
	    
	    {
	      cout << "\n PLAYER 1 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[0][2] == 1 && arr[1][1] == 1 && arr[2][0] == 1)
	    
	    {
	      cout << "\n PLAYER 1 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[0][0] == 2 && arr[1][0] == 2 && arr[2][0] == 2)
	    
	    {
	      cout << "\n PLAYER 2 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[0][1] == 2 && arr[1][1] == 2 && arr[2][1] == 2)
	    
	    {
	      cout << "\n PLAYER 2 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[0][2] == 2 && arr[1][2] == 2 && arr[2][2] == 2)
	    
	    {
	      cout << "\n PLAYER 2 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[0][0] == 2 && arr[0][1] == 2 && arr[0][2] == 2)
	    
	    {
	      cout << "\n PLAYER 2 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[1][0] == 2 && arr[1][1] == 2 && arr[1][2] == 2)
	    
	    {
	      cout << "\n PLAYER 2 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[2][0] == 2 && arr[2][1] == 2 && arr[2][2] == 2)
	    
	    {
	      cout << "\n PLAYER 2 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[0][0] == 2 && arr[1][1] == 2 && arr[2][2] == 2)
	    
	    {
	      cout << "\n PLAYER 2 WINS";
	      
count = 3;
	      
return 1;
	    
}
	  
if (arr[0][2] == 2 && arr[1][1] == 2 && arr[2][0] == 2)
	    
	    {
	      cout << "\n PLAYER 2 WINS";
	      
count = 3;
	      
return 1;
	    
}
	
}
      
      
	
	
if(count==1||count==2||count==3)	  
{cout << "\n DRAW MATCH!";}
	


      
return 0;
    
}
  



