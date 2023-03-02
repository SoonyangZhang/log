#include "module_b.h"
#include "my_log.h"
DEFINE_LOG_CATEGORY_EXTERN("module_a");
void module_b_init(void){

}
void module_b_post_init(void){
    g_log_ptr=fecth_log("module_a");
}
void module_b_test(void){
    log_info("Hello %s!\n",__FUNCTION__);
}
