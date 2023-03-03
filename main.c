#include <stdio.h>
#include <stdlib.h>
#include "my_log.h"
#include "module_a.h"
#include "module_b.h"
DEFINE_LOG_CATEGORY("main");
void main_init(){
    LOG_ENSURE_REGISTER();
}
int main()
{
    main_init();
    module_a_init();
    module_b_init();
    log_category_enable("main",LOG_DEBUG|LOG_INFO);
    log_category_enable("module_b",LOG_DEBUG|LOG_INFO);
    log_info("Hello world!\n");
    module_a_test();
    module_b_test();
    return 0;
}
