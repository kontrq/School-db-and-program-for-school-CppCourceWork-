#include "stdafx.h"
#include "MyForm.h"




//#include "stdafx.h"
//#include "pch.h"
//#include <iostream>
//#include <mysql.h>
//#include <string>
//
//using namespace std;
//int qstate;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	MYSQL* conn;
//	MYSQL_ROW row;
//	MYSQL_RES *res;
//	conn = mysql_init(0);
//
//	conn = mysql_real_connect(conn, "localhost", "root", "", "test", 3306, NULL, 0);
//
//	if (conn) {
//		puts("Successful connetion to database!");
//		//string query = "SELECT * FROM rrr";
//		//string query = "SELECT * FROM rrr WHERE class = 1";
//		string query = "INSERT INTO `zzz` (`name`) VALUES ('nismo')";
//
//		const char* q = query.c_str();
//		qstate = mysql_query(conn, q);
//		if (!qstate) {
//			res = mysql_store_result(conn);
//			while (row = mysql_fetch_row(res)) {
//				printf(" ID: %s, Name: %s, Value: %s \n", row[0], row[1], row[2]);
//			}
//
//		}
//		else {
//			cout � "Query failed: " � mysql_error(conn) � endl;
//		}
//	}
//	else {
//		puts("Connection to database has failed!");
//	}
//	return 0;
//}

