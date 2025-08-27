#include
using namespace std;

int insert_value(int num[],int size1, int terget)
{
    int left,right,mid;
    left=0,right=size1;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(num[mid]==terget)
        {
            return mid;
        }
        else if(terget>num[mid])
        {
            left=mid+1;
        }
        else
        {
        right=mid-1;
        }

    }
   return left;

}
int main()
{

   int num[]={1,3,5,6};
   int size1=sizeof(num)/sizeof(num[0]);

     int terget=5;

  std:: cout << "Output: "<<insert_value(num,size1,terget)<<std::endl;
return 0;
}
