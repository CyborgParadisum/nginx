## study
- https://github.com/dunwu/nginx-tutorial
- https://github.com/taobao/nginx-book

## cmake config
- https://github.com/Toudsour/nginx_cmake


```bash
./confiture-test.sh
make mkdir

```


[main](src/core/nginx.c#196)
[modules](objs/ngx_modules.c)
[config](src/core/ngx_conf_file.c#ngx_conf_parse)

listen:
    src/core/ngx_cycle.c:618
    src/core/ngx_connection.c:657

parse config file:    
    src/core/ngx_conf_file.c#ngx_conf_handler

commands:
    - core:
        [ngx_core_commands](src/core/nginx.c#ngx_core_commands)
        [ngx_core_conf_t](src/core/ngx_cycle.h#ngx_core_conf_t)
    - event:
        [](src/event/ngx_event.c#ngx_event_core_commands)
    - http:
        [ngx_http_core_module.c](src/http/ngx_http_core_module.c#ngx_http_core_commands) 

modules:
    modules include commands
    [](objs/ngx_modules.c)

event:
    src/event/ngx_event.c:248

http:
    src/http/ngx_http_request.c:1526
    src/http/ngx_http_request.c:2033
    src/http/ngx_http_core_module.c:2499
    src/http/ngx_http_core_module.c:1831
    src/http/modules/ngx_http_headers_filter_module.c:248
    src/os/unix/ngx_darwin_sendfile_chain.c:31
    src/os/unix/ngx_darwin_sendfile_chain.c:135

1. how nginx parse config file
2. who nginx listen request
3. data structure of nginx
4. 


PCRE: Perl Compatible Regular Expressions 

apt install gdb gdb-multiarch
