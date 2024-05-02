// this is merge Sorted array
// i sove this problem my self
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int> & num1,int m,vector<int> &nums2,int n) {

        if (m >= 1 && n >= 1) {
            int i = 0;
            int j = 0;
            while (i < m && j < n) {
                if (num1[i] < nums2[j]) {
                    printf("%d ", num1[i]);
                    i++;

                } else if (num1[i] > nums2[j]) {
                    printf("%d ", nums2[j]);
                    j++;
                } else if (num1[i] == nums2[j]) {
                    printf("%d ", nums2[j]);
                    j++;
                }
            }
            while (i < m) {
                printf("%d", num1[i]);
                i++;
            }
            while (j < m) {
                printf("%d ", nums2[j]);
                j++;
            }

        }
        else{
            if(m>n)
            {
                for(int i=0;i < m ;i++ )
                {
                    printf("%d ",num1[i]);
                }
            }else{
                for(int i=0;i < n ;i++ )
                {
                    printf("%d ",nums2[i]);
                }
            }
        }
    }
};

int main()
{
    int m = 1;
    int n = 0;

    vector<int> num1{1};
    vector<int> num2{};
    Solution obj;
    obj.merge(num1,m,num2,n);
    return 0;
}