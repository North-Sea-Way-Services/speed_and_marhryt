#include <iostream>
#include "Aspose.Cells.h"
using namespace Aspose::Cells;
#define EXPECT_TRUE(condition) \
		if (condition) printf("--%s,line:%d -> Ok --\n", __FUNCTION__, __LINE__); \
			 else  printf("--%s,line:%d->>>> Failed!!!! <<<<--\n", __FUNCTION__, __LINE__);
#include "marhryt.h"
#include "Speed.h"
#include <vector>
using namespace std;

int n = 269;
int m = 217;
vector < vector <double> > a(n, vector <double>(m));

int main()
{
	vector <pair<int, int>> csasw; //class_sydna_and_speed_water - csasw
	
	Aspose::Cells::Startup();

	U16String dirPath(u"C:\\tmp\\");
	
	U16String outPath(u"C:\\tmp\\");
	
	U16String sampleData = dirPath + u"bo1.xlsx";
	
	Workbook workbook(sampleData);
	
	Worksheet worksheet = workbook.GetWorksheets().Get(3);
	
	Cells cells = worksheet.GetCells();
	
	double dblVal;

	Enumerator<Cell> enCell = cells.GetEnumerator();
	
	for (size_t i = 0; i < n; i++)
	{
		int z = 0;
		
		while (enCell.MoveNext())
		{
			Cell cell = enCell.GetCurrent();
			dblVal = cell.GetDoubleValue();
			a[i][z]=dblVal;
			++z;
			if (z == m)break;
		}
	
	}
	
	Aspose::Cells::Cleanup();
		
	auto rezult = karsko3_mysgelaniy(a);

	double rezult_led = rezult.second ;

	//Speed_time_to_travel(a ,b , rezult.first, rezult.second); //a,b данные от пользователя

	return 0;
}
