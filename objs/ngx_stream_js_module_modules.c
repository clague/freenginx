
#include <ngx_config.h>
#include <ngx_core.h>

extern ngx_module_t  ngx_stream_js_module;

ngx_module_t *ngx_modules[] = {
    &ngx_stream_js_module,
    NULL
};

char *ngx_module_names[] = {
    "ngx_stream_js_module",
    NULL
};

char *ngx_module_order[] = {
    NULL
};

