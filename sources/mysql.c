#include "/usr/include/mysql/my_global.h"
#include "/usr/include/mysql/mysql.h"

void mysql_connect(){

    MYSQL *conn;

    conn = mysql_init(NULL);

    if(conn == NULL){
        printf("Error %u: %s\n", mysql_errno(conn), mysql_error(conn));
        exit(1);
    }

    if(mysql_real_connect(conn, "localhost", "root", "test", NULL, 0, NULL, 0) == NULL){
        printf("Error %u: %s\n", mysql_errno(conn), mysql_error(conn));
        exit(1);
    }

    if(mysql_query(conn, "create database if not exists testdb")){
        printf("Error %u: %s\n", mysql_errno(conn), mysql_error(conn));
        exit(1);
    }

    mysql_close(conn);
}
