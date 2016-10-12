#include"iostream"
#include"OracleDatabaseQuery.h"
#include"SQLServerDatabaseQuery.h"
#include"maintainQuery.h"
#include"stdio.h"


class Driver
{
private:

	MaintainQuery *mQ1,*mQ2;
	

public:
	Driver()
	{
		mQ1 = new OracleDb();
		mQ2 = new SQLDb();
	}

	void connectToDb(int choice_db)
	{
		switch (choice_db)
		{
		case 1:mQ1->queryDB();
			break;
		case 2:mQ2->queryDB();
			break;
		default:std:: cout<< "enter correct db details";
		}

	}
};
int main()
{
	Driver dr;
	dr.connectToDb(1);
	dr.connectToDb(2);
	getchar();
	return 0;
}