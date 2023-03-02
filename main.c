#include <stdio.h>
#include <stdlib.h>
#include "my_log.h"
#include "module_a.h"
#include "module_b.h"
DEFINE_LOG_CATEGORY("main");
void main_init(){
    g_log_ptr=&g_log;
    register_log(g_log_ptr);
}
void main_post_init(){}
int main()
{
    main_init();
    module_a_init();
    module_b_init();

    main_post_init();
    module_a_post_init();
    module_b_post_init();
    log_category_enable("main",LOG_DEBUG|LOG_INFO);
    log_category_enable("module_a",LOG_DEBUG|LOG_INFO);
    log_info("Hello world!\n");
    module_a_test();
    module_b_test();
    return 0;
}
