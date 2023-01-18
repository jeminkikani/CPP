#include<iostram>
using namespace std;
class varius
{
	public:
	varius()
	{
			cout<<"varius shapes";
	}
	varius(int radius)
	{
		int area;
		area =  3.14 *(radius*radius)
		cout<<"circal shap"<<area<<endl;
	}
	varius (int height, int base)
	{
		cout<<"tringal area :-"<<(height *base)/2<<endl;
	}
};
int main()
{
	varius a,b(2),c(2,4);
}
/*output
	varius shapes
	circal shap 12
	tringal shap 4
	
*/