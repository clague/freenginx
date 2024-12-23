#define NGX_CONFIGURE " --add-dynamic-module=modules/echo-nginx-module --add-dynamic-module=modules/headers-more-nginx-module --add-dynamic-module=modules/lua-nginx-module --add-dynamic-module=modules/memc-nginx-module --add-dynamic-module=modules/ModSecurity-nginx --add-dynamic-module=modules/nchan --add-dynamic-module=modules/nginx-dav-ext-module --add-dynamic-module=modules/nginx-rtmp-module --add-dynamic-module=modules/nginx-upload-progress-module --add-dynamic-module=modules/nginx-upstream-fair --add-dynamic-module=modules/ngx_brotli --add-dynamic-module=modules/ngx_cache_purge_dynamic --add-dynamic-module=modules/ngx_devel_kit --add-dynamic-module=modules/ngx-fancyindex --add-dynamic-module=modules/ngx_http_auth_pam_module --add-dynamic-module=modules/ngx_http_geoip2_module --add-dynamic-module=modules/ngx_http_substitutions_filter_module --add-dynamic-module=modules/njs/nginx --add-dynamic-module=modules/set-misc-nginx-module --add-dynamic-module=modules/srcache-nginx-module --prefix=/www/nginx --sbin-path=/usr/lib/nginx/nginx --modules-path=/www/nginx/modules --conf-path=/www/nginx/conf/nginx.conf --error-log-path=/www/nginx/log/error.log --http-log-path=/www/nginx/log/access.log --pid-path=/var/run/nginx.pid --lock-path=/var/run/nginx.lock --http-client-body-temp-path=/var/cache/nginx/client_temp --http-proxy-temp-path=/var/cache/nginx/proxy_temp --http-fastcgi-temp-path=/var/cache/nginx/fastcgi_temp --http-uwsgi-temp-path=/var/cache/nginx/uwsgi_temp --http-scgi-temp-path=/var/cache/nginx/scgi_temp --user=www --group=www --with-compat --with-file-aio --with-threads --with-http_addition_module --with-http_auth_request_module --with-http_dav_module --with-http_flv_module --with-http_gunzip_module --with-http_gzip_static_module --with-http_mp4_module --with-http_random_index_module --with-http_realip_module --with-http_secure_link_module --with-http_slice_module --with-http_ssl_module --with-http_stub_status_module --with-http_sub_module --with-http_v2_module --with-http_v3_module --with-mail --with-mail_ssl_module --with-stream --with-stream_realip_module --with-stream_ssl_module --with-stream_ssl_preread_module --with-http_geoip_module --with-http_image_filter_module --with-http_perl_module --with-http_xslt_module --with-mail --with-stream --with-stream_geoip_module --with-openssl=../openssl-3.4.0 --with-cc=/usr/bin/clang-19 --with-cpp=/usr/bin/clang++-19 --with-openssl-opt='-O3 -ffast-math -march=native -flto=full -Wno-error=nan-infinity-disabled -Werror=implicit-function-declaration -funsafe-math-optimizations --param=ssp-buffer-size=4 -fstack-protector-strong -fstack-clash-protection -Wformat -Werror=format-security -fcf-protection -Wdate-time -Wp,-D_FORTIFY_SOURCE=2 -fPIC no-tests enable-ktls' --with-cc-opt='-O3 -ffast-math -march=native -flto=full -w -Werror=implicit-function-declaration -funsafe-math-optimizations --param=ssp-buffer-size=4 -fstack-protector-strong -fstack-clash-protection -Wformat -Werror=format-security -fcf-protection -Wdate-time -Wp,-D_FORTIFY_SOURCE=2 -fPIC' --with-ld-opt='-Wl,-Bsymbolic-functions,-z,relro -Wl,-z,now -Wl,--as-needed'"

#ifndef NGX_COMPILER
#define NGX_COMPILER  "clang 19.1.3 (2)"
#endif


#ifndef NGX_HAVE_GCC_ATOMIC
#define NGX_HAVE_GCC_ATOMIC  1
#endif


#ifndef NGX_HAVE_C99_VARIADIC_MACROS
#define NGX_HAVE_C99_VARIADIC_MACROS  1
#endif


#ifndef NGX_HAVE_GCC_VARIADIC_MACROS
#define NGX_HAVE_GCC_VARIADIC_MACROS  1
#endif


#ifndef NGX_HAVE_GCC_BSWAP64
#define NGX_HAVE_GCC_BSWAP64  1
#endif


#ifndef NGX_HAVE_EPOLL
#define NGX_HAVE_EPOLL  1
#endif


#ifndef NGX_HAVE_CLEAR_EVENT
#define NGX_HAVE_CLEAR_EVENT  1
#endif


#ifndef NGX_HAVE_EPOLLRDHUP
#define NGX_HAVE_EPOLLRDHUP  1
#endif


#ifndef NGX_HAVE_EPOLLEXCLUSIVE
#define NGX_HAVE_EPOLLEXCLUSIVE  1
#endif


#ifndef NGX_HAVE_EVENTFD
#define NGX_HAVE_EVENTFD  1
#endif


#ifndef NGX_HAVE_SYS_EVENTFD_H
#define NGX_HAVE_SYS_EVENTFD_H  1
#endif


#ifndef NGX_HAVE_O_PATH
#define NGX_HAVE_O_PATH  1
#endif


#ifndef NGX_HAVE_SENDFILE
#define NGX_HAVE_SENDFILE  1
#endif


#ifndef NGX_HAVE_SENDFILE64
#define NGX_HAVE_SENDFILE64  1
#endif


#ifndef NGX_HAVE_PR_SET_DUMPABLE
#define NGX_HAVE_PR_SET_DUMPABLE  1
#endif


#ifndef NGX_HAVE_PR_SET_KEEPCAPS
#define NGX_HAVE_PR_SET_KEEPCAPS  1
#endif


#ifndef NGX_HAVE_CAPABILITIES
#define NGX_HAVE_CAPABILITIES  1
#endif


#ifndef NGX_HAVE_GNU_CRYPT_R
#define NGX_HAVE_GNU_CRYPT_R  1
#endif


#ifndef NGX_HAVE_BPF
#define NGX_HAVE_BPF  1
#endif


#ifndef NGX_HAVE_SO_COOKIE
#define NGX_HAVE_SO_COOKIE  1
#endif


#ifndef NGX_HAVE_UDP_SEGMENT
#define NGX_HAVE_UDP_SEGMENT  1
#endif


#ifndef NGX_HAVE_NONALIGNED
#define NGX_HAVE_NONALIGNED  1
#endif


#ifndef NGX_CPU_CACHE_LINE
#define NGX_CPU_CACHE_LINE  64
#endif


#define NGX_KQUEUE_UDATA_T  (void *)


#ifndef NGX_HAVE_POSIX_FADVISE
#define NGX_HAVE_POSIX_FADVISE  1
#endif


#ifndef NGX_HAVE_O_DIRECT
#define NGX_HAVE_O_DIRECT  1
#endif


#ifndef NGX_HAVE_ALIGNED_DIRECTIO
#define NGX_HAVE_ALIGNED_DIRECTIO  1
#endif


#ifndef NGX_HAVE_STATFS
#define NGX_HAVE_STATFS  1
#endif


#ifndef NGX_HAVE_STATVFS
#define NGX_HAVE_STATVFS  1
#endif


#ifndef NGX_HAVE_DLOPEN
#define NGX_HAVE_DLOPEN  1
#endif


#ifndef NGX_HAVE_SCHED_YIELD
#define NGX_HAVE_SCHED_YIELD  1
#endif


#ifndef NGX_HAVE_SCHED_SETAFFINITY
#define NGX_HAVE_SCHED_SETAFFINITY  1
#endif


#ifndef NGX_HAVE_REUSEPORT
#define NGX_HAVE_REUSEPORT  1
#endif


#ifndef NGX_HAVE_TRANSPARENT_PROXY
#define NGX_HAVE_TRANSPARENT_PROXY  1
#endif


#ifndef NGX_HAVE_IP_BIND_ADDRESS_NO_PORT
#define NGX_HAVE_IP_BIND_ADDRESS_NO_PORT  1
#endif


#ifndef NGX_HAVE_IP_PKTINFO
#define NGX_HAVE_IP_PKTINFO  1
#endif


#ifndef NGX_HAVE_IPV6_RECVPKTINFO
#define NGX_HAVE_IPV6_RECVPKTINFO  1
#endif


#ifndef NGX_HAVE_IP_MTU_DISCOVER
#define NGX_HAVE_IP_MTU_DISCOVER  1
#endif


#ifndef NGX_HAVE_IPV6_MTU_DISCOVER
#define NGX_HAVE_IPV6_MTU_DISCOVER  1
#endif


#ifndef NGX_HAVE_IPV6_DONTFRAG
#define NGX_HAVE_IPV6_DONTFRAG  1
#endif


#ifndef NGX_HAVE_DEFERRED_ACCEPT
#define NGX_HAVE_DEFERRED_ACCEPT  1
#endif


#ifndef NGX_HAVE_KEEPALIVE_TUNABLE
#define NGX_HAVE_KEEPALIVE_TUNABLE  1
#endif


#ifndef NGX_HAVE_TCP_FASTOPEN
#define NGX_HAVE_TCP_FASTOPEN  1
#endif


#ifndef NGX_HAVE_TCP_INFO
#define NGX_HAVE_TCP_INFO  1
#endif


#ifndef NGX_HAVE_ACCEPT4
#define NGX_HAVE_ACCEPT4  1
#endif


#ifndef NGX_HAVE_FILE_AIO
#define NGX_HAVE_FILE_AIO  1
#endif


#ifndef NGX_HAVE_EVENTFD
#define NGX_HAVE_EVENTFD  1
#endif


#ifndef NGX_HAVE_SYS_EVENTFD_H
#define NGX_HAVE_SYS_EVENTFD_H  1
#endif


#ifndef NGX_HAVE_UNIX_DOMAIN
#define NGX_HAVE_UNIX_DOMAIN  1
#endif


#ifndef NGX_PTR_SIZE
#define NGX_PTR_SIZE  8
#endif


#ifndef NGX_SIG_ATOMIC_T_SIZE
#define NGX_SIG_ATOMIC_T_SIZE  4
#endif


#ifndef NGX_HAVE_LITTLE_ENDIAN
#define NGX_HAVE_LITTLE_ENDIAN  1
#endif


#ifndef NGX_MAX_SIZE_T_VALUE
#define NGX_MAX_SIZE_T_VALUE  9223372036854775807LL
#endif


#ifndef NGX_SIZE_T_LEN
#define NGX_SIZE_T_LEN  (sizeof("-9223372036854775808") - 1)
#endif


#ifndef NGX_MAX_OFF_T_VALUE
#define NGX_MAX_OFF_T_VALUE  9223372036854775807LL
#endif


#ifndef NGX_OFF_T_LEN
#define NGX_OFF_T_LEN  (sizeof("-9223372036854775808") - 1)
#endif


#ifndef NGX_TIME_T_SIZE
#define NGX_TIME_T_SIZE  8
#endif


#ifndef NGX_TIME_T_LEN
#define NGX_TIME_T_LEN  (sizeof("-9223372036854775808") - 1)
#endif


#ifndef NGX_MAX_TIME_T_VALUE
#define NGX_MAX_TIME_T_VALUE  9223372036854775807LL
#endif


#ifndef NGX_HAVE_INET6
#define NGX_HAVE_INET6  1
#endif


#ifndef NGX_HAVE_PREAD
#define NGX_HAVE_PREAD  1
#endif


#ifndef NGX_HAVE_PWRITE
#define NGX_HAVE_PWRITE  1
#endif


#ifndef NGX_HAVE_PWRITEV
#define NGX_HAVE_PWRITEV  1
#endif


#ifndef NGX_HAVE_STRERRORDESC_NP
#define NGX_HAVE_STRERRORDESC_NP  1
#endif


#ifndef NGX_HAVE_LOCALTIME_R
#define NGX_HAVE_LOCALTIME_R  1
#endif


#ifndef NGX_HAVE_CLOCK_MONOTONIC
#define NGX_HAVE_CLOCK_MONOTONIC  1
#endif


#ifndef NGX_HAVE_POSIX_MEMALIGN
#define NGX_HAVE_POSIX_MEMALIGN  1
#endif


#ifndef NGX_HAVE_MEMALIGN
#define NGX_HAVE_MEMALIGN  1
#endif


#ifndef NGX_HAVE_MAP_ANON
#define NGX_HAVE_MAP_ANON  1
#endif


#ifndef NGX_HAVE_MAP_DEVZERO
#define NGX_HAVE_MAP_DEVZERO  1
#endif


#ifndef NGX_HAVE_SYSVSHM
#define NGX_HAVE_SYSVSHM  1
#endif


#ifndef NGX_HAVE_POSIX_SEM
#define NGX_HAVE_POSIX_SEM  1
#endif


#ifndef NGX_HAVE_MSGHDR_MSG_CONTROL
#define NGX_HAVE_MSGHDR_MSG_CONTROL  1
#endif


#ifndef NGX_HAVE_FIONBIO
#define NGX_HAVE_FIONBIO  1
#endif


#ifndef NGX_HAVE_FIONREAD
#define NGX_HAVE_FIONREAD  1
#endif


#ifndef NGX_HAVE_GMTOFF
#define NGX_HAVE_GMTOFF  1
#endif


#ifndef NGX_HAVE_D_TYPE
#define NGX_HAVE_D_TYPE  1
#endif


#ifndef NGX_HAVE_SC_NPROCESSORS_ONLN
#define NGX_HAVE_SC_NPROCESSORS_ONLN  1
#endif


#ifndef NGX_HAVE_LEVEL1_DCACHE_LINESIZE
#define NGX_HAVE_LEVEL1_DCACHE_LINESIZE  1
#endif


#ifndef NGX_HAVE_OPENAT
#define NGX_HAVE_OPENAT  1
#endif


#ifndef NGX_HAVE_GETADDRINFO
#define NGX_HAVE_GETADDRINFO  1
#endif


#ifndef NGX_THREADS
#define NGX_THREADS  1
#endif


#ifndef NGX_HTTP_CACHE
#define NGX_HTTP_CACHE  1
#endif


#ifndef NGX_HTTP_GZIP
#define NGX_HTTP_GZIP  1
#endif


#ifndef NGX_HTTP_SSI
#define NGX_HTTP_SSI  1
#endif


#ifndef NGX_HTTP_GZIP
#define NGX_HTTP_GZIP  1
#endif


#ifndef NGX_HTTP_V2
#define NGX_HTTP_V2  1
#endif


#ifndef NGX_HTTP_V3
#define NGX_HTTP_V3  1
#endif


#ifndef NGX_HTTP_GZIP
#define NGX_HTTP_GZIP  1
#endif


#ifndef NGX_HTTP_DAV
#define NGX_HTTP_DAV  1
#endif


#ifndef NGX_CRYPT
#define NGX_CRYPT  1
#endif


#ifndef NGX_HTTP_REALIP
#define NGX_HTTP_REALIP  1
#endif


#ifndef NGX_HTTP_X_FORWARDED_FOR
#define NGX_HTTP_X_FORWARDED_FOR  1
#endif


#ifndef NGX_HTTP_X_FORWARDED_FOR
#define NGX_HTTP_X_FORWARDED_FOR  1
#endif


#ifndef NGX_HTTP_X_FORWARDED_FOR
#define NGX_HTTP_X_FORWARDED_FOR  1
#endif


#ifndef NGX_HTTP_SSL
#define NGX_HTTP_SSL  1
#endif


#ifndef NGX_HTTP_X_FORWARDED_FOR
#define NGX_HTTP_X_FORWARDED_FOR  1
#endif


#ifndef NGX_HTTP_UPSTREAM_ZONE
#define NGX_HTTP_UPSTREAM_ZONE  1
#endif


#ifndef NGX_STAT_STUB
#define NGX_STAT_STUB  1
#endif


#ifndef NGX_MAIL_SSL
#define NGX_MAIL_SSL  1
#endif


#ifndef NGX_STREAM_SSL
#define NGX_STREAM_SSL  1
#endif


#ifndef NGX_STREAM_UPSTREAM_ZONE
#define NGX_STREAM_UPSTREAM_ZONE  1
#endif


#ifndef NGX_HTTP_LUA_HAVE_SO_PASSCRED
#define NGX_HTTP_LUA_HAVE_SO_PASSCRED  1
#endif


#ifndef NGX_HTTP_LUA_HAVE_SA_RESTART
#define NGX_HTTP_LUA_HAVE_SA_RESTART  1
#endif


#ifndef NGX_HTTP_LUA_HAVE_MALLOC_TRIM
#define NGX_HTTP_LUA_HAVE_MALLOC_TRIM  1
#endif


#ifndef NGX_HTTP_LUA_HAVE_PIPE2
#define NGX_HTTP_LUA_HAVE_PIPE2  1
#endif


#ifndef NGX_HTTP_LUA_HAVE_SIGNALFD
#define NGX_HTTP_LUA_HAVE_SIGNALFD  1
#endif


#ifndef NGX_HTTP_LUA_HAVE_EXECVPE
#define NGX_HTTP_LUA_HAVE_EXECVPE  1
#endif


#ifndef NCHAN_HAVE_MATH
#define NCHAN_HAVE_MATH  1
#endif


#ifndef NCHAN_HAVE_MEMRCHR
#define NCHAN_HAVE_MEMRCHR  1
#endif


#ifndef NGX_HTTP_HEADERS
#define NGX_HTTP_HEADERS  1
#endif


#ifndef NGX_HTTP_BROTLI_FILTER
#define NGX_HTTP_BROTLI_FILTER  1
#endif


#ifndef NGX_HTTP_BROTLI_FILTER_MODULE
#define NGX_HTTP_BROTLI_FILTER_MODULE  1
#endif


#ifndef NGX_HTTP_GZIP
#define NGX_HTTP_GZIP  1
#endif


#ifndef NGX_HTTP_BROTLI_STATIC
#define NGX_HTTP_BROTLI_STATIC  1
#endif


#ifndef NGX_HTTP_BROTLI_STATIC_MODULE
#define NGX_HTTP_BROTLI_STATIC_MODULE  1
#endif


#ifndef NGX_HTTP_PROXY
#define NGX_HTTP_PROXY  1
#endif


#ifndef NGX_HTTP_FASTCGI
#define NGX_HTTP_FASTCGI  1
#endif


#ifndef NGX_HTTP_SCGI
#define NGX_HTTP_SCGI  1
#endif


#ifndef NGX_HTTP_UWSGI
#define NGX_HTTP_UWSGI  1
#endif


#ifndef NGX_CACHE_PURGE_MODULE
#define NGX_CACHE_PURGE_MODULE  1
#endif


#ifndef NDK
#define NDK  1
#endif


#ifndef NJS_HAVE_OPENSSL
#define NJS_HAVE_OPENSSL  1
#endif


#ifndef NJS_HAVE_XML
#define NJS_HAVE_XML  1
#endif


#ifndef NJS_HAVE_ZLIB
#define NJS_HAVE_ZLIB  1
#endif


#ifndef NGX_QUIC_BPF
#define NGX_QUIC_BPF  1
#endif


#ifndef NGX_COMPAT
#define NGX_COMPAT  1
#endif


#ifndef NGX_HTTP_GZIP
#define NGX_HTTP_GZIP  1
#endif


#ifndef NGX_HTTP_DAV
#define NGX_HTTP_DAV  1
#endif


#ifndef NGX_HTTP_REALIP
#define NGX_HTTP_REALIP  1
#endif


#ifndef NGX_HTTP_X_FORWARDED_FOR
#define NGX_HTTP_X_FORWARDED_FOR  1
#endif


#ifndef NGX_HTTP_HEADERS
#define NGX_HTTP_HEADERS  1
#endif


#ifndef NGX_HTTP_UPSTREAM_ZONE
#define NGX_HTTP_UPSTREAM_ZONE  1
#endif


#ifndef NGX_STREAM_UPSTREAM_ZONE
#define NGX_STREAM_UPSTREAM_ZONE  1
#endif


#ifndef NGX_PCRE2
#define NGX_PCRE2  1
#endif


#ifndef NGX_PCRE
#define NGX_PCRE  1
#endif


#ifndef NGX_OPENSSL
#define NGX_OPENSSL  1
#endif


#ifndef NGX_SSL
#define NGX_SSL  1
#endif


#ifndef NGX_OPENSSL_NO_CONFIG
#define NGX_OPENSSL_NO_CONFIG  1
#endif


#ifndef NGX_QUIC
#define NGX_QUIC  1
#endif


#ifndef NGX_QUIC_OPENSSL_COMPAT
#define NGX_QUIC_OPENSSL_COMPAT  1
#endif


#ifndef NGX_ZLIB
#define NGX_ZLIB  1
#endif


#ifndef NGX_HAVE_EXSLT
#define NGX_HAVE_EXSLT  1
#endif


#ifndef NGX_HAVE_GD_WEBP
#define NGX_HAVE_GD_WEBP  1
#endif


#ifndef NGX_HAVE_PERL_MULTIPLICITY
#define NGX_HAVE_PERL_MULTIPLICITY  1
#endif


#ifndef NGX_HAVE_GEOIP_V6
#define NGX_HAVE_GEOIP_V6  1
#endif


#ifndef NGX_PREFIX
#define NGX_PREFIX  "/www/nginx/"
#endif


#ifndef NGX_CONF_PREFIX
#define NGX_CONF_PREFIX  "/www/nginx/conf/"
#endif


#ifndef NGX_SBIN_PATH
#define NGX_SBIN_PATH  "/usr/lib/nginx/nginx"
#endif


#ifndef NGX_CONF_PATH
#define NGX_CONF_PATH  "/www/nginx/conf/nginx.conf"
#endif


#ifndef NGX_PID_PATH
#define NGX_PID_PATH  "/var/run/nginx.pid"
#endif


#ifndef NGX_LOCK_PATH
#define NGX_LOCK_PATH  "/var/run/nginx.lock"
#endif


#ifndef NGX_ERROR_LOG_PATH
#define NGX_ERROR_LOG_PATH  "/www/nginx/log/error.log"
#endif


#ifndef NGX_HTTP_LOG_PATH
#define NGX_HTTP_LOG_PATH  "/www/nginx/log/access.log"
#endif


#ifndef NGX_HTTP_CLIENT_TEMP_PATH
#define NGX_HTTP_CLIENT_TEMP_PATH  "/var/cache/nginx/client_temp"
#endif


#ifndef NGX_HTTP_PROXY_TEMP_PATH
#define NGX_HTTP_PROXY_TEMP_PATH  "/var/cache/nginx/proxy_temp"
#endif


#ifndef NGX_HTTP_FASTCGI_TEMP_PATH
#define NGX_HTTP_FASTCGI_TEMP_PATH  "/var/cache/nginx/fastcgi_temp"
#endif


#ifndef NGX_HTTP_UWSGI_TEMP_PATH
#define NGX_HTTP_UWSGI_TEMP_PATH  "/var/cache/nginx/uwsgi_temp"
#endif


#ifndef NGX_HTTP_SCGI_TEMP_PATH
#define NGX_HTTP_SCGI_TEMP_PATH  "/var/cache/nginx/scgi_temp"
#endif


#ifndef NGX_SUPPRESS_WARN
#define NGX_SUPPRESS_WARN  1
#endif


#ifndef NGX_SMP
#define NGX_SMP  1
#endif


#ifndef NGX_USER
#define NGX_USER  "www"
#endif


#ifndef NGX_GROUP
#define NGX_GROUP  "www"
#endif

