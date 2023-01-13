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
    

1. how nginx parse config file
2. who nginx listen request
3. data structure of nginx
4. 


PCRE: Perl Compatible Regular Expressions 

apt install gdb gdb-multiarch
