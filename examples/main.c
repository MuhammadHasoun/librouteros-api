#include "librouteros.h"
#include <stdio.h>


int main(){
        struct ros_connection * conn = ros_connect("127.0.0.1",8728);
        int result =  ros_login(conn, "user", "pass");
        printf("%d\n",result); // 0 = fail | 1 = success
        return 0;
}
