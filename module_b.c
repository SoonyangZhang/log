#include "module_b.h"
#include "my_log.h"
DEFINE_LOG_CATEGORY("module_b");
void module_b_init(void){
    LOG_ENSURE_REGISTER();
}
void module_b_test(void){
    log_info("Hello %s!\n",__FUNCTION__);
}
