#include <vector>
#include <EasyBMP.h>
#include <EasyBMP_DataStructures.h>
#include <EasyBMP_BMP.h>
#include <EasyBMP_VariousBMPutilities.h>

using namespace std;

class BMPwriter{
	private:

	vector<int> pixelX;
	vector<int> pixelY;


	public:

	BMPwriter(){}
	BMP* write(BMP* arc, char let, int arcx, int arcy);
	int getWidth(char a);
	BMP* blacken(BMP*arc, int arcx, int arcy);
};
