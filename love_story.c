/*Romeo and Juliet find themselves on the x-axis. Romeo is in the origin (coordinate 0), while Juliet is at coordinate N. The segment between them is divided in M zones, for each zone you know its length (the sum of lengths is equal to N). They start walking towards each other with the same speed, in which zone will they meet?

Standard input

The first line contains 2 integers N and M.

The next line contains M integers representing the lengths of the zones.

Standard output

The first line should contain the index of the zone of their meeting place. If they meet between 2 zones print -1.

Example:

input:

13 3

3 2 8

output:

3

explanation:

The 3 zones are between

(0,3)

(3,5)

(5,13)

They meet at point 6.5 which is in the 3rd zone.*/

#include <stdio.h>

int main(){
	
	int n,m;
	float j=0.0;
	scanf("%d %d",&n,&m);
	int i,a[m];
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
		if(i>0) a[i]+=a[i-1];
	}
	j=(float)n/2.0;

	int ji=-1;
	for(i=0;i<m;i++){
		
		if(i>0){
			if(j>a[i-1]&&j<a[i]){
				ji=i+1;
			}	
		}
		else{
			if(j>0&&j<a[i]){
				ji=i+1;			
			}
		}
	}
	printf("%d",ji);
}
