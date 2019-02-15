#include<iostream>
using namespace std;
struct a
{
int data;
};
int main()
{
struct a ez[100];
int i,c=0,n,b,t,z;
cout << "Enter the number: ";
cin>>n;
for(i=0;i<100;i++)
{
ez[i].data=0;
}
for(i=0;i<n;i++)
{
cout << "Enter the number: ";
cin>>b;
t=b%100;
if(ez[t].data!=0)
{
for(i=t+1;i<100;i++)
{
if(ez[i].data==0)
{
ez[i].data=b;
c=1;
}
else
{
}
}
}
if(c==0)
cout << "You can't store that element: ";
ez[t].data=b;
}
int g,p=0;
while(1)
{
cout << "Enter the element that has to search: ";
cin>>g;
for(i=0;i<100;i++)
{
if(ez[i].data==g)
{
p=1;
z=i;
i=100;
}
else{
p=0;
}
}
if(p==1)
cout << "Element is present in the hash table: " << "at "
<< z << endl;
else
cout << "Element is absent in the hash table: " << endl;
cout << "Enter the element that has to delete: ";
cin>>g;
for(i=0;i<100;i++)
{
if(ez[i].data==g)
{
ez[i].data=0;
cout << "The element has been deleted: " << endl;
}
}
}
/* for(i=0;i<100;i++)
{
cout << ez[i].data << " ";
}*/
cout << endl;
return 0;
}
