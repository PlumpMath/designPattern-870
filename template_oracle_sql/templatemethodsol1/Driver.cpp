#include"iostream"
#include"OracleDatabaseQuery.h"
#include"SQLServerDatabaseQuery.h"
#include"stdio.h"


class Driver
{
private:
	OracleDb Odb;
	SQLDb Sdb;
public:
	void connectToDb(int choice_db)
	{
		switch (choice_db)
		{
		case 1:Odb.queryDB();
			break;
		case 2:Sdb.queryDB();
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