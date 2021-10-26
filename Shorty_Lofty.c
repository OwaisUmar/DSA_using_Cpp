#include<stdio.h>
int main()
{
	long shorty_to_lofty, lofty_to_tree;			//to store distance
	long lofty, shorty, tree;						//to store heights
	long dist = shorty_to_lofty + lofty_to_tree;	//total distance
	//scanf("Enter the distance between Shorty and Lofty%f", &shorty_to_lofty);
	long h1 = lofty - shorty;							//height of 1st triangle
	tree = dist * h1 / shorty_to_lofty;
	printf("tree &d", tree);
	return 0;
}

