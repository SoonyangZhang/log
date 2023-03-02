#include "module_a.h"
#include "my_log.h"
DEFINE_LOG_CATEGORY("module_a");
void module_a_init(void){
    g_log_ptr=&g_log;
    register_log(g_log_ptr);
}
void module_a_post_init(){}

void module_a_test(void){
    log_info("Hello %s!\n",__FUNCTION__);
}

