#include "module_a.h"
#include "my_log.h"
DEFINE_LOG_CATEGORY("main");
void module_a_init(void){
    LOG_ENSURE_REGISTER();
}
void module_a_post_init(){}

void module_a_test(void){
    log_info("Hello %s!\n",__FUNCTION__);
}

