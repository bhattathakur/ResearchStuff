#include <iostream>
using namespace std;
void  volume(float l,float b,float h){
float V=l*b*h;
cout<<V<<'\t'<<" cubic meter"<<endl;
}
int main(){

volume(2,5,10);
volume(4,5.6,34.3);

return 0;
}