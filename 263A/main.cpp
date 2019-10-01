#include <iostream>

using namespace std;

int main(){
    int nums1[5];
    for (int i=0;i<5;i++){
        cin>>nums1[i];}
    int nums2[5];
    for (int i=0;i<5;i++){
        cin>>nums2[i];}
    int nums3[5];
    for (int i=0;i<5;i++){
        cin>>nums3[i];}
    int nums4[5];
    for (int i=0;i<5;i++){
        cin>>nums4[i];}
    int nums5[5];
    for (int i=0;i<5;i++){
        cin>>nums5[i];}
   int n=0;
   if (nums1[0]+nums1[1]+nums1[2]+nums1[3]+nums1[4]==1) {n=2;}
   if (nums2[0]+nums2[1]+nums2[2]+nums2[3]+nums2[4]==1) {n=1;}
   if (nums3[0]+nums3[1]+nums3[2]+nums3[3]+nums3[4]==1) {n=0;}
   if (nums4[0]+nums4[1]+nums4[2]+nums4[3]+nums4[4]==1) {n=1;}
   if (nums5[0]+nums5[1]+nums5[2]+nums5[3]+nums5[4]==1) {n=2;}


   if (nums1[0]+nums2[0]+nums3[0]+nums4[0]+nums5[0]==1) {n+=2;}
   if (nums1[1]+nums2[1]+nums3[1]+nums4[1]+nums5[1]==1) {n+=1;}
   if (nums1[2]+nums2[2]+nums3[2]+nums4[2]+nums5[2]==1) {n+=0;}
   if (nums1[3]+nums2[3]+nums3[3]+nums4[3]+nums5[3]==1) {n+=1;}
   if (nums1[4]+nums2[4]+nums3[4]+nums4[4]+nums5[4]==1) {n+=2;}
cout<<n;

return 0;
}
