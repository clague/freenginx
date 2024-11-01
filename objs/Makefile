
CC =	/usr/bin/clang-19
CFLAGS = -I/usr/include/luajit-2.1/  -pipe  -O -Wall -Wextra -Wpointer-arith -Wconditional-uninitialized -Wno-unused-parameter -Werror -g -O3 -ffast-math -march=native -flto=full -w -Werror=implicit-function-declaration -funsafe-math-optimizations --param=ssp-buffer-size=4 -fstack-protector-strong -fstack-clash-protection -Wformat -Werror=format-security -fcf-protection -Wdate-time -Wp,-D_FORTIFY_SOURCE=2 -fPIC -DNDK_SET_VAR -Wno-deprecated-declarations -DNDK_SET_VAR -DNDK_UPSTREAM_LIST
CPP =	/usr/bin/clang++-19
LINK =	$(CC)

NGX_PERL_CFLAGS = -I/usr/include/luajit-2.1/ -pipe -O -Wall -Wextra -Wpointer-arith -Wconditional-uninitialized -Wno-unused-parameter -Werror -g -O3 -ffast-math -march=native -flto=full -w -Werror=implicit-function-declaration -funsafe-math-optimizations --param=ssp-buffer-size=4 -fstack-protector-strong -fstack-clash-protection -Wformat -Werror=format-security -fcf-protection -Wdate-time -Wp,-D_FORTIFY_SOURCE=2 -fPIC -DNDK_SET_VAR -Wno-deprecated-declarations -DNDK_SET_VAR -DNDK_UPSTREAM_LIST -D_REENTRANT -D_GNU_SOURCE -DDEBIAN -fwrapv -fno-strict-aliasing -pipe -I/usr/local/include -D_LARGEFILE_SOURCE -D_FILE_OFFSET_BITS=64 -I/usr/lib/x86_64-linux-gnu/perl/5.40/CORE
NGX_PM_CFLAGS = -D_REENTRANT -D_GNU_SOURCE -DDEBIAN -fwrapv -fno-strict-aliasing -pipe -I/usr/local/include -D_LARGEFILE_SOURCE -D_FILE_OFFSET_BITS=64 -I/usr/lib/x86_64-linux-gnu/perl/5.40/CORE
NGX_PM_LDFLAGS = -shared -L/usr/local/lib -fstack-protector-strong

ALL_INCS = -I src/core \
	-I src/event \
	-I src/event/modules \
	-I src/event/quic \
	-I src/os/unix \
	-I /usr/include/luajit-2.1/ \
	-I modules/lua-nginx-module/src/api \
	-I modules/nchan/src \
	-I modules/nginx-rtmp-module \
	-I modules/ngx_brotli/deps/brotli/c/include \
	-I modules/ngx_devel_kit/objs \
	-I objs/addon/ndk \
	-I modules/ngx_devel_kit/src \
	-I modules/ngx_devel_kit/objs \
	-I objs/addon/ndk \
	-I modules/njs/nginx/../src \
	-I modules/njs/nginx/../build \
	-I modules/njs/nginx/../src \
	-I modules/njs/nginx/../build \
	-I ../openssl-3.4.0/.openssl/include \
	-I /usr/include/libxml2 \
	-I objs \
	-I src/http \
	-I src/http/modules \
	-I src/http/v2 \
	-I src/http/v3 \
	-I src/http/modules/perl \
	-I modules/ngx_devel_kit/src \
	-I src/mail \
	-I src/stream


CORE_DEPS = src/core/nginx.h \
	src/core/ngx_config.h \
	src/core/ngx_core.h \
	src/core/ngx_log.h \
	src/core/ngx_palloc.h \
	src/core/ngx_array.h \
	src/core/ngx_list.h \
	src/core/ngx_hash.h \
	src/core/ngx_buf.h \
	src/core/ngx_queue.h \
	src/core/ngx_string.h \
	src/core/ngx_parse.h \
	src/core/ngx_parse_time.h \
	src/core/ngx_inet.h \
	src/core/ngx_file.h \
	src/core/ngx_crc.h \
	src/core/ngx_crc32.h \
	src/core/ngx_murmurhash.h \
	src/core/ngx_md5.h \
	src/core/ngx_sha1.h \
	src/core/ngx_rbtree.h \
	src/core/ngx_radix_tree.h \
	src/core/ngx_rwlock.h \
	src/core/ngx_slab.h \
	src/core/ngx_times.h \
	src/core/ngx_shmtx.h \
	src/core/ngx_connection.h \
	src/core/ngx_cycle.h \
	src/core/ngx_conf_file.h \
	src/core/ngx_module.h \
	src/core/ngx_resolver.h \
	src/core/ngx_open_file_cache.h \
	src/core/ngx_crypt.h \
	src/core/ngx_proxy_protocol.h \
	src/core/ngx_syslog.h \
	src/event/ngx_event.h \
	src/event/ngx_event_timer.h \
	src/event/ngx_event_posted.h \
	src/event/ngx_event_connect.h \
	src/event/ngx_event_pipe.h \
	src/event/ngx_event_udp.h \
	src/os/unix/ngx_time.h \
	src/os/unix/ngx_errno.h \
	src/os/unix/ngx_alloc.h \
	src/os/unix/ngx_files.h \
	src/os/unix/ngx_channel.h \
	src/os/unix/ngx_shmem.h \
	src/os/unix/ngx_process.h \
	src/os/unix/ngx_setaffinity.h \
	src/os/unix/ngx_setproctitle.h \
	src/os/unix/ngx_atomic.h \
	src/os/unix/ngx_gcc_atomic_x86.h \
	src/os/unix/ngx_thread.h \
	src/os/unix/ngx_socket.h \
	src/os/unix/ngx_os.h \
	src/os/unix/ngx_user.h \
	src/os/unix/ngx_dlopen.h \
	src/os/unix/ngx_process_cycle.h \
	src/os/unix/ngx_linux_config.h \
	src/os/unix/ngx_linux.h \
	src/core/ngx_bpf.h \
	src/core/ngx_thread_pool.h \
	src/event/ngx_event_openssl.h \
	src/event/quic/ngx_event_quic.h \
	src/event/quic/ngx_event_quic_transport.h \
	src/event/quic/ngx_event_quic_protection.h \
	src/event/quic/ngx_event_quic_connection.h \
	src/event/quic/ngx_event_quic_frames.h \
	src/event/quic/ngx_event_quic_connid.h \
	src/event/quic/ngx_event_quic_migration.h \
	src/event/quic/ngx_event_quic_streams.h \
	src/event/quic/ngx_event_quic_ssl.h \
	src/event/quic/ngx_event_quic_tokens.h \
	src/event/quic/ngx_event_quic_ack.h \
	src/event/quic/ngx_event_quic_output.h \
	src/event/quic/ngx_event_quic_socket.h \
	src/event/quic/ngx_event_quic_openssl_compat.h \
	src/core/ngx_regex.h \
	../openssl-3.4.0/.openssl/include/openssl/ssl.h \
	objs/ngx_auto_config.h


CORE_INCS = -I src/core \
	-I src/event \
	-I src/event/modules \
	-I src/event/quic \
	-I src/os/unix \
	-I /usr/include/luajit-2.1/ \
	-I modules/lua-nginx-module/src/api \
	-I modules/nchan/src \
	-I modules/nginx-rtmp-module \
	-I modules/ngx_brotli/deps/brotli/c/include \
	-I modules/ngx_devel_kit/objs \
	-I objs/addon/ndk \
	-I modules/ngx_devel_kit/src \
	-I modules/ngx_devel_kit/objs \
	-I objs/addon/ndk \
	-I modules/njs/nginx/../src \
	-I modules/njs/nginx/../build \
	-I modules/njs/nginx/../src \
	-I modules/njs/nginx/../build \
	-I ../openssl-3.4.0/.openssl/include \
	-I /usr/include/libxml2 \
	-I objs


HTTP_DEPS = src/http/ngx_http.h \
	src/http/ngx_http_request.h \
	src/http/ngx_http_config.h \
	src/http/ngx_http_core_module.h \
	src/http/ngx_http_cache.h \
	src/http/ngx_http_variables.h \
	src/http/ngx_http_script.h \
	src/http/ngx_http_upstream.h \
	src/http/ngx_http_upstream_round_robin.h \
	src/http/modules/ngx_http_ssi_filter_module.h \
	src/http/v2/ngx_http_v2.h \
	src/http/v2/ngx_http_v2_module.h \
	src/http/v3/ngx_http_v3.h \
	src/http/v3/ngx_http_v3_encode.h \
	src/http/v3/ngx_http_v3_parse.h \
	src/http/v3/ngx_http_v3_table.h \
	src/http/v3/ngx_http_v3_uni.h \
	src/http/modules/ngx_http_ssl_module.h \
	src/http/modules/perl/ngx_http_perl_module.h


HTTP_INCS = -I src/http \
	-I src/http/modules \
	-I src/http/v2 \
	-I src/http/v3 \
	-I src/http/modules/perl \
	-I modules/ngx_devel_kit/src


MAIL_DEPS = src/mail/ngx_mail.h \
	src/mail/ngx_mail_ssl_module.h \
	src/mail/ngx_mail_pop3_module.h \
	src/mail/ngx_mail_imap_module.h \
	src/mail/ngx_mail_smtp_module.h


MAIL_INCS = -I src/mail


STREAM_DEPS = src/stream/ngx_stream.h \
	src/stream/ngx_stream_variables.h \
	src/stream/ngx_stream_script.h \
	src/stream/ngx_stream_upstream.h \
	src/stream/ngx_stream_upstream_round_robin.h \
	src/stream/ngx_stream_ssl_module.h


STREAM_INCS = -I src/stream


ADDON_DEPS = $(CORE_DEPS)                                                                           modules/echo-nginx-module/src/ddebug.h                                                 modules/echo-nginx-module/src/ngx_http_echo_module.h                                   modules/echo-nginx-module/src/ngx_http_echo_handler.h                                  modules/echo-nginx-module/src/ngx_http_echo_util.h                                     modules/echo-nginx-module/src/ngx_http_echo_sleep.h                                    modules/echo-nginx-module/src/ngx_http_echo_filter.h                                   modules/echo-nginx-module/src/ngx_http_echo_var.h                                      modules/echo-nginx-module/src/ngx_http_echo_location.h                                 modules/echo-nginx-module/src/ngx_http_echo_echo.h                                     modules/echo-nginx-module/src/ngx_http_echo_request_info.h                             modules/echo-nginx-module/src/ngx_http_echo_subrequest.h                               modules/echo-nginx-module/src/ngx_http_echo_foreach.h                                                                                                            modules/headers-more-nginx-module/src/ddebug.h                                                 modules/headers-more-nginx-module/src/ngx_http_headers_more_filter_module.h                    modules/headers-more-nginx-module/src/ngx_http_headers_more_headers_in.h                       modules/headers-more-nginx-module/src/ngx_http_headers_more_headers_out.h                      modules/headers-more-nginx-module/src/ngx_http_headers_more_headers_in.h                       modules/headers-more-nginx-module/src/ngx_http_headers_more_util.h                                           modules/lua-nginx-module/src/ddebug.h             modules/lua-nginx-module/src/ngx_http_lua_autoconf.h             modules/lua-nginx-module/src/ngx_http_lua_script.h             modules/lua-nginx-module/src/ngx_http_lua_log.h             modules/lua-nginx-module/src/ngx_http_lua_subrequest.h             modules/lua-nginx-module/src/ngx_http_lua_ndk.h             modules/lua-nginx-module/src/ngx_http_lua_control.h             modules/lua-nginx-module/src/ngx_http_lua_string.h             modules/lua-nginx-module/src/ngx_http_lua_misc.h             modules/lua-nginx-module/src/ngx_http_lua_output.h             modules/lua-nginx-module/src/ngx_http_lua_headers.h             modules/lua-nginx-module/src/ngx_http_lua_uri.h             modules/lua-nginx-module/src/ngx_http_lua_req_body.h             modules/lua-nginx-module/src/ngx_http_lua_args.h             modules/lua-nginx-module/src/ngx_http_lua_ctx.h             modules/lua-nginx-module/src/ngx_http_lua_common.h             modules/lua-nginx-module/src/ngx_http_lua_directive.h             modules/lua-nginx-module/src/ngx_http_lua_headers_out.h             modules/lua-nginx-module/src/ngx_http_lua_headers_in.h             modules/lua-nginx-module/src/ngx_http_lua_consts.h             modules/lua-nginx-module/src/ngx_http_lua_exception.h             modules/lua-nginx-module/src/ngx_http_lua_util.h             modules/lua-nginx-module/src/ngx_http_lua_cache.h             modules/lua-nginx-module/src/ngx_http_lua_contentby.h             modules/lua-nginx-module/src/ngx_http_lua_server_rewriteby.c             modules/lua-nginx-module/src/ngx_http_lua_rewriteby.h             modules/lua-nginx-module/src/ngx_http_lua_accessby.h             modules/lua-nginx-module/src/ngx_http_lua_setby.h             modules/lua-nginx-module/src/ngx_http_lua_capturefilter.h             modules/lua-nginx-module/src/ngx_http_lua_clfactory.h             modules/lua-nginx-module/src/ngx_http_lua_pcrefix.h             modules/lua-nginx-module/src/ngx_http_lua_headerfilterby.h             modules/lua-nginx-module/src/ngx_http_lua_shdict.h             modules/lua-nginx-module/src/ngx_http_lua_socket_tcp.h             modules/lua-nginx-module/src/api/ngx_http_lua_api.h             modules/lua-nginx-module/src/ngx_http_lua_logby.h             modules/lua-nginx-module/src/ngx_http_lua_sleep.h             modules/lua-nginx-module/src/ngx_http_lua_semaphore.h            modules/lua-nginx-module/src/ngx_http_lua_coroutine.h             modules/lua-nginx-module/src/ngx_http_lua_bodyfilterby.h             modules/lua-nginx-module/src/ngx_http_lua_initby.h             modules/lua-nginx-module/src/ngx_http_lua_initworkerby.h             modules/lua-nginx-module/src/ngx_http_lua_exitworkerby.h             modules/lua-nginx-module/src/ngx_http_lua_socket_udp.h             modules/lua-nginx-module/src/ngx_http_lua_probe.h             modules/lua-nginx-module/src/ngx_http_lua_uthread.h             modules/lua-nginx-module/src/ngx_http_lua_timer.h             modules/lua-nginx-module/src/ngx_http_lua_config.h             modules/lua-nginx-module/src/ngx_http_lua_ssl_client_helloby.h             modules/lua-nginx-module/src/ngx_http_lua_ssl_certby.h             modules/lua-nginx-module/src/ngx_http_lua_lex.h             modules/lua-nginx-module/src/ngx_http_lua_balancer.h             modules/lua-nginx-module/src/ngx_http_lua_ssl_export_keying_material.h             modules/lua-nginx-module/src/ngx_http_lua_ssl_session_storeby.h             modules/lua-nginx-module/src/ngx_http_lua_ssl_session_fetchby.h             modules/lua-nginx-module/src/ngx_http_lua_ssl.h             modules/lua-nginx-module/src/ngx_http_lua_log_ringbuf.h             modules/lua-nginx-module/src/ngx_http_lua_input_filters.h             modules/lua-nginx-module/src/ngx_http_lua_pipe.h             modules/lua-nginx-module/src/ngx_http_lua_worker_thread.h                                                                                       modules/memc-nginx-module/src/ddebug.h                                                 modules/memc-nginx-module/src/ngx_http_memc_module.h                                   modules/memc-nginx-module/src/ngx_http_memc_request.h                                  modules/memc-nginx-module/src/ngx_http_memc_response.h                                 modules/memc-nginx-module/src/ngx_http_memc_util.h                                     modules/memc-nginx-module/src/ngx_http_memc_handler.h                                   modules/ModSecurity-nginx/src/ddebug.h             modules/ModSecurity-nginx/src/ngx_http_modsecurity_common.h                                                                               modules/nginx-rtmp-module/ngx_rtmp_amf.h                               modules/nginx-rtmp-module/ngx_rtmp_bandwidth.h                         modules/nginx-rtmp-module/ngx_rtmp_cmd_module.h                        modules/nginx-rtmp-module/ngx_rtmp_codec_module.h                      modules/nginx-rtmp-module/ngx_rtmp_eval.h                              modules/nginx-rtmp-module/ngx_rtmp.h                                   modules/nginx-rtmp-module/ngx_rtmp_version.h                           modules/nginx-rtmp-module/ngx_rtmp_live_module.h                       modules/nginx-rtmp-module/ngx_rtmp_netcall_module.h                    modules/nginx-rtmp-module/ngx_rtmp_play_module.h                       modules/nginx-rtmp-module/ngx_rtmp_record_module.h                     modules/nginx-rtmp-module/ngx_rtmp_relay_module.h                      modules/nginx-rtmp-module/ngx_rtmp_streams.h                           modules/nginx-rtmp-module/ngx_rtmp_bitop.h                             modules/nginx-rtmp-module/ngx_rtmp_proxy_protocol.h                    modules/nginx-rtmp-module/hls/ngx_rtmp_mpegts.h                        modules/nginx-rtmp-module/dash/ngx_rtmp_mp4.h                           modules/ngx_brotli/deps/brotli/c/include/brotli/encode.h               modules/ngx_brotli/deps/brotli/c/include/brotli/port.h               modules/ngx_brotli/deps/brotli/c/include/brotli/types.h modules/ngx_devel_kit/src/ndk.h modules/ngx-fancyindex/template.h modules/njs/nginx/../build/libnjs.a modules/njs/nginx/ngx_js.h     modules/njs/nginx/ngx_js_fetch.h     modules/njs/nginx/ngx_js_shared_dict.h  modules/njs/nginx/../build/libnjs.a modules/njs/nginx/ngx_js.h     modules/njs/nginx/ngx_js_fetch.h     modules/njs/nginx/ngx_js_shared_dict.h                                                                           modules/set-misc-nginx-module/src/ddebug.h                                                 modules/set-misc-nginx-module/src/ngx_http_set_default_value.h                             modules/set-misc-nginx-module/src/ngx_http_set_hashed_upstream.h                           modules/set-misc-nginx-module/src/ngx_http_set_quote_sql.h                                 modules/set-misc-nginx-module/src/ngx_http_set_quote_json.h                                modules/set-misc-nginx-module/src/ngx_http_set_unescape_uri.h                              modules/set-misc-nginx-module/src/ngx_http_set_escape_uri.h                                modules/set-misc-nginx-module/src/ngx_http_set_hash.h                                      modules/set-misc-nginx-module/src/ngx_http_set_local_today.h                               modules/set-misc-nginx-module/src/ngx_http_set_hex.h                                       modules/set-misc-nginx-module/src/ngx_http_set_base64url.h                                 modules/set-misc-nginx-module/src/ngx_http_set_base64.h                                    modules/set-misc-nginx-module/src/ngx_http_set_random.h                                    modules/set-misc-nginx-module/src/ngx_http_set_rotate.h                                    modules/set-misc-nginx-module/src/ngx_http_set_secure_random.h                             modules/set-misc-nginx-module/src/ngx_http_set_misc_module.h                                modules/set-misc-nginx-module/src/ngx_http_set_hmac.h                                                                           modules/srcache-nginx-module/src/ddebug.h                                                 modules/srcache-nginx-module/src/ngx_http_srcache_filter_module.h                         modules/srcache-nginx-module/src/ngx_http_srcache_util.h                                  modules/srcache-nginx-module/src/ngx_http_srcache_var.h                                   modules/srcache-nginx-module/src/ngx_http_srcache_fetch.h                                 modules/srcache-nginx-module/src/ngx_http_srcache_store.h                                 modules/srcache-nginx-module/src/ngx_http_srcache_headers.h                                $(HTTP_DEPS) $(MAIL_DEPS) $(STREAM_DEPS)


build:	binary modules manpage

binary:	objs/nginx

objs/nginx:	objs/src/core/nginx.o \
	objs/src/core/ngx_log.o \
	objs/src/core/ngx_palloc.o \
	objs/src/core/ngx_array.o \
	objs/src/core/ngx_list.o \
	objs/src/core/ngx_hash.o \
	objs/src/core/ngx_buf.o \
	objs/src/core/ngx_queue.o \
	objs/src/core/ngx_output_chain.o \
	objs/src/core/ngx_string.o \
	objs/src/core/ngx_parse.o \
	objs/src/core/ngx_parse_time.o \
	objs/src/core/ngx_inet.o \
	objs/src/core/ngx_file.o \
	objs/src/core/ngx_crc32.o \
	objs/src/core/ngx_murmurhash.o \
	objs/src/core/ngx_md5.o \
	objs/src/core/ngx_sha1.o \
	objs/src/core/ngx_rbtree.o \
	objs/src/core/ngx_radix_tree.o \
	objs/src/core/ngx_slab.o \
	objs/src/core/ngx_times.o \
	objs/src/core/ngx_shmtx.o \
	objs/src/core/ngx_connection.o \
	objs/src/core/ngx_cycle.o \
	objs/src/core/ngx_spinlock.o \
	objs/src/core/ngx_rwlock.o \
	objs/src/core/ngx_cpuinfo.o \
	objs/src/core/ngx_conf_file.o \
	objs/src/core/ngx_module.o \
	objs/src/core/ngx_resolver.o \
	objs/src/core/ngx_open_file_cache.o \
	objs/src/core/ngx_crypt.o \
	objs/src/core/ngx_proxy_protocol.o \
	objs/src/core/ngx_syslog.o \
	objs/src/event/ngx_event.o \
	objs/src/event/ngx_event_timer.o \
	objs/src/event/ngx_event_posted.o \
	objs/src/event/ngx_event_accept.o \
	objs/src/event/ngx_event_udp.o \
	objs/src/event/ngx_event_connect.o \
	objs/src/event/ngx_event_pipe.o \
	objs/src/os/unix/ngx_time.o \
	objs/src/os/unix/ngx_errno.o \
	objs/src/os/unix/ngx_alloc.o \
	objs/src/os/unix/ngx_files.o \
	objs/src/os/unix/ngx_socket.o \
	objs/src/os/unix/ngx_recv.o \
	objs/src/os/unix/ngx_readv_chain.o \
	objs/src/os/unix/ngx_udp_recv.o \
	objs/src/os/unix/ngx_send.o \
	objs/src/os/unix/ngx_writev_chain.o \
	objs/src/os/unix/ngx_udp_send.o \
	objs/src/os/unix/ngx_udp_sendmsg_chain.o \
	objs/src/os/unix/ngx_channel.o \
	objs/src/os/unix/ngx_shmem.o \
	objs/src/os/unix/ngx_process.o \
	objs/src/os/unix/ngx_daemon.o \
	objs/src/os/unix/ngx_setaffinity.o \
	objs/src/os/unix/ngx_setproctitle.o \
	objs/src/os/unix/ngx_posix_init.o \
	objs/src/os/unix/ngx_user.o \
	objs/src/os/unix/ngx_dlopen.o \
	objs/src/os/unix/ngx_process_cycle.o \
	objs/src/os/unix/ngx_linux_init.o \
	objs/src/event/modules/ngx_epoll_module.o \
	objs/src/os/unix/ngx_linux_sendfile_chain.o \
	objs/src/core/ngx_bpf.o \
	objs/src/os/unix/ngx_linux_aio_read.o \
	objs/src/core/ngx_thread_pool.o \
	objs/src/os/unix/ngx_thread_cond.o \
	objs/src/os/unix/ngx_thread_mutex.o \
	objs/src/os/unix/ngx_thread_id.o \
	objs/src/event/ngx_event_openssl.o \
	objs/src/event/ngx_event_openssl_stapling.o \
	objs/src/event/quic/ngx_event_quic.o \
	objs/src/event/quic/ngx_event_quic_udp.o \
	objs/src/event/quic/ngx_event_quic_transport.o \
	objs/src/event/quic/ngx_event_quic_protection.o \
	objs/src/event/quic/ngx_event_quic_frames.o \
	objs/src/event/quic/ngx_event_quic_connid.o \
	objs/src/event/quic/ngx_event_quic_migration.o \
	objs/src/event/quic/ngx_event_quic_streams.o \
	objs/src/event/quic/ngx_event_quic_ssl.o \
	objs/src/event/quic/ngx_event_quic_tokens.o \
	objs/src/event/quic/ngx_event_quic_ack.o \
	objs/src/event/quic/ngx_event_quic_output.o \
	objs/src/event/quic/ngx_event_quic_socket.o \
	objs/src/event/quic/ngx_event_quic_openssl_compat.o \
	objs/src/event/quic/ngx_event_quic_bpf.o \
	objs/src/event/quic/ngx_event_quic_bpf_code.o \
	objs/src/core/ngx_regex.o \
	objs/src/http/ngx_http.o \
	objs/src/http/ngx_http_core_module.o \
	objs/src/http/ngx_http_special_response.o \
	objs/src/http/ngx_http_request.o \
	objs/src/http/ngx_http_parse.o \
	objs/src/http/modules/ngx_http_log_module.o \
	objs/src/http/ngx_http_request_body.o \
	objs/src/http/ngx_http_variables.o \
	objs/src/http/ngx_http_script.o \
	objs/src/http/ngx_http_upstream.o \
	objs/src/http/ngx_http_upstream_round_robin.o \
	objs/src/http/ngx_http_file_cache.o \
	objs/src/http/ngx_http_huff_decode.o \
	objs/src/http/ngx_http_huff_encode.o \
	objs/src/http/ngx_http_write_filter_module.o \
	objs/src/http/ngx_http_header_filter_module.o \
	objs/src/http/modules/ngx_http_chunked_filter_module.o \
	objs/src/http/v2/ngx_http_v2_filter_module.o \
	objs/src/http/v3/ngx_http_v3_filter_module.o \
	objs/src/http/modules/ngx_http_range_filter_module.o \
	objs/src/http/modules/ngx_http_gzip_filter_module.o \
	objs/src/http/ngx_http_postpone_filter_module.o \
	objs/src/http/modules/ngx_http_ssi_filter_module.o \
	objs/src/http/modules/ngx_http_charset_filter_module.o \
	objs/src/http/modules/ngx_http_xslt_filter_module.o \
	objs/src/http/modules/ngx_http_image_filter_module.o \
	objs/src/http/modules/ngx_http_sub_filter_module.o \
	objs/src/http/modules/ngx_http_addition_filter_module.o \
	objs/src/http/modules/ngx_http_gunzip_filter_module.o \
	objs/src/http/modules/ngx_http_userid_filter_module.o \
	objs/src/http/modules/ngx_http_headers_filter_module.o \
	objs/src/http/ngx_http_copy_filter_module.o \
	objs/src/http/modules/ngx_http_not_modified_filter_module.o \
	objs/src/http/modules/ngx_http_slice_filter_module.o \
	objs/src/http/v2/ngx_http_v2.o \
	objs/src/http/v2/ngx_http_v2_table.o \
	objs/src/http/v2/ngx_http_v2_encode.o \
	objs/src/http/v2/ngx_http_v2_module.o \
	objs/src/http/v3/ngx_http_v3.o \
	objs/src/http/v3/ngx_http_v3_encode.o \
	objs/src/http/v3/ngx_http_v3_parse.o \
	objs/src/http/v3/ngx_http_v3_table.o \
	objs/src/http/v3/ngx_http_v3_uni.o \
	objs/src/http/v3/ngx_http_v3_request.o \
	objs/src/http/v3/ngx_http_v3_module.o \
	objs/src/http/modules/ngx_http_static_module.o \
	objs/src/http/modules/ngx_http_gzip_static_module.o \
	objs/src/http/modules/ngx_http_dav_module.o \
	objs/src/http/modules/ngx_http_autoindex_module.o \
	objs/src/http/modules/ngx_http_index_module.o \
	objs/src/http/modules/ngx_http_random_index_module.o \
	objs/src/http/modules/ngx_http_mirror_module.o \
	objs/src/http/modules/ngx_http_try_files_module.o \
	objs/src/http/modules/ngx_http_auth_request_module.o \
	objs/src/http/modules/ngx_http_auth_basic_module.o \
	objs/src/http/modules/ngx_http_access_module.o \
	objs/src/http/modules/ngx_http_limit_conn_module.o \
	objs/src/http/modules/ngx_http_limit_req_module.o \
	objs/src/http/modules/ngx_http_realip_module.o \
	objs/src/http/modules/ngx_http_geo_module.o \
	objs/src/http/modules/ngx_http_geoip_module.o \
	objs/src/http/modules/ngx_http_map_module.o \
	objs/src/http/modules/ngx_http_split_clients_module.o \
	objs/src/http/modules/ngx_http_referer_module.o \
	objs/src/http/modules/ngx_http_rewrite_module.o \
	objs/src/http/modules/ngx_http_ssl_module.o \
	objs/src/http/modules/ngx_http_proxy_module.o \
	objs/src/http/modules/ngx_http_fastcgi_module.o \
	objs/src/http/modules/ngx_http_uwsgi_module.o \
	objs/src/http/modules/ngx_http_scgi_module.o \
	objs/src/http/modules/ngx_http_grpc_module.o \
	objs/src/http/modules/perl/ngx_http_perl_module.o \
	objs/src/http/modules/ngx_http_memcached_module.o \
	objs/src/http/modules/ngx_http_empty_gif_module.o \
	objs/src/http/modules/ngx_http_browser_module.o \
	objs/src/http/modules/ngx_http_secure_link_module.o \
	objs/src/http/modules/ngx_http_flv_module.o \
	objs/src/http/modules/ngx_http_mp4_module.o \
	objs/src/http/modules/ngx_http_upstream_hash_module.o \
	objs/src/http/modules/ngx_http_upstream_ip_hash_module.o \
	objs/src/http/modules/ngx_http_upstream_least_conn_module.o \
	objs/src/http/modules/ngx_http_upstream_random_module.o \
	objs/src/http/modules/ngx_http_upstream_keepalive_module.o \
	objs/src/http/modules/ngx_http_upstream_zone_module.o \
	objs/src/http/modules/ngx_http_stub_status_module.o \
	objs/src/mail/ngx_mail.o \
	objs/src/mail/ngx_mail_core_module.o \
	objs/src/mail/ngx_mail_handler.o \
	objs/src/mail/ngx_mail_parse.o \
	objs/src/mail/ngx_mail_ssl_module.o \
	objs/src/mail/ngx_mail_pop3_module.o \
	objs/src/mail/ngx_mail_pop3_handler.o \
	objs/src/mail/ngx_mail_imap_module.o \
	objs/src/mail/ngx_mail_imap_handler.o \
	objs/src/mail/ngx_mail_smtp_module.o \
	objs/src/mail/ngx_mail_smtp_handler.o \
	objs/src/mail/ngx_mail_auth_http_module.o \
	objs/src/mail/ngx_mail_proxy_module.o \
	objs/src/mail/ngx_mail_realip_module.o \
	objs/src/stream/ngx_stream.o \
	objs/src/stream/ngx_stream_variables.o \
	objs/src/stream/ngx_stream_script.o \
	objs/src/stream/ngx_stream_handler.o \
	objs/src/stream/ngx_stream_core_module.o \
	objs/src/stream/ngx_stream_log_module.o \
	objs/src/stream/ngx_stream_proxy_module.o \
	objs/src/stream/ngx_stream_upstream.o \
	objs/src/stream/ngx_stream_upstream_round_robin.o \
	objs/src/stream/ngx_stream_write_filter_module.o \
	objs/src/stream/ngx_stream_ssl_module.o \
	objs/src/stream/ngx_stream_realip_module.o \
	objs/src/stream/ngx_stream_limit_conn_module.o \
	objs/src/stream/ngx_stream_access_module.o \
	objs/src/stream/ngx_stream_geo_module.o \
	objs/src/stream/ngx_stream_geoip_module.o \
	objs/src/stream/ngx_stream_map_module.o \
	objs/src/stream/ngx_stream_split_clients_module.o \
	objs/src/stream/ngx_stream_return_module.o \
	objs/src/stream/ngx_stream_set_module.o \
	objs/src/stream/ngx_stream_upstream_hash_module.o \
	objs/src/stream/ngx_stream_upstream_least_conn_module.o \
	objs/src/stream/ngx_stream_upstream_random_module.o \
	objs/src/stream/ngx_stream_upstream_zone_module.o \
	objs/src/stream/ngx_stream_ssl_preread_module.o \
	objs/ngx_modules.o

	$(LINK) -o objs/nginx \
	objs/src/core/nginx.o \
	objs/src/core/ngx_log.o \
	objs/src/core/ngx_palloc.o \
	objs/src/core/ngx_array.o \
	objs/src/core/ngx_list.o \
	objs/src/core/ngx_hash.o \
	objs/src/core/ngx_buf.o \
	objs/src/core/ngx_queue.o \
	objs/src/core/ngx_output_chain.o \
	objs/src/core/ngx_string.o \
	objs/src/core/ngx_parse.o \
	objs/src/core/ngx_parse_time.o \
	objs/src/core/ngx_inet.o \
	objs/src/core/ngx_file.o \
	objs/src/core/ngx_crc32.o \
	objs/src/core/ngx_murmurhash.o \
	objs/src/core/ngx_md5.o \
	objs/src/core/ngx_sha1.o \
	objs/src/core/ngx_rbtree.o \
	objs/src/core/ngx_radix_tree.o \
	objs/src/core/ngx_slab.o \
	objs/src/core/ngx_times.o \
	objs/src/core/ngx_shmtx.o \
	objs/src/core/ngx_connection.o \
	objs/src/core/ngx_cycle.o \
	objs/src/core/ngx_spinlock.o \
	objs/src/core/ngx_rwlock.o \
	objs/src/core/ngx_cpuinfo.o \
	objs/src/core/ngx_conf_file.o \
	objs/src/core/ngx_module.o \
	objs/src/core/ngx_resolver.o \
	objs/src/core/ngx_open_file_cache.o \
	objs/src/core/ngx_crypt.o \
	objs/src/core/ngx_proxy_protocol.o \
	objs/src/core/ngx_syslog.o \
	objs/src/event/ngx_event.o \
	objs/src/event/ngx_event_timer.o \
	objs/src/event/ngx_event_posted.o \
	objs/src/event/ngx_event_accept.o \
	objs/src/event/ngx_event_udp.o \
	objs/src/event/ngx_event_connect.o \
	objs/src/event/ngx_event_pipe.o \
	objs/src/os/unix/ngx_time.o \
	objs/src/os/unix/ngx_errno.o \
	objs/src/os/unix/ngx_alloc.o \
	objs/src/os/unix/ngx_files.o \
	objs/src/os/unix/ngx_socket.o \
	objs/src/os/unix/ngx_recv.o \
	objs/src/os/unix/ngx_readv_chain.o \
	objs/src/os/unix/ngx_udp_recv.o \
	objs/src/os/unix/ngx_send.o \
	objs/src/os/unix/ngx_writev_chain.o \
	objs/src/os/unix/ngx_udp_send.o \
	objs/src/os/unix/ngx_udp_sendmsg_chain.o \
	objs/src/os/unix/ngx_channel.o \
	objs/src/os/unix/ngx_shmem.o \
	objs/src/os/unix/ngx_process.o \
	objs/src/os/unix/ngx_daemon.o \
	objs/src/os/unix/ngx_setaffinity.o \
	objs/src/os/unix/ngx_setproctitle.o \
	objs/src/os/unix/ngx_posix_init.o \
	objs/src/os/unix/ngx_user.o \
	objs/src/os/unix/ngx_dlopen.o \
	objs/src/os/unix/ngx_process_cycle.o \
	objs/src/os/unix/ngx_linux_init.o \
	objs/src/event/modules/ngx_epoll_module.o \
	objs/src/os/unix/ngx_linux_sendfile_chain.o \
	objs/src/core/ngx_bpf.o \
	objs/src/os/unix/ngx_linux_aio_read.o \
	objs/src/core/ngx_thread_pool.o \
	objs/src/os/unix/ngx_thread_cond.o \
	objs/src/os/unix/ngx_thread_mutex.o \
	objs/src/os/unix/ngx_thread_id.o \
	objs/src/event/ngx_event_openssl.o \
	objs/src/event/ngx_event_openssl_stapling.o \
	objs/src/event/quic/ngx_event_quic.o \
	objs/src/event/quic/ngx_event_quic_udp.o \
	objs/src/event/quic/ngx_event_quic_transport.o \
	objs/src/event/quic/ngx_event_quic_protection.o \
	objs/src/event/quic/ngx_event_quic_frames.o \
	objs/src/event/quic/ngx_event_quic_connid.o \
	objs/src/event/quic/ngx_event_quic_migration.o \
	objs/src/event/quic/ngx_event_quic_streams.o \
	objs/src/event/quic/ngx_event_quic_ssl.o \
	objs/src/event/quic/ngx_event_quic_tokens.o \
	objs/src/event/quic/ngx_event_quic_ack.o \
	objs/src/event/quic/ngx_event_quic_output.o \
	objs/src/event/quic/ngx_event_quic_socket.o \
	objs/src/event/quic/ngx_event_quic_openssl_compat.o \
	objs/src/event/quic/ngx_event_quic_bpf.o \
	objs/src/event/quic/ngx_event_quic_bpf_code.o \
	objs/src/core/ngx_regex.o \
	objs/src/http/ngx_http.o \
	objs/src/http/ngx_http_core_module.o \
	objs/src/http/ngx_http_special_response.o \
	objs/src/http/ngx_http_request.o \
	objs/src/http/ngx_http_parse.o \
	objs/src/http/modules/ngx_http_log_module.o \
	objs/src/http/ngx_http_request_body.o \
	objs/src/http/ngx_http_variables.o \
	objs/src/http/ngx_http_script.o \
	objs/src/http/ngx_http_upstream.o \
	objs/src/http/ngx_http_upstream_round_robin.o \
	objs/src/http/ngx_http_file_cache.o \
	objs/src/http/ngx_http_huff_decode.o \
	objs/src/http/ngx_http_huff_encode.o \
	objs/src/http/ngx_http_write_filter_module.o \
	objs/src/http/ngx_http_header_filter_module.o \
	objs/src/http/modules/ngx_http_chunked_filter_module.o \
	objs/src/http/v2/ngx_http_v2_filter_module.o \
	objs/src/http/v3/ngx_http_v3_filter_module.o \
	objs/src/http/modules/ngx_http_range_filter_module.o \
	objs/src/http/modules/ngx_http_gzip_filter_module.o \
	objs/src/http/ngx_http_postpone_filter_module.o \
	objs/src/http/modules/ngx_http_ssi_filter_module.o \
	objs/src/http/modules/ngx_http_charset_filter_module.o \
	objs/src/http/modules/ngx_http_xslt_filter_module.o \
	objs/src/http/modules/ngx_http_image_filter_module.o \
	objs/src/http/modules/ngx_http_sub_filter_module.o \
	objs/src/http/modules/ngx_http_addition_filter_module.o \
	objs/src/http/modules/ngx_http_gunzip_filter_module.o \
	objs/src/http/modules/ngx_http_userid_filter_module.o \
	objs/src/http/modules/ngx_http_headers_filter_module.o \
	objs/src/http/ngx_http_copy_filter_module.o \
	objs/src/http/modules/ngx_http_not_modified_filter_module.o \
	objs/src/http/modules/ngx_http_slice_filter_module.o \
	objs/src/http/v2/ngx_http_v2.o \
	objs/src/http/v2/ngx_http_v2_table.o \
	objs/src/http/v2/ngx_http_v2_encode.o \
	objs/src/http/v2/ngx_http_v2_module.o \
	objs/src/http/v3/ngx_http_v3.o \
	objs/src/http/v3/ngx_http_v3_encode.o \
	objs/src/http/v3/ngx_http_v3_parse.o \
	objs/src/http/v3/ngx_http_v3_table.o \
	objs/src/http/v3/ngx_http_v3_uni.o \
	objs/src/http/v3/ngx_http_v3_request.o \
	objs/src/http/v3/ngx_http_v3_module.o \
	objs/src/http/modules/ngx_http_static_module.o \
	objs/src/http/modules/ngx_http_gzip_static_module.o \
	objs/src/http/modules/ngx_http_dav_module.o \
	objs/src/http/modules/ngx_http_autoindex_module.o \
	objs/src/http/modules/ngx_http_index_module.o \
	objs/src/http/modules/ngx_http_random_index_module.o \
	objs/src/http/modules/ngx_http_mirror_module.o \
	objs/src/http/modules/ngx_http_try_files_module.o \
	objs/src/http/modules/ngx_http_auth_request_module.o \
	objs/src/http/modules/ngx_http_auth_basic_module.o \
	objs/src/http/modules/ngx_http_access_module.o \
	objs/src/http/modules/ngx_http_limit_conn_module.o \
	objs/src/http/modules/ngx_http_limit_req_module.o \
	objs/src/http/modules/ngx_http_realip_module.o \
	objs/src/http/modules/ngx_http_geo_module.o \
	objs/src/http/modules/ngx_http_geoip_module.o \
	objs/src/http/modules/ngx_http_map_module.o \
	objs/src/http/modules/ngx_http_split_clients_module.o \
	objs/src/http/modules/ngx_http_referer_module.o \
	objs/src/http/modules/ngx_http_rewrite_module.o \
	objs/src/http/modules/ngx_http_ssl_module.o \
	objs/src/http/modules/ngx_http_proxy_module.o \
	objs/src/http/modules/ngx_http_fastcgi_module.o \
	objs/src/http/modules/ngx_http_uwsgi_module.o \
	objs/src/http/modules/ngx_http_scgi_module.o \
	objs/src/http/modules/ngx_http_grpc_module.o \
	objs/src/http/modules/perl/ngx_http_perl_module.o \
	objs/src/http/modules/ngx_http_memcached_module.o \
	objs/src/http/modules/ngx_http_empty_gif_module.o \
	objs/src/http/modules/ngx_http_browser_module.o \
	objs/src/http/modules/ngx_http_secure_link_module.o \
	objs/src/http/modules/ngx_http_flv_module.o \
	objs/src/http/modules/ngx_http_mp4_module.o \
	objs/src/http/modules/ngx_http_upstream_hash_module.o \
	objs/src/http/modules/ngx_http_upstream_ip_hash_module.o \
	objs/src/http/modules/ngx_http_upstream_least_conn_module.o \
	objs/src/http/modules/ngx_http_upstream_random_module.o \
	objs/src/http/modules/ngx_http_upstream_keepalive_module.o \
	objs/src/http/modules/ngx_http_upstream_zone_module.o \
	objs/src/http/modules/ngx_http_stub_status_module.o \
	objs/src/mail/ngx_mail.o \
	objs/src/mail/ngx_mail_core_module.o \
	objs/src/mail/ngx_mail_handler.o \
	objs/src/mail/ngx_mail_parse.o \
	objs/src/mail/ngx_mail_ssl_module.o \
	objs/src/mail/ngx_mail_pop3_module.o \
	objs/src/mail/ngx_mail_pop3_handler.o \
	objs/src/mail/ngx_mail_imap_module.o \
	objs/src/mail/ngx_mail_imap_handler.o \
	objs/src/mail/ngx_mail_smtp_module.o \
	objs/src/mail/ngx_mail_smtp_handler.o \
	objs/src/mail/ngx_mail_auth_http_module.o \
	objs/src/mail/ngx_mail_proxy_module.o \
	objs/src/mail/ngx_mail_realip_module.o \
	objs/src/stream/ngx_stream.o \
	objs/src/stream/ngx_stream_variables.o \
	objs/src/stream/ngx_stream_script.o \
	objs/src/stream/ngx_stream_handler.o \
	objs/src/stream/ngx_stream_core_module.o \
	objs/src/stream/ngx_stream_log_module.o \
	objs/src/stream/ngx_stream_proxy_module.o \
	objs/src/stream/ngx_stream_upstream.o \
	objs/src/stream/ngx_stream_upstream_round_robin.o \
	objs/src/stream/ngx_stream_write_filter_module.o \
	objs/src/stream/ngx_stream_ssl_module.o \
	objs/src/stream/ngx_stream_realip_module.o \
	objs/src/stream/ngx_stream_limit_conn_module.o \
	objs/src/stream/ngx_stream_access_module.o \
	objs/src/stream/ngx_stream_geo_module.o \
	objs/src/stream/ngx_stream_geoip_module.o \
	objs/src/stream/ngx_stream_map_module.o \
	objs/src/stream/ngx_stream_split_clients_module.o \
	objs/src/stream/ngx_stream_return_module.o \
	objs/src/stream/ngx_stream_set_module.o \
	objs/src/stream/ngx_stream_upstream_hash_module.o \
	objs/src/stream/ngx_stream_upstream_least_conn_module.o \
	objs/src/stream/ngx_stream_upstream_random_module.o \
	objs/src/stream/ngx_stream_upstream_zone_module.o \
	objs/src/stream/ngx_stream_ssl_preread_module.o \
	objs/ngx_modules.o \
	-L/usr/share/luajit-2.1/jit -Wl,-Bsymbolic-functions,-z,relro -Wl,-z,now -Wl,--as-needed -Wl,-E -lpthread -lcrypt -lpcre2-8 ../openssl-3.4.0/.openssl/lib/libssl.a ../openssl-3.4.0/.openssl/lib/libcrypto.a -lpthread -lz -lxml2 -lxslt -lexslt -lgd -lGeoIP \
	-Wl,-E -fstack-protector-strong -L/usr/local/lib -L/usr/lib/x86_64-linux-gnu/perl/5.40/CORE -lperl -ldl -lm -lpthread -lc -lcrypt \
	-Wl,-E
	


modules:

objs/ngx_modules.o:	$(CORE_DEPS) \
	objs/ngx_modules.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/ngx_modules.o \
		objs/ngx_modules.c


objs/src/core/nginx.o:	$(CORE_DEPS) \
	src/core/nginx.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/nginx.o \
		src/core/nginx.c


objs/src/core/ngx_log.o:	$(CORE_DEPS) \
	src/core/ngx_log.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_log.o \
		src/core/ngx_log.c


objs/src/core/ngx_palloc.o:	$(CORE_DEPS) \
	src/core/ngx_palloc.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_palloc.o \
		src/core/ngx_palloc.c


objs/src/core/ngx_array.o:	$(CORE_DEPS) \
	src/core/ngx_array.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_array.o \
		src/core/ngx_array.c


objs/src/core/ngx_list.o:	$(CORE_DEPS) \
	src/core/ngx_list.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_list.o \
		src/core/ngx_list.c


objs/src/core/ngx_hash.o:	$(CORE_DEPS) \
	src/core/ngx_hash.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_hash.o \
		src/core/ngx_hash.c


objs/src/core/ngx_buf.o:	$(CORE_DEPS) \
	src/core/ngx_buf.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_buf.o \
		src/core/ngx_buf.c


objs/src/core/ngx_queue.o:	$(CORE_DEPS) \
	src/core/ngx_queue.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_queue.o \
		src/core/ngx_queue.c


objs/src/core/ngx_output_chain.o:	$(CORE_DEPS) \
	src/core/ngx_output_chain.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_output_chain.o \
		src/core/ngx_output_chain.c


objs/src/core/ngx_string.o:	$(CORE_DEPS) \
	src/core/ngx_string.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_string.o \
		src/core/ngx_string.c


objs/src/core/ngx_parse.o:	$(CORE_DEPS) \
	src/core/ngx_parse.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_parse.o \
		src/core/ngx_parse.c


objs/src/core/ngx_parse_time.o:	$(CORE_DEPS) \
	src/core/ngx_parse_time.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_parse_time.o \
		src/core/ngx_parse_time.c


objs/src/core/ngx_inet.o:	$(CORE_DEPS) \
	src/core/ngx_inet.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_inet.o \
		src/core/ngx_inet.c


objs/src/core/ngx_file.o:	$(CORE_DEPS) \
	src/core/ngx_file.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_file.o \
		src/core/ngx_file.c


objs/src/core/ngx_crc32.o:	$(CORE_DEPS) \
	src/core/ngx_crc32.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_crc32.o \
		src/core/ngx_crc32.c


objs/src/core/ngx_murmurhash.o:	$(CORE_DEPS) \
	src/core/ngx_murmurhash.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_murmurhash.o \
		src/core/ngx_murmurhash.c


objs/src/core/ngx_md5.o:	$(CORE_DEPS) \
	src/core/ngx_md5.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_md5.o \
		src/core/ngx_md5.c


objs/src/core/ngx_sha1.o:	$(CORE_DEPS) \
	src/core/ngx_sha1.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_sha1.o \
		src/core/ngx_sha1.c


objs/src/core/ngx_rbtree.o:	$(CORE_DEPS) \
	src/core/ngx_rbtree.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_rbtree.o \
		src/core/ngx_rbtree.c


objs/src/core/ngx_radix_tree.o:	$(CORE_DEPS) \
	src/core/ngx_radix_tree.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_radix_tree.o \
		src/core/ngx_radix_tree.c


objs/src/core/ngx_slab.o:	$(CORE_DEPS) \
	src/core/ngx_slab.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_slab.o \
		src/core/ngx_slab.c


objs/src/core/ngx_times.o:	$(CORE_DEPS) \
	src/core/ngx_times.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_times.o \
		src/core/ngx_times.c


objs/src/core/ngx_shmtx.o:	$(CORE_DEPS) \
	src/core/ngx_shmtx.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_shmtx.o \
		src/core/ngx_shmtx.c


objs/src/core/ngx_connection.o:	$(CORE_DEPS) \
	src/core/ngx_connection.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_connection.o \
		src/core/ngx_connection.c


objs/src/core/ngx_cycle.o:	$(CORE_DEPS) \
	src/core/ngx_cycle.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_cycle.o \
		src/core/ngx_cycle.c


objs/src/core/ngx_spinlock.o:	$(CORE_DEPS) \
	src/core/ngx_spinlock.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_spinlock.o \
		src/core/ngx_spinlock.c


objs/src/core/ngx_rwlock.o:	$(CORE_DEPS) \
	src/core/ngx_rwlock.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_rwlock.o \
		src/core/ngx_rwlock.c


objs/src/core/ngx_cpuinfo.o:	$(CORE_DEPS) \
	src/core/ngx_cpuinfo.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_cpuinfo.o \
		src/core/ngx_cpuinfo.c


objs/src/core/ngx_conf_file.o:	$(CORE_DEPS) \
	src/core/ngx_conf_file.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_conf_file.o \
		src/core/ngx_conf_file.c


objs/src/core/ngx_module.o:	$(CORE_DEPS) \
	src/core/ngx_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_module.o \
		src/core/ngx_module.c


objs/src/core/ngx_resolver.o:	$(CORE_DEPS) \
	src/core/ngx_resolver.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_resolver.o \
		src/core/ngx_resolver.c


objs/src/core/ngx_open_file_cache.o:	$(CORE_DEPS) \
	src/core/ngx_open_file_cache.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_open_file_cache.o \
		src/core/ngx_open_file_cache.c


objs/src/core/ngx_crypt.o:	$(CORE_DEPS) \
	src/core/ngx_crypt.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_crypt.o \
		src/core/ngx_crypt.c


objs/src/core/ngx_proxy_protocol.o:	$(CORE_DEPS) \
	src/core/ngx_proxy_protocol.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_proxy_protocol.o \
		src/core/ngx_proxy_protocol.c


objs/src/core/ngx_syslog.o:	$(CORE_DEPS) \
	src/core/ngx_syslog.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_syslog.o \
		src/core/ngx_syslog.c


objs/src/event/ngx_event.o:	$(CORE_DEPS) \
	src/event/ngx_event.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/ngx_event.o \
		src/event/ngx_event.c


objs/src/event/ngx_event_timer.o:	$(CORE_DEPS) \
	src/event/ngx_event_timer.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/ngx_event_timer.o \
		src/event/ngx_event_timer.c


objs/src/event/ngx_event_posted.o:	$(CORE_DEPS) \
	src/event/ngx_event_posted.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/ngx_event_posted.o \
		src/event/ngx_event_posted.c


objs/src/event/ngx_event_accept.o:	$(CORE_DEPS) \
	src/event/ngx_event_accept.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/ngx_event_accept.o \
		src/event/ngx_event_accept.c


objs/src/event/ngx_event_udp.o:	$(CORE_DEPS) \
	src/event/ngx_event_udp.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/ngx_event_udp.o \
		src/event/ngx_event_udp.c


objs/src/event/ngx_event_connect.o:	$(CORE_DEPS) \
	src/event/ngx_event_connect.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/ngx_event_connect.o \
		src/event/ngx_event_connect.c


objs/src/event/ngx_event_pipe.o:	$(CORE_DEPS) \
	src/event/ngx_event_pipe.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/ngx_event_pipe.o \
		src/event/ngx_event_pipe.c


objs/src/os/unix/ngx_time.o:	$(CORE_DEPS) \
	src/os/unix/ngx_time.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_time.o \
		src/os/unix/ngx_time.c


objs/src/os/unix/ngx_errno.o:	$(CORE_DEPS) \
	src/os/unix/ngx_errno.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_errno.o \
		src/os/unix/ngx_errno.c


objs/src/os/unix/ngx_alloc.o:	$(CORE_DEPS) \
	src/os/unix/ngx_alloc.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_alloc.o \
		src/os/unix/ngx_alloc.c


objs/src/os/unix/ngx_files.o:	$(CORE_DEPS) \
	src/os/unix/ngx_files.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_files.o \
		src/os/unix/ngx_files.c


objs/src/os/unix/ngx_socket.o:	$(CORE_DEPS) \
	src/os/unix/ngx_socket.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_socket.o \
		src/os/unix/ngx_socket.c


objs/src/os/unix/ngx_recv.o:	$(CORE_DEPS) \
	src/os/unix/ngx_recv.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_recv.o \
		src/os/unix/ngx_recv.c


objs/src/os/unix/ngx_readv_chain.o:	$(CORE_DEPS) \
	src/os/unix/ngx_readv_chain.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_readv_chain.o \
		src/os/unix/ngx_readv_chain.c


objs/src/os/unix/ngx_udp_recv.o:	$(CORE_DEPS) \
	src/os/unix/ngx_udp_recv.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_udp_recv.o \
		src/os/unix/ngx_udp_recv.c


objs/src/os/unix/ngx_send.o:	$(CORE_DEPS) \
	src/os/unix/ngx_send.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_send.o \
		src/os/unix/ngx_send.c


objs/src/os/unix/ngx_writev_chain.o:	$(CORE_DEPS) \
	src/os/unix/ngx_writev_chain.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_writev_chain.o \
		src/os/unix/ngx_writev_chain.c


objs/src/os/unix/ngx_udp_send.o:	$(CORE_DEPS) \
	src/os/unix/ngx_udp_send.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_udp_send.o \
		src/os/unix/ngx_udp_send.c


objs/src/os/unix/ngx_udp_sendmsg_chain.o:	$(CORE_DEPS) \
	src/os/unix/ngx_udp_sendmsg_chain.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_udp_sendmsg_chain.o \
		src/os/unix/ngx_udp_sendmsg_chain.c


objs/src/os/unix/ngx_channel.o:	$(CORE_DEPS) \
	src/os/unix/ngx_channel.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_channel.o \
		src/os/unix/ngx_channel.c


objs/src/os/unix/ngx_shmem.o:	$(CORE_DEPS) \
	src/os/unix/ngx_shmem.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_shmem.o \
		src/os/unix/ngx_shmem.c


objs/src/os/unix/ngx_process.o:	$(CORE_DEPS) \
	src/os/unix/ngx_process.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_process.o \
		src/os/unix/ngx_process.c


objs/src/os/unix/ngx_daemon.o:	$(CORE_DEPS) \
	src/os/unix/ngx_daemon.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_daemon.o \
		src/os/unix/ngx_daemon.c


objs/src/os/unix/ngx_setaffinity.o:	$(CORE_DEPS) \
	src/os/unix/ngx_setaffinity.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_setaffinity.o \
		src/os/unix/ngx_setaffinity.c


objs/src/os/unix/ngx_setproctitle.o:	$(CORE_DEPS) \
	src/os/unix/ngx_setproctitle.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_setproctitle.o \
		src/os/unix/ngx_setproctitle.c


objs/src/os/unix/ngx_posix_init.o:	$(CORE_DEPS) \
	src/os/unix/ngx_posix_init.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_posix_init.o \
		src/os/unix/ngx_posix_init.c


objs/src/os/unix/ngx_user.o:	$(CORE_DEPS) \
	src/os/unix/ngx_user.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_user.o \
		src/os/unix/ngx_user.c


objs/src/os/unix/ngx_dlopen.o:	$(CORE_DEPS) \
	src/os/unix/ngx_dlopen.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_dlopen.o \
		src/os/unix/ngx_dlopen.c


objs/src/os/unix/ngx_process_cycle.o:	$(CORE_DEPS) \
	src/os/unix/ngx_process_cycle.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_process_cycle.o \
		src/os/unix/ngx_process_cycle.c


objs/src/os/unix/ngx_linux_init.o:	$(CORE_DEPS) \
	src/os/unix/ngx_linux_init.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_linux_init.o \
		src/os/unix/ngx_linux_init.c


objs/src/event/modules/ngx_epoll_module.o:	$(CORE_DEPS) \
	src/event/modules/ngx_epoll_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/modules/ngx_epoll_module.o \
		src/event/modules/ngx_epoll_module.c


objs/src/os/unix/ngx_linux_sendfile_chain.o:	$(CORE_DEPS) \
	src/os/unix/ngx_linux_sendfile_chain.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_linux_sendfile_chain.o \
		src/os/unix/ngx_linux_sendfile_chain.c


objs/src/core/ngx_bpf.o:	$(CORE_DEPS) \
	src/core/ngx_bpf.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_bpf.o \
		src/core/ngx_bpf.c


objs/src/os/unix/ngx_linux_aio_read.o:	$(CORE_DEPS) \
	src/os/unix/ngx_linux_aio_read.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_linux_aio_read.o \
		src/os/unix/ngx_linux_aio_read.c


objs/src/core/ngx_thread_pool.o:	$(CORE_DEPS) \
	src/core/ngx_thread_pool.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_thread_pool.o \
		src/core/ngx_thread_pool.c


objs/src/os/unix/ngx_thread_cond.o:	$(CORE_DEPS) \
	src/os/unix/ngx_thread_cond.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_thread_cond.o \
		src/os/unix/ngx_thread_cond.c


objs/src/os/unix/ngx_thread_mutex.o:	$(CORE_DEPS) \
	src/os/unix/ngx_thread_mutex.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_thread_mutex.o \
		src/os/unix/ngx_thread_mutex.c


objs/src/os/unix/ngx_thread_id.o:	$(CORE_DEPS) \
	src/os/unix/ngx_thread_id.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_thread_id.o \
		src/os/unix/ngx_thread_id.c


objs/src/event/ngx_event_openssl.o:	$(CORE_DEPS) \
	src/event/ngx_event_openssl.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/ngx_event_openssl.o \
		src/event/ngx_event_openssl.c


objs/src/event/ngx_event_openssl_stapling.o:	$(CORE_DEPS) \
	src/event/ngx_event_openssl_stapling.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/ngx_event_openssl_stapling.o \
		src/event/ngx_event_openssl_stapling.c


objs/src/event/quic/ngx_event_quic.o:	$(CORE_DEPS) \
	src/event/quic/ngx_event_quic.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/quic/ngx_event_quic.o \
		src/event/quic/ngx_event_quic.c


objs/src/event/quic/ngx_event_quic_udp.o:	$(CORE_DEPS) \
	src/event/quic/ngx_event_quic_udp.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/quic/ngx_event_quic_udp.o \
		src/event/quic/ngx_event_quic_udp.c


objs/src/event/quic/ngx_event_quic_transport.o:	$(CORE_DEPS) \
	src/event/quic/ngx_event_quic_transport.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/quic/ngx_event_quic_transport.o \
		src/event/quic/ngx_event_quic_transport.c


objs/src/event/quic/ngx_event_quic_protection.o:	$(CORE_DEPS) \
	src/event/quic/ngx_event_quic_protection.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/quic/ngx_event_quic_protection.o \
		src/event/quic/ngx_event_quic_protection.c


objs/src/event/quic/ngx_event_quic_frames.o:	$(CORE_DEPS) \
	src/event/quic/ngx_event_quic_frames.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/quic/ngx_event_quic_frames.o \
		src/event/quic/ngx_event_quic_frames.c


objs/src/event/quic/ngx_event_quic_connid.o:	$(CORE_DEPS) \
	src/event/quic/ngx_event_quic_connid.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/quic/ngx_event_quic_connid.o \
		src/event/quic/ngx_event_quic_connid.c


objs/src/event/quic/ngx_event_quic_migration.o:	$(CORE_DEPS) \
	src/event/quic/ngx_event_quic_migration.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/quic/ngx_event_quic_migration.o \
		src/event/quic/ngx_event_quic_migration.c


objs/src/event/quic/ngx_event_quic_streams.o:	$(CORE_DEPS) \
	src/event/quic/ngx_event_quic_streams.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/quic/ngx_event_quic_streams.o \
		src/event/quic/ngx_event_quic_streams.c


objs/src/event/quic/ngx_event_quic_ssl.o:	$(CORE_DEPS) \
	src/event/quic/ngx_event_quic_ssl.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/quic/ngx_event_quic_ssl.o \
		src/event/quic/ngx_event_quic_ssl.c


objs/src/event/quic/ngx_event_quic_tokens.o:	$(CORE_DEPS) \
	src/event/quic/ngx_event_quic_tokens.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/quic/ngx_event_quic_tokens.o \
		src/event/quic/ngx_event_quic_tokens.c


objs/src/event/quic/ngx_event_quic_ack.o:	$(CORE_DEPS) \
	src/event/quic/ngx_event_quic_ack.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/quic/ngx_event_quic_ack.o \
		src/event/quic/ngx_event_quic_ack.c


objs/src/event/quic/ngx_event_quic_output.o:	$(CORE_DEPS) \
	src/event/quic/ngx_event_quic_output.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/quic/ngx_event_quic_output.o \
		src/event/quic/ngx_event_quic_output.c


objs/src/event/quic/ngx_event_quic_socket.o:	$(CORE_DEPS) \
	src/event/quic/ngx_event_quic_socket.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/quic/ngx_event_quic_socket.o \
		src/event/quic/ngx_event_quic_socket.c


objs/src/event/quic/ngx_event_quic_openssl_compat.o:	$(CORE_DEPS) \
	src/event/quic/ngx_event_quic_openssl_compat.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/quic/ngx_event_quic_openssl_compat.o \
		src/event/quic/ngx_event_quic_openssl_compat.c


objs/src/event/quic/ngx_event_quic_bpf.o:	$(CORE_DEPS) \
	src/event/quic/ngx_event_quic_bpf.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/quic/ngx_event_quic_bpf.o \
		src/event/quic/ngx_event_quic_bpf.c


objs/src/event/quic/ngx_event_quic_bpf_code.o:	$(CORE_DEPS) \
	src/event/quic/ngx_event_quic_bpf_code.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/quic/ngx_event_quic_bpf_code.o \
		src/event/quic/ngx_event_quic_bpf_code.c


objs/src/core/ngx_regex.o:	$(CORE_DEPS) \
	src/core/ngx_regex.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_regex.o \
		src/core/ngx_regex.c


objs/src/http/ngx_http.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http.o \
		src/http/ngx_http.c


objs/src/http/ngx_http_core_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_core_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_core_module.o \
		src/http/ngx_http_core_module.c


objs/src/http/ngx_http_special_response.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_special_response.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_special_response.o \
		src/http/ngx_http_special_response.c


objs/src/http/ngx_http_request.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_request.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_request.o \
		src/http/ngx_http_request.c


objs/src/http/ngx_http_parse.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_parse.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_parse.o \
		src/http/ngx_http_parse.c


objs/src/http/modules/ngx_http_log_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_log_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_log_module.o \
		src/http/modules/ngx_http_log_module.c


objs/src/http/ngx_http_request_body.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_request_body.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_request_body.o \
		src/http/ngx_http_request_body.c


objs/src/http/ngx_http_variables.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_variables.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_variables.o \
		src/http/ngx_http_variables.c


objs/src/http/ngx_http_script.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_script.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_script.o \
		src/http/ngx_http_script.c


objs/src/http/ngx_http_upstream.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_upstream.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_upstream.o \
		src/http/ngx_http_upstream.c


objs/src/http/ngx_http_upstream_round_robin.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_upstream_round_robin.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_upstream_round_robin.o \
		src/http/ngx_http_upstream_round_robin.c


objs/src/http/ngx_http_file_cache.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_file_cache.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_file_cache.o \
		src/http/ngx_http_file_cache.c


objs/src/http/ngx_http_huff_decode.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_huff_decode.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_huff_decode.o \
		src/http/ngx_http_huff_decode.c


objs/src/http/ngx_http_huff_encode.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_huff_encode.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_huff_encode.o \
		src/http/ngx_http_huff_encode.c


objs/src/http/ngx_http_write_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_write_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_write_filter_module.o \
		src/http/ngx_http_write_filter_module.c


objs/src/http/ngx_http_header_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_header_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_header_filter_module.o \
		src/http/ngx_http_header_filter_module.c


objs/src/http/modules/ngx_http_chunked_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_chunked_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_chunked_filter_module.o \
		src/http/modules/ngx_http_chunked_filter_module.c


objs/src/http/v2/ngx_http_v2_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/v2/ngx_http_v2_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/v2/ngx_http_v2_filter_module.o \
		src/http/v2/ngx_http_v2_filter_module.c


objs/src/http/v3/ngx_http_v3_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/v3/ngx_http_v3_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/v3/ngx_http_v3_filter_module.o \
		src/http/v3/ngx_http_v3_filter_module.c


objs/src/http/modules/ngx_http_range_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_range_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_range_filter_module.o \
		src/http/modules/ngx_http_range_filter_module.c


objs/src/http/modules/ngx_http_gzip_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_gzip_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_gzip_filter_module.o \
		src/http/modules/ngx_http_gzip_filter_module.c


objs/src/http/ngx_http_postpone_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_postpone_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_postpone_filter_module.o \
		src/http/ngx_http_postpone_filter_module.c


objs/src/http/modules/ngx_http_ssi_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_ssi_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_ssi_filter_module.o \
		src/http/modules/ngx_http_ssi_filter_module.c


objs/src/http/modules/ngx_http_charset_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_charset_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_charset_filter_module.o \
		src/http/modules/ngx_http_charset_filter_module.c


objs/src/http/modules/ngx_http_xslt_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_xslt_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_xslt_filter_module.o \
		src/http/modules/ngx_http_xslt_filter_module.c


objs/src/http/modules/ngx_http_image_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_image_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_image_filter_module.o \
		src/http/modules/ngx_http_image_filter_module.c


objs/src/http/modules/ngx_http_sub_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_sub_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_sub_filter_module.o \
		src/http/modules/ngx_http_sub_filter_module.c


objs/src/http/modules/ngx_http_addition_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_addition_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_addition_filter_module.o \
		src/http/modules/ngx_http_addition_filter_module.c


objs/src/http/modules/ngx_http_gunzip_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_gunzip_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_gunzip_filter_module.o \
		src/http/modules/ngx_http_gunzip_filter_module.c


objs/src/http/modules/ngx_http_userid_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_userid_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_userid_filter_module.o \
		src/http/modules/ngx_http_userid_filter_module.c


objs/src/http/modules/ngx_http_headers_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_headers_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_headers_filter_module.o \
		src/http/modules/ngx_http_headers_filter_module.c


objs/src/http/ngx_http_copy_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_copy_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_copy_filter_module.o \
		src/http/ngx_http_copy_filter_module.c


objs/src/http/modules/ngx_http_not_modified_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_not_modified_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_not_modified_filter_module.o \
		src/http/modules/ngx_http_not_modified_filter_module.c


objs/src/http/modules/ngx_http_slice_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_slice_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_slice_filter_module.o \
		src/http/modules/ngx_http_slice_filter_module.c


objs/src/http/v2/ngx_http_v2.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/v2/ngx_http_v2.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/v2/ngx_http_v2.o \
		src/http/v2/ngx_http_v2.c


objs/src/http/v2/ngx_http_v2_table.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/v2/ngx_http_v2_table.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/v2/ngx_http_v2_table.o \
		src/http/v2/ngx_http_v2_table.c


objs/src/http/v2/ngx_http_v2_encode.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/v2/ngx_http_v2_encode.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/v2/ngx_http_v2_encode.o \
		src/http/v2/ngx_http_v2_encode.c


objs/src/http/v2/ngx_http_v2_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/v2/ngx_http_v2_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/v2/ngx_http_v2_module.o \
		src/http/v2/ngx_http_v2_module.c


objs/src/http/v3/ngx_http_v3.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/v3/ngx_http_v3.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/v3/ngx_http_v3.o \
		src/http/v3/ngx_http_v3.c


objs/src/http/v3/ngx_http_v3_encode.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/v3/ngx_http_v3_encode.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/v3/ngx_http_v3_encode.o \
		src/http/v3/ngx_http_v3_encode.c


objs/src/http/v3/ngx_http_v3_parse.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/v3/ngx_http_v3_parse.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/v3/ngx_http_v3_parse.o \
		src/http/v3/ngx_http_v3_parse.c


objs/src/http/v3/ngx_http_v3_table.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/v3/ngx_http_v3_table.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/v3/ngx_http_v3_table.o \
		src/http/v3/ngx_http_v3_table.c


objs/src/http/v3/ngx_http_v3_uni.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/v3/ngx_http_v3_uni.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/v3/ngx_http_v3_uni.o \
		src/http/v3/ngx_http_v3_uni.c


objs/src/http/v3/ngx_http_v3_request.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/v3/ngx_http_v3_request.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/v3/ngx_http_v3_request.o \
		src/http/v3/ngx_http_v3_request.c


objs/src/http/v3/ngx_http_v3_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/v3/ngx_http_v3_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/v3/ngx_http_v3_module.o \
		src/http/v3/ngx_http_v3_module.c


objs/src/http/modules/ngx_http_static_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_static_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_static_module.o \
		src/http/modules/ngx_http_static_module.c


objs/src/http/modules/ngx_http_gzip_static_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_gzip_static_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_gzip_static_module.o \
		src/http/modules/ngx_http_gzip_static_module.c


objs/src/http/modules/ngx_http_dav_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_dav_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_dav_module.o \
		src/http/modules/ngx_http_dav_module.c


objs/src/http/modules/ngx_http_autoindex_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_autoindex_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_autoindex_module.o \
		src/http/modules/ngx_http_autoindex_module.c


objs/src/http/modules/ngx_http_index_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_index_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_index_module.o \
		src/http/modules/ngx_http_index_module.c


objs/src/http/modules/ngx_http_random_index_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_random_index_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_random_index_module.o \
		src/http/modules/ngx_http_random_index_module.c


objs/src/http/modules/ngx_http_mirror_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_mirror_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_mirror_module.o \
		src/http/modules/ngx_http_mirror_module.c


objs/src/http/modules/ngx_http_try_files_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_try_files_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_try_files_module.o \
		src/http/modules/ngx_http_try_files_module.c


objs/src/http/modules/ngx_http_auth_request_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_auth_request_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_auth_request_module.o \
		src/http/modules/ngx_http_auth_request_module.c


objs/src/http/modules/ngx_http_auth_basic_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_auth_basic_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_auth_basic_module.o \
		src/http/modules/ngx_http_auth_basic_module.c


objs/src/http/modules/ngx_http_access_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_access_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_access_module.o \
		src/http/modules/ngx_http_access_module.c


objs/src/http/modules/ngx_http_limit_conn_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_limit_conn_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_limit_conn_module.o \
		src/http/modules/ngx_http_limit_conn_module.c


objs/src/http/modules/ngx_http_limit_req_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_limit_req_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_limit_req_module.o \
		src/http/modules/ngx_http_limit_req_module.c


objs/src/http/modules/ngx_http_realip_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_realip_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_realip_module.o \
		src/http/modules/ngx_http_realip_module.c


objs/src/http/modules/ngx_http_geo_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_geo_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_geo_module.o \
		src/http/modules/ngx_http_geo_module.c


objs/src/http/modules/ngx_http_geoip_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_geoip_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_geoip_module.o \
		src/http/modules/ngx_http_geoip_module.c


objs/src/http/modules/ngx_http_map_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_map_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_map_module.o \
		src/http/modules/ngx_http_map_module.c


objs/src/http/modules/ngx_http_split_clients_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_split_clients_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_split_clients_module.o \
		src/http/modules/ngx_http_split_clients_module.c


objs/src/http/modules/ngx_http_referer_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_referer_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_referer_module.o \
		src/http/modules/ngx_http_referer_module.c


objs/src/http/modules/ngx_http_rewrite_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_rewrite_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_rewrite_module.o \
		src/http/modules/ngx_http_rewrite_module.c


objs/src/http/modules/ngx_http_ssl_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_ssl_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_ssl_module.o \
		src/http/modules/ngx_http_ssl_module.c


objs/src/http/modules/ngx_http_proxy_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_proxy_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_proxy_module.o \
		src/http/modules/ngx_http_proxy_module.c


objs/src/http/modules/ngx_http_fastcgi_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_fastcgi_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_fastcgi_module.o \
		src/http/modules/ngx_http_fastcgi_module.c


objs/src/http/modules/ngx_http_uwsgi_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_uwsgi_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_uwsgi_module.o \
		src/http/modules/ngx_http_uwsgi_module.c


objs/src/http/modules/ngx_http_scgi_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_scgi_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_scgi_module.o \
		src/http/modules/ngx_http_scgi_module.c


objs/src/http/modules/ngx_http_grpc_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_grpc_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_grpc_module.o \
		src/http/modules/ngx_http_grpc_module.c


objs/src/http/modules/perl/ngx_http_perl_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/perl/ngx_http_perl_module.c
	$(CC) -c $(NGX_PERL_CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/perl/ngx_http_perl_module.o \
		src/http/modules/perl/ngx_http_perl_module.c


objs/src/http/modules/ngx_http_memcached_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_memcached_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_memcached_module.o \
		src/http/modules/ngx_http_memcached_module.c


objs/src/http/modules/ngx_http_empty_gif_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_empty_gif_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_empty_gif_module.o \
		src/http/modules/ngx_http_empty_gif_module.c


objs/src/http/modules/ngx_http_browser_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_browser_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_browser_module.o \
		src/http/modules/ngx_http_browser_module.c


objs/src/http/modules/ngx_http_secure_link_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_secure_link_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_secure_link_module.o \
		src/http/modules/ngx_http_secure_link_module.c


objs/src/http/modules/ngx_http_flv_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_flv_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_flv_module.o \
		src/http/modules/ngx_http_flv_module.c


objs/src/http/modules/ngx_http_mp4_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_mp4_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_mp4_module.o \
		src/http/modules/ngx_http_mp4_module.c


objs/src/http/modules/ngx_http_upstream_hash_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_upstream_hash_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_upstream_hash_module.o \
		src/http/modules/ngx_http_upstream_hash_module.c


objs/src/http/modules/ngx_http_upstream_ip_hash_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_upstream_ip_hash_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_upstream_ip_hash_module.o \
		src/http/modules/ngx_http_upstream_ip_hash_module.c


objs/src/http/modules/ngx_http_upstream_least_conn_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_upstream_least_conn_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_upstream_least_conn_module.o \
		src/http/modules/ngx_http_upstream_least_conn_module.c


objs/src/http/modules/ngx_http_upstream_random_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_upstream_random_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_upstream_random_module.o \
		src/http/modules/ngx_http_upstream_random_module.c


objs/src/http/modules/ngx_http_upstream_keepalive_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_upstream_keepalive_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_upstream_keepalive_module.o \
		src/http/modules/ngx_http_upstream_keepalive_module.c


objs/src/http/modules/ngx_http_upstream_zone_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_upstream_zone_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_upstream_zone_module.o \
		src/http/modules/ngx_http_upstream_zone_module.c


objs/src/http/modules/ngx_http_stub_status_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_stub_status_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_stub_status_module.o \
		src/http/modules/ngx_http_stub_status_module.c


objs/src/mail/ngx_mail.o:	$(CORE_DEPS) $(MAIL_DEPS) \
	src/mail/ngx_mail.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(MAIL_INCS) \
		-o objs/src/mail/ngx_mail.o \
		src/mail/ngx_mail.c


objs/src/mail/ngx_mail_core_module.o:	$(CORE_DEPS) $(MAIL_DEPS) \
	src/mail/ngx_mail_core_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(MAIL_INCS) \
		-o objs/src/mail/ngx_mail_core_module.o \
		src/mail/ngx_mail_core_module.c


objs/src/mail/ngx_mail_handler.o:	$(CORE_DEPS) $(MAIL_DEPS) \
	src/mail/ngx_mail_handler.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(MAIL_INCS) \
		-o objs/src/mail/ngx_mail_handler.o \
		src/mail/ngx_mail_handler.c


objs/src/mail/ngx_mail_parse.o:	$(CORE_DEPS) $(MAIL_DEPS) \
	src/mail/ngx_mail_parse.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(MAIL_INCS) \
		-o objs/src/mail/ngx_mail_parse.o \
		src/mail/ngx_mail_parse.c


objs/src/mail/ngx_mail_ssl_module.o:	$(CORE_DEPS) $(MAIL_DEPS) \
	src/mail/ngx_mail_ssl_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(MAIL_INCS) \
		-o objs/src/mail/ngx_mail_ssl_module.o \
		src/mail/ngx_mail_ssl_module.c


objs/src/mail/ngx_mail_pop3_module.o:	$(CORE_DEPS) $(MAIL_DEPS) \
	src/mail/ngx_mail_pop3_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(MAIL_INCS) \
		-o objs/src/mail/ngx_mail_pop3_module.o \
		src/mail/ngx_mail_pop3_module.c


objs/src/mail/ngx_mail_pop3_handler.o:	$(CORE_DEPS) $(MAIL_DEPS) \
	src/mail/ngx_mail_pop3_handler.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(MAIL_INCS) \
		-o objs/src/mail/ngx_mail_pop3_handler.o \
		src/mail/ngx_mail_pop3_handler.c


objs/src/mail/ngx_mail_imap_module.o:	$(CORE_DEPS) $(MAIL_DEPS) \
	src/mail/ngx_mail_imap_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(MAIL_INCS) \
		-o objs/src/mail/ngx_mail_imap_module.o \
		src/mail/ngx_mail_imap_module.c


objs/src/mail/ngx_mail_imap_handler.o:	$(CORE_DEPS) $(MAIL_DEPS) \
	src/mail/ngx_mail_imap_handler.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(MAIL_INCS) \
		-o objs/src/mail/ngx_mail_imap_handler.o \
		src/mail/ngx_mail_imap_handler.c


objs/src/mail/ngx_mail_smtp_module.o:	$(CORE_DEPS) $(MAIL_DEPS) \
	src/mail/ngx_mail_smtp_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(MAIL_INCS) \
		-o objs/src/mail/ngx_mail_smtp_module.o \
		src/mail/ngx_mail_smtp_module.c


objs/src/mail/ngx_mail_smtp_handler.o:	$(CORE_DEPS) $(MAIL_DEPS) \
	src/mail/ngx_mail_smtp_handler.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(MAIL_INCS) \
		-o objs/src/mail/ngx_mail_smtp_handler.o \
		src/mail/ngx_mail_smtp_handler.c


objs/src/mail/ngx_mail_auth_http_module.o:	$(CORE_DEPS) $(MAIL_DEPS) \
	src/mail/ngx_mail_auth_http_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(MAIL_INCS) \
		-o objs/src/mail/ngx_mail_auth_http_module.o \
		src/mail/ngx_mail_auth_http_module.c


objs/src/mail/ngx_mail_proxy_module.o:	$(CORE_DEPS) $(MAIL_DEPS) \
	src/mail/ngx_mail_proxy_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(MAIL_INCS) \
		-o objs/src/mail/ngx_mail_proxy_module.o \
		src/mail/ngx_mail_proxy_module.c


objs/src/mail/ngx_mail_realip_module.o:	$(CORE_DEPS) $(MAIL_DEPS) \
	src/mail/ngx_mail_realip_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(MAIL_INCS) \
		-o objs/src/mail/ngx_mail_realip_module.o \
		src/mail/ngx_mail_realip_module.c


objs/src/stream/ngx_stream.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream.o \
		src/stream/ngx_stream.c


objs/src/stream/ngx_stream_variables.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_variables.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_variables.o \
		src/stream/ngx_stream_variables.c


objs/src/stream/ngx_stream_script.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_script.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_script.o \
		src/stream/ngx_stream_script.c


objs/src/stream/ngx_stream_handler.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_handler.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_handler.o \
		src/stream/ngx_stream_handler.c


objs/src/stream/ngx_stream_core_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_core_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_core_module.o \
		src/stream/ngx_stream_core_module.c


objs/src/stream/ngx_stream_log_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_log_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_log_module.o \
		src/stream/ngx_stream_log_module.c


objs/src/stream/ngx_stream_proxy_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_proxy_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_proxy_module.o \
		src/stream/ngx_stream_proxy_module.c


objs/src/stream/ngx_stream_upstream.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_upstream.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_upstream.o \
		src/stream/ngx_stream_upstream.c


objs/src/stream/ngx_stream_upstream_round_robin.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_upstream_round_robin.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_upstream_round_robin.o \
		src/stream/ngx_stream_upstream_round_robin.c


objs/src/stream/ngx_stream_write_filter_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_write_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_write_filter_module.o \
		src/stream/ngx_stream_write_filter_module.c


objs/src/stream/ngx_stream_ssl_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_ssl_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_ssl_module.o \
		src/stream/ngx_stream_ssl_module.c


objs/src/stream/ngx_stream_realip_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_realip_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_realip_module.o \
		src/stream/ngx_stream_realip_module.c


objs/src/stream/ngx_stream_limit_conn_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_limit_conn_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_limit_conn_module.o \
		src/stream/ngx_stream_limit_conn_module.c


objs/src/stream/ngx_stream_access_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_access_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_access_module.o \
		src/stream/ngx_stream_access_module.c


objs/src/stream/ngx_stream_geo_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_geo_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_geo_module.o \
		src/stream/ngx_stream_geo_module.c


objs/src/stream/ngx_stream_geoip_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_geoip_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_geoip_module.o \
		src/stream/ngx_stream_geoip_module.c


objs/src/stream/ngx_stream_map_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_map_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_map_module.o \
		src/stream/ngx_stream_map_module.c


objs/src/stream/ngx_stream_split_clients_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_split_clients_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_split_clients_module.o \
		src/stream/ngx_stream_split_clients_module.c


objs/src/stream/ngx_stream_return_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_return_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_return_module.o \
		src/stream/ngx_stream_return_module.c


objs/src/stream/ngx_stream_set_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_set_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_set_module.o \
		src/stream/ngx_stream_set_module.c


objs/src/stream/ngx_stream_upstream_hash_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_upstream_hash_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_upstream_hash_module.o \
		src/stream/ngx_stream_upstream_hash_module.c


objs/src/stream/ngx_stream_upstream_least_conn_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_upstream_least_conn_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_upstream_least_conn_module.o \
		src/stream/ngx_stream_upstream_least_conn_module.c


objs/src/stream/ngx_stream_upstream_random_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_upstream_random_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_upstream_random_module.o \
		src/stream/ngx_stream_upstream_random_module.c


objs/src/stream/ngx_stream_upstream_zone_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_upstream_zone_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_upstream_zone_module.o \
		src/stream/ngx_stream_upstream_zone_module.c


objs/src/stream/ngx_stream_ssl_preread_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_ssl_preread_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_ssl_preread_module.o \
		src/stream/ngx_stream_ssl_preread_module.c


modules/njs/nginx/../build/libnjs.a: objs/Makefile
	cd modules/njs/nginx/.. \
	&& if [ -f build/Makefile ]; then $(MAKE) clean; fi \
	&& CFLAGS="$(CFLAGS)" CC="$(CC)" ./configure --no-openssl \
		--no-libxml2 --no-zlib --no-pcre --no-quickjs \
	&& $(MAKE) libnjs

modules/njs/nginx/../build/libqjs.a: objs/Makefile
	cd modules/njs/nginx/.. \
	&& if [ -f build/Makefile ]; then $(MAKE) clean; fi \
	&& CFLAGS="$(CFLAGS)" CC="$(CC)" ./configure --no-openssl \
		--no-libxml2 --no-zlib --no-pcre \
	&& $(MAKE) libnjs libqjs


modules:	objs/ngx_http_echo_module.so

objs/ngx_http_echo_module.so:	objs/addon/src/ngx_http_echo_module.o \
	objs/addon/src/ngx_http_echo_util.o \
	objs/addon/src/ngx_http_echo_timer.o \
	objs/addon/src/ngx_http_echo_var.o \
	objs/addon/src/ngx_http_echo_handler.o \
	objs/addon/src/ngx_http_echo_filter.o \
	objs/addon/src/ngx_http_echo_sleep.o \
	objs/addon/src/ngx_http_echo_location.o \
	objs/addon/src/ngx_http_echo_echo.o \
	objs/addon/src/ngx_http_echo_request_info.o \
	objs/addon/src/ngx_http_echo_subrequest.o \
	objs/addon/src/ngx_http_echo_foreach.o \
	objs/ngx_http_echo_module_modules.o

	$(LINK) -o objs/ngx_http_echo_module.so \
	objs/addon/src/ngx_http_echo_module.o \
	objs/addon/src/ngx_http_echo_util.o \
	objs/addon/src/ngx_http_echo_timer.o \
	objs/addon/src/ngx_http_echo_var.o \
	objs/addon/src/ngx_http_echo_handler.o \
	objs/addon/src/ngx_http_echo_filter.o \
	objs/addon/src/ngx_http_echo_sleep.o \
	objs/addon/src/ngx_http_echo_location.o \
	objs/addon/src/ngx_http_echo_echo.o \
	objs/addon/src/ngx_http_echo_request_info.o \
	objs/addon/src/ngx_http_echo_subrequest.o \
	objs/addon/src/ngx_http_echo_foreach.o \
	objs/ngx_http_echo_module_modules.o \
	-L/usr/share/luajit-2.1/jit -Wl,-Bsymbolic-functions,-z,relro -Wl,-z,now -Wl,--as-needed \
	-Wl,-E -fstack-protector-strong -L/usr/local/lib -L/usr/lib/x86_64-linux-gnu/perl/5.40/CORE -lperl -ldl -lm -lpthread -lc -lcrypt \
	-shared


objs/ngx_http_echo_module_modules.o:	$(CORE_DEPS) \
	objs/ngx_http_echo_module_modules.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/ngx_http_echo_module_modules.o \
		objs/ngx_http_echo_module_modules.c


objs/addon/src/ngx_http_echo_module.o:	$(ADDON_DEPS) \
	modules/echo-nginx-module/src/ngx_http_echo_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_echo_module.o \
		modules/echo-nginx-module/src/ngx_http_echo_module.c


objs/addon/src/ngx_http_echo_util.o:	$(ADDON_DEPS) \
	modules/echo-nginx-module/src/ngx_http_echo_util.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_echo_util.o \
		modules/echo-nginx-module/src/ngx_http_echo_util.c


objs/addon/src/ngx_http_echo_timer.o:	$(ADDON_DEPS) \
	modules/echo-nginx-module/src/ngx_http_echo_timer.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_echo_timer.o \
		modules/echo-nginx-module/src/ngx_http_echo_timer.c


objs/addon/src/ngx_http_echo_var.o:	$(ADDON_DEPS) \
	modules/echo-nginx-module/src/ngx_http_echo_var.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_echo_var.o \
		modules/echo-nginx-module/src/ngx_http_echo_var.c


objs/addon/src/ngx_http_echo_handler.o:	$(ADDON_DEPS) \
	modules/echo-nginx-module/src/ngx_http_echo_handler.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_echo_handler.o \
		modules/echo-nginx-module/src/ngx_http_echo_handler.c


objs/addon/src/ngx_http_echo_filter.o:	$(ADDON_DEPS) \
	modules/echo-nginx-module/src/ngx_http_echo_filter.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_echo_filter.o \
		modules/echo-nginx-module/src/ngx_http_echo_filter.c


objs/addon/src/ngx_http_echo_sleep.o:	$(ADDON_DEPS) \
	modules/echo-nginx-module/src/ngx_http_echo_sleep.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_echo_sleep.o \
		modules/echo-nginx-module/src/ngx_http_echo_sleep.c


objs/addon/src/ngx_http_echo_location.o:	$(ADDON_DEPS) \
	modules/echo-nginx-module/src/ngx_http_echo_location.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_echo_location.o \
		modules/echo-nginx-module/src/ngx_http_echo_location.c


objs/addon/src/ngx_http_echo_echo.o:	$(ADDON_DEPS) \
	modules/echo-nginx-module/src/ngx_http_echo_echo.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_echo_echo.o \
		modules/echo-nginx-module/src/ngx_http_echo_echo.c


objs/addon/src/ngx_http_echo_request_info.o:	$(ADDON_DEPS) \
	modules/echo-nginx-module/src/ngx_http_echo_request_info.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_echo_request_info.o \
		modules/echo-nginx-module/src/ngx_http_echo_request_info.c


objs/addon/src/ngx_http_echo_subrequest.o:	$(ADDON_DEPS) \
	modules/echo-nginx-module/src/ngx_http_echo_subrequest.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_echo_subrequest.o \
		modules/echo-nginx-module/src/ngx_http_echo_subrequest.c


objs/addon/src/ngx_http_echo_foreach.o:	$(ADDON_DEPS) \
	modules/echo-nginx-module/src/ngx_http_echo_foreach.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_echo_foreach.o \
		modules/echo-nginx-module/src/ngx_http_echo_foreach.c


modules:	objs/ngx_http_headers_more_filter_module.so

objs/ngx_http_headers_more_filter_module.so:	objs/addon/src/ngx_http_headers_more_filter_module.o \
	objs/addon/src/ngx_http_headers_more_headers_out.o \
	objs/addon/src/ngx_http_headers_more_headers_in.o \
	objs/addon/src/ngx_http_headers_more_util.o \
	objs/ngx_http_headers_more_filter_module_modules.o

	$(LINK) -o objs/ngx_http_headers_more_filter_module.so \
	objs/addon/src/ngx_http_headers_more_filter_module.o \
	objs/addon/src/ngx_http_headers_more_headers_out.o \
	objs/addon/src/ngx_http_headers_more_headers_in.o \
	objs/addon/src/ngx_http_headers_more_util.o \
	objs/ngx_http_headers_more_filter_module_modules.o \
	-L/usr/share/luajit-2.1/jit -Wl,-Bsymbolic-functions,-z,relro -Wl,-z,now -Wl,--as-needed \
	-Wl,-E -fstack-protector-strong -L/usr/local/lib -L/usr/lib/x86_64-linux-gnu/perl/5.40/CORE -lperl -ldl -lm -lpthread -lc -lcrypt \
	-shared


objs/ngx_http_headers_more_filter_module_modules.o:	$(CORE_DEPS) \
	objs/ngx_http_headers_more_filter_module_modules.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/ngx_http_headers_more_filter_module_modules.o \
		objs/ngx_http_headers_more_filter_module_modules.c


objs/addon/src/ngx_http_headers_more_filter_module.o:	$(ADDON_DEPS) \
	modules/headers-more-nginx-module/src/ngx_http_headers_more_filter_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_headers_more_filter_module.o \
		modules/headers-more-nginx-module/src/ngx_http_headers_more_filter_module.c


objs/addon/src/ngx_http_headers_more_headers_out.o:	$(ADDON_DEPS) \
	modules/headers-more-nginx-module/src/ngx_http_headers_more_headers_out.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_headers_more_headers_out.o \
		modules/headers-more-nginx-module/src/ngx_http_headers_more_headers_out.c


objs/addon/src/ngx_http_headers_more_headers_in.o:	$(ADDON_DEPS) \
	modules/headers-more-nginx-module/src/ngx_http_headers_more_headers_in.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_headers_more_headers_in.o \
		modules/headers-more-nginx-module/src/ngx_http_headers_more_headers_in.c


objs/addon/src/ngx_http_headers_more_util.o:	$(ADDON_DEPS) \
	modules/headers-more-nginx-module/src/ngx_http_headers_more_util.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_headers_more_util.o \
		modules/headers-more-nginx-module/src/ngx_http_headers_more_util.c


modules:	objs/ngx_http_lua_module.so

objs/ngx_http_lua_module.so:	objs/addon/src/ngx_http_lua_script.o \
	objs/addon/src/ngx_http_lua_log.o \
	objs/addon/src/ngx_http_lua_subrequest.o \
	objs/addon/src/ngx_http_lua_ndk.o \
	objs/addon/src/ngx_http_lua_control.o \
	objs/addon/src/ngx_http_lua_time.o \
	objs/addon/src/ngx_http_lua_misc.o \
	objs/addon/src/ngx_http_lua_variable.o \
	objs/addon/src/ngx_http_lua_string.o \
	objs/addon/src/ngx_http_lua_output.o \
	objs/addon/src/ngx_http_lua_headers.o \
	objs/addon/src/ngx_http_lua_req_body.o \
	objs/addon/src/ngx_http_lua_uri.o \
	objs/addon/src/ngx_http_lua_args.o \
	objs/addon/src/ngx_http_lua_ctx.o \
	objs/addon/src/ngx_http_lua_regex.o \
	objs/addon/src/ngx_http_lua_module.o \
	objs/addon/src/ngx_http_lua_headers_out.o \
	objs/addon/src/ngx_http_lua_headers_in.o \
	objs/addon/src/ngx_http_lua_directive.o \
	objs/addon/src/ngx_http_lua_consts.o \
	objs/addon/src/ngx_http_lua_exception.o \
	objs/addon/src/ngx_http_lua_util.o \
	objs/addon/src/ngx_http_lua_cache.o \
	objs/addon/src/ngx_http_lua_contentby.o \
	objs/addon/src/ngx_http_lua_server_rewriteby.o \
	objs/addon/src/ngx_http_lua_rewriteby.o \
	objs/addon/src/ngx_http_lua_accessby.o \
	objs/addon/src/ngx_http_lua_setby.o \
	objs/addon/src/ngx_http_lua_capturefilter.o \
	objs/addon/src/ngx_http_lua_clfactory.o \
	objs/addon/src/ngx_http_lua_pcrefix.o \
	objs/addon/src/ngx_http_lua_headerfilterby.o \
	objs/addon/src/ngx_http_lua_shdict.o \
	objs/addon/src/ngx_http_lua_socket_tcp.o \
	objs/addon/src/ngx_http_lua_api.o \
	objs/addon/src/ngx_http_lua_logby.o \
	objs/addon/src/ngx_http_lua_sleep.o \
	objs/addon/src/ngx_http_lua_semaphore.o \
	objs/addon/src/ngx_http_lua_coroutine.o \
	objs/addon/src/ngx_http_lua_bodyfilterby.o \
	objs/addon/src/ngx_http_lua_initby.o \
	objs/addon/src/ngx_http_lua_initworkerby.o \
	objs/addon/src/ngx_http_lua_exitworkerby.o \
	objs/addon/src/ngx_http_lua_socket_udp.o \
	objs/addon/src/ngx_http_lua_req_method.o \
	objs/addon/src/ngx_http_lua_phase.o \
	objs/addon/src/ngx_http_lua_uthread.o \
	objs/addon/src/ngx_http_lua_timer.o \
	objs/addon/src/ngx_http_lua_config.o \
	objs/addon/src/ngx_http_lua_worker.o \
	objs/addon/src/ngx_http_lua_ssl_client_helloby.o \
	objs/addon/src/ngx_http_lua_ssl_certby.o \
	objs/addon/src/ngx_http_lua_ssl_export_keying_material.o \
	objs/addon/src/ngx_http_lua_ssl_ocsp.o \
	objs/addon/src/ngx_http_lua_lex.o \
	objs/addon/src/ngx_http_lua_balancer.o \
	objs/addon/src/ngx_http_lua_ssl_session_storeby.o \
	objs/addon/src/ngx_http_lua_ssl_session_fetchby.o \
	objs/addon/src/ngx_http_lua_ssl.o \
	objs/addon/src/ngx_http_lua_log_ringbuf.o \
	objs/addon/src/ngx_http_lua_input_filters.o \
	objs/addon/src/ngx_http_lua_pipe.o \
	objs/addon/src/ngx_http_lua_worker_thread.o \
	objs/ngx_http_lua_module_modules.o

	$(LINK) -o objs/ngx_http_lua_module.so \
	objs/addon/src/ngx_http_lua_script.o \
	objs/addon/src/ngx_http_lua_log.o \
	objs/addon/src/ngx_http_lua_subrequest.o \
	objs/addon/src/ngx_http_lua_ndk.o \
	objs/addon/src/ngx_http_lua_control.o \
	objs/addon/src/ngx_http_lua_time.o \
	objs/addon/src/ngx_http_lua_misc.o \
	objs/addon/src/ngx_http_lua_variable.o \
	objs/addon/src/ngx_http_lua_string.o \
	objs/addon/src/ngx_http_lua_output.o \
	objs/addon/src/ngx_http_lua_headers.o \
	objs/addon/src/ngx_http_lua_req_body.o \
	objs/addon/src/ngx_http_lua_uri.o \
	objs/addon/src/ngx_http_lua_args.o \
	objs/addon/src/ngx_http_lua_ctx.o \
	objs/addon/src/ngx_http_lua_regex.o \
	objs/addon/src/ngx_http_lua_module.o \
	objs/addon/src/ngx_http_lua_headers_out.o \
	objs/addon/src/ngx_http_lua_headers_in.o \
	objs/addon/src/ngx_http_lua_directive.o \
	objs/addon/src/ngx_http_lua_consts.o \
	objs/addon/src/ngx_http_lua_exception.o \
	objs/addon/src/ngx_http_lua_util.o \
	objs/addon/src/ngx_http_lua_cache.o \
	objs/addon/src/ngx_http_lua_contentby.o \
	objs/addon/src/ngx_http_lua_server_rewriteby.o \
	objs/addon/src/ngx_http_lua_rewriteby.o \
	objs/addon/src/ngx_http_lua_accessby.o \
	objs/addon/src/ngx_http_lua_setby.o \
	objs/addon/src/ngx_http_lua_capturefilter.o \
	objs/addon/src/ngx_http_lua_clfactory.o \
	objs/addon/src/ngx_http_lua_pcrefix.o \
	objs/addon/src/ngx_http_lua_headerfilterby.o \
	objs/addon/src/ngx_http_lua_shdict.o \
	objs/addon/src/ngx_http_lua_socket_tcp.o \
	objs/addon/src/ngx_http_lua_api.o \
	objs/addon/src/ngx_http_lua_logby.o \
	objs/addon/src/ngx_http_lua_sleep.o \
	objs/addon/src/ngx_http_lua_semaphore.o \
	objs/addon/src/ngx_http_lua_coroutine.o \
	objs/addon/src/ngx_http_lua_bodyfilterby.o \
	objs/addon/src/ngx_http_lua_initby.o \
	objs/addon/src/ngx_http_lua_initworkerby.o \
	objs/addon/src/ngx_http_lua_exitworkerby.o \
	objs/addon/src/ngx_http_lua_socket_udp.o \
	objs/addon/src/ngx_http_lua_req_method.o \
	objs/addon/src/ngx_http_lua_phase.o \
	objs/addon/src/ngx_http_lua_uthread.o \
	objs/addon/src/ngx_http_lua_timer.o \
	objs/addon/src/ngx_http_lua_config.o \
	objs/addon/src/ngx_http_lua_worker.o \
	objs/addon/src/ngx_http_lua_ssl_client_helloby.o \
	objs/addon/src/ngx_http_lua_ssl_certby.o \
	objs/addon/src/ngx_http_lua_ssl_export_keying_material.o \
	objs/addon/src/ngx_http_lua_ssl_ocsp.o \
	objs/addon/src/ngx_http_lua_lex.o \
	objs/addon/src/ngx_http_lua_balancer.o \
	objs/addon/src/ngx_http_lua_ssl_session_storeby.o \
	objs/addon/src/ngx_http_lua_ssl_session_fetchby.o \
	objs/addon/src/ngx_http_lua_ssl.o \
	objs/addon/src/ngx_http_lua_log_ringbuf.o \
	objs/addon/src/ngx_http_lua_input_filters.o \
	objs/addon/src/ngx_http_lua_pipe.o \
	objs/addon/src/ngx_http_lua_worker_thread.o \
	objs/ngx_http_lua_module_modules.o \
	-L/usr/share/luajit-2.1/jit -Wl,-Bsymbolic-functions,-z,relro -Wl,-z,now -Wl,--as-needed -L/usr/share/luajit-2.1/jit -lluajit-5.1 -lm -ldl \
	-Wl,-E -fstack-protector-strong -L/usr/local/lib -L/usr/lib/x86_64-linux-gnu/perl/5.40/CORE -lperl -ldl -lm -lpthread -lc -lcrypt \
	-shared


objs/ngx_http_lua_module_modules.o:	$(CORE_DEPS) \
	objs/ngx_http_lua_module_modules.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/ngx_http_lua_module_modules.o \
		objs/ngx_http_lua_module_modules.c


objs/addon/src/ngx_http_lua_script.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_script.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_script.o \
		modules/lua-nginx-module/src/ngx_http_lua_script.c


objs/addon/src/ngx_http_lua_log.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_log.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_log.o \
		modules/lua-nginx-module/src/ngx_http_lua_log.c


objs/addon/src/ngx_http_lua_subrequest.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_subrequest.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_subrequest.o \
		modules/lua-nginx-module/src/ngx_http_lua_subrequest.c


objs/addon/src/ngx_http_lua_ndk.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_ndk.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_ndk.o \
		modules/lua-nginx-module/src/ngx_http_lua_ndk.c


objs/addon/src/ngx_http_lua_control.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_control.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_control.o \
		modules/lua-nginx-module/src/ngx_http_lua_control.c


objs/addon/src/ngx_http_lua_time.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_time.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_time.o \
		modules/lua-nginx-module/src/ngx_http_lua_time.c


objs/addon/src/ngx_http_lua_misc.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_misc.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_misc.o \
		modules/lua-nginx-module/src/ngx_http_lua_misc.c


objs/addon/src/ngx_http_lua_variable.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_variable.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_variable.o \
		modules/lua-nginx-module/src/ngx_http_lua_variable.c


objs/addon/src/ngx_http_lua_string.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_string.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_string.o \
		modules/lua-nginx-module/src/ngx_http_lua_string.c


objs/addon/src/ngx_http_lua_output.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_output.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_output.o \
		modules/lua-nginx-module/src/ngx_http_lua_output.c


objs/addon/src/ngx_http_lua_headers.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_headers.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_headers.o \
		modules/lua-nginx-module/src/ngx_http_lua_headers.c


objs/addon/src/ngx_http_lua_req_body.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_req_body.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_req_body.o \
		modules/lua-nginx-module/src/ngx_http_lua_req_body.c


objs/addon/src/ngx_http_lua_uri.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_uri.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_uri.o \
		modules/lua-nginx-module/src/ngx_http_lua_uri.c


objs/addon/src/ngx_http_lua_args.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_args.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_args.o \
		modules/lua-nginx-module/src/ngx_http_lua_args.c


objs/addon/src/ngx_http_lua_ctx.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_ctx.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_ctx.o \
		modules/lua-nginx-module/src/ngx_http_lua_ctx.c


objs/addon/src/ngx_http_lua_regex.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_regex.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_regex.o \
		modules/lua-nginx-module/src/ngx_http_lua_regex.c


objs/addon/src/ngx_http_lua_module.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_module.o \
		modules/lua-nginx-module/src/ngx_http_lua_module.c


objs/addon/src/ngx_http_lua_headers_out.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_headers_out.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_headers_out.o \
		modules/lua-nginx-module/src/ngx_http_lua_headers_out.c


objs/addon/src/ngx_http_lua_headers_in.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_headers_in.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_headers_in.o \
		modules/lua-nginx-module/src/ngx_http_lua_headers_in.c


objs/addon/src/ngx_http_lua_directive.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_directive.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_directive.o \
		modules/lua-nginx-module/src/ngx_http_lua_directive.c


objs/addon/src/ngx_http_lua_consts.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_consts.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_consts.o \
		modules/lua-nginx-module/src/ngx_http_lua_consts.c


objs/addon/src/ngx_http_lua_exception.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_exception.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_exception.o \
		modules/lua-nginx-module/src/ngx_http_lua_exception.c


objs/addon/src/ngx_http_lua_util.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_util.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_util.o \
		modules/lua-nginx-module/src/ngx_http_lua_util.c


objs/addon/src/ngx_http_lua_cache.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_cache.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_cache.o \
		modules/lua-nginx-module/src/ngx_http_lua_cache.c


objs/addon/src/ngx_http_lua_contentby.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_contentby.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_contentby.o \
		modules/lua-nginx-module/src/ngx_http_lua_contentby.c


objs/addon/src/ngx_http_lua_server_rewriteby.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_server_rewriteby.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_server_rewriteby.o \
		modules/lua-nginx-module/src/ngx_http_lua_server_rewriteby.c


objs/addon/src/ngx_http_lua_rewriteby.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_rewriteby.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_rewriteby.o \
		modules/lua-nginx-module/src/ngx_http_lua_rewriteby.c


objs/addon/src/ngx_http_lua_accessby.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_accessby.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_accessby.o \
		modules/lua-nginx-module/src/ngx_http_lua_accessby.c


objs/addon/src/ngx_http_lua_setby.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_setby.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_setby.o \
		modules/lua-nginx-module/src/ngx_http_lua_setby.c


objs/addon/src/ngx_http_lua_capturefilter.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_capturefilter.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_capturefilter.o \
		modules/lua-nginx-module/src/ngx_http_lua_capturefilter.c


objs/addon/src/ngx_http_lua_clfactory.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_clfactory.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_clfactory.o \
		modules/lua-nginx-module/src/ngx_http_lua_clfactory.c


objs/addon/src/ngx_http_lua_pcrefix.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_pcrefix.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_pcrefix.o \
		modules/lua-nginx-module/src/ngx_http_lua_pcrefix.c


objs/addon/src/ngx_http_lua_headerfilterby.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_headerfilterby.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_headerfilterby.o \
		modules/lua-nginx-module/src/ngx_http_lua_headerfilterby.c


objs/addon/src/ngx_http_lua_shdict.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_shdict.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_shdict.o \
		modules/lua-nginx-module/src/ngx_http_lua_shdict.c


objs/addon/src/ngx_http_lua_socket_tcp.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_socket_tcp.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_socket_tcp.o \
		modules/lua-nginx-module/src/ngx_http_lua_socket_tcp.c


objs/addon/src/ngx_http_lua_api.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_api.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_api.o \
		modules/lua-nginx-module/src/ngx_http_lua_api.c


objs/addon/src/ngx_http_lua_logby.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_logby.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_logby.o \
		modules/lua-nginx-module/src/ngx_http_lua_logby.c


objs/addon/src/ngx_http_lua_sleep.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_sleep.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_sleep.o \
		modules/lua-nginx-module/src/ngx_http_lua_sleep.c


objs/addon/src/ngx_http_lua_semaphore.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_semaphore.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_semaphore.o \
		modules/lua-nginx-module/src/ngx_http_lua_semaphore.c


objs/addon/src/ngx_http_lua_coroutine.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_coroutine.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_coroutine.o \
		modules/lua-nginx-module/src/ngx_http_lua_coroutine.c


objs/addon/src/ngx_http_lua_bodyfilterby.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_bodyfilterby.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_bodyfilterby.o \
		modules/lua-nginx-module/src/ngx_http_lua_bodyfilterby.c


objs/addon/src/ngx_http_lua_initby.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_initby.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_initby.o \
		modules/lua-nginx-module/src/ngx_http_lua_initby.c


objs/addon/src/ngx_http_lua_initworkerby.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_initworkerby.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_initworkerby.o \
		modules/lua-nginx-module/src/ngx_http_lua_initworkerby.c


objs/addon/src/ngx_http_lua_exitworkerby.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_exitworkerby.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_exitworkerby.o \
		modules/lua-nginx-module/src/ngx_http_lua_exitworkerby.c


objs/addon/src/ngx_http_lua_socket_udp.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_socket_udp.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_socket_udp.o \
		modules/lua-nginx-module/src/ngx_http_lua_socket_udp.c


objs/addon/src/ngx_http_lua_req_method.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_req_method.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_req_method.o \
		modules/lua-nginx-module/src/ngx_http_lua_req_method.c


objs/addon/src/ngx_http_lua_phase.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_phase.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_phase.o \
		modules/lua-nginx-module/src/ngx_http_lua_phase.c


objs/addon/src/ngx_http_lua_uthread.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_uthread.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_uthread.o \
		modules/lua-nginx-module/src/ngx_http_lua_uthread.c


objs/addon/src/ngx_http_lua_timer.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_timer.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_timer.o \
		modules/lua-nginx-module/src/ngx_http_lua_timer.c


objs/addon/src/ngx_http_lua_config.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_config.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_config.o \
		modules/lua-nginx-module/src/ngx_http_lua_config.c


objs/addon/src/ngx_http_lua_worker.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_worker.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_worker.o \
		modules/lua-nginx-module/src/ngx_http_lua_worker.c


objs/addon/src/ngx_http_lua_ssl_client_helloby.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_ssl_client_helloby.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_ssl_client_helloby.o \
		modules/lua-nginx-module/src/ngx_http_lua_ssl_client_helloby.c


objs/addon/src/ngx_http_lua_ssl_certby.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_ssl_certby.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_ssl_certby.o \
		modules/lua-nginx-module/src/ngx_http_lua_ssl_certby.c


objs/addon/src/ngx_http_lua_ssl_export_keying_material.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_ssl_export_keying_material.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_ssl_export_keying_material.o \
		modules/lua-nginx-module/src/ngx_http_lua_ssl_export_keying_material.c


objs/addon/src/ngx_http_lua_ssl_ocsp.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_ssl_ocsp.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_ssl_ocsp.o \
		modules/lua-nginx-module/src/ngx_http_lua_ssl_ocsp.c


objs/addon/src/ngx_http_lua_lex.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_lex.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_lex.o \
		modules/lua-nginx-module/src/ngx_http_lua_lex.c


objs/addon/src/ngx_http_lua_balancer.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_balancer.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_balancer.o \
		modules/lua-nginx-module/src/ngx_http_lua_balancer.c


objs/addon/src/ngx_http_lua_ssl_session_storeby.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_ssl_session_storeby.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_ssl_session_storeby.o \
		modules/lua-nginx-module/src/ngx_http_lua_ssl_session_storeby.c


objs/addon/src/ngx_http_lua_ssl_session_fetchby.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_ssl_session_fetchby.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_ssl_session_fetchby.o \
		modules/lua-nginx-module/src/ngx_http_lua_ssl_session_fetchby.c


objs/addon/src/ngx_http_lua_ssl.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_ssl.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_ssl.o \
		modules/lua-nginx-module/src/ngx_http_lua_ssl.c


objs/addon/src/ngx_http_lua_log_ringbuf.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_log_ringbuf.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_log_ringbuf.o \
		modules/lua-nginx-module/src/ngx_http_lua_log_ringbuf.c


objs/addon/src/ngx_http_lua_input_filters.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_input_filters.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_input_filters.o \
		modules/lua-nginx-module/src/ngx_http_lua_input_filters.c


objs/addon/src/ngx_http_lua_pipe.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_pipe.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_pipe.o \
		modules/lua-nginx-module/src/ngx_http_lua_pipe.c


objs/addon/src/ngx_http_lua_worker_thread.o:	$(ADDON_DEPS) \
	modules/lua-nginx-module/src/ngx_http_lua_worker_thread.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_worker_thread.o \
		modules/lua-nginx-module/src/ngx_http_lua_worker_thread.c


modules:	objs/ngx_http_memc_module.so

objs/ngx_http_memc_module.so:	objs/addon/src/ngx_http_memc_module.o \
	objs/addon/src/ngx_http_memc_request.o \
	objs/addon/src/ngx_http_memc_response.o \
	objs/addon/src/ngx_http_memc_util.o \
	objs/addon/src/ngx_http_memc_handler.o \
	objs/ngx_http_memc_module_modules.o

	$(LINK) -o objs/ngx_http_memc_module.so \
	objs/addon/src/ngx_http_memc_module.o \
	objs/addon/src/ngx_http_memc_request.o \
	objs/addon/src/ngx_http_memc_response.o \
	objs/addon/src/ngx_http_memc_util.o \
	objs/addon/src/ngx_http_memc_handler.o \
	objs/ngx_http_memc_module_modules.o \
	-L/usr/share/luajit-2.1/jit -Wl,-Bsymbolic-functions,-z,relro -Wl,-z,now -Wl,--as-needed \
	-Wl,-E -fstack-protector-strong -L/usr/local/lib -L/usr/lib/x86_64-linux-gnu/perl/5.40/CORE -lperl -ldl -lm -lpthread -lc -lcrypt \
	-shared


objs/ngx_http_memc_module_modules.o:	$(CORE_DEPS) \
	objs/ngx_http_memc_module_modules.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/ngx_http_memc_module_modules.o \
		objs/ngx_http_memc_module_modules.c


objs/addon/src/ngx_http_memc_module.o:	$(ADDON_DEPS) \
	modules/memc-nginx-module/src/ngx_http_memc_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_memc_module.o \
		modules/memc-nginx-module/src/ngx_http_memc_module.c


objs/addon/src/ngx_http_memc_request.o:	$(ADDON_DEPS) \
	modules/memc-nginx-module/src/ngx_http_memc_request.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_memc_request.o \
		modules/memc-nginx-module/src/ngx_http_memc_request.c


objs/addon/src/ngx_http_memc_response.o:	$(ADDON_DEPS) \
	modules/memc-nginx-module/src/ngx_http_memc_response.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_memc_response.o \
		modules/memc-nginx-module/src/ngx_http_memc_response.c


objs/addon/src/ngx_http_memc_util.o:	$(ADDON_DEPS) \
	modules/memc-nginx-module/src/ngx_http_memc_util.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_memc_util.o \
		modules/memc-nginx-module/src/ngx_http_memc_util.c


objs/addon/src/ngx_http_memc_handler.o:	$(ADDON_DEPS) \
	modules/memc-nginx-module/src/ngx_http_memc_handler.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_memc_handler.o \
		modules/memc-nginx-module/src/ngx_http_memc_handler.c


modules:	objs/ngx_http_modsecurity_module.so

objs/ngx_http_modsecurity_module.so:	objs/addon/src/ngx_http_modsecurity_module.o \
	objs/addon/src/ngx_http_modsecurity_pre_access.o \
	objs/addon/src/ngx_http_modsecurity_header_filter.o \
	objs/addon/src/ngx_http_modsecurity_body_filter.o \
	objs/addon/src/ngx_http_modsecurity_log.o \
	objs/addon/src/ngx_http_modsecurity_rewrite.o \
	objs/ngx_http_modsecurity_module_modules.o

	$(LINK) -o objs/ngx_http_modsecurity_module.so \
	objs/addon/src/ngx_http_modsecurity_module.o \
	objs/addon/src/ngx_http_modsecurity_pre_access.o \
	objs/addon/src/ngx_http_modsecurity_header_filter.o \
	objs/addon/src/ngx_http_modsecurity_body_filter.o \
	objs/addon/src/ngx_http_modsecurity_log.o \
	objs/addon/src/ngx_http_modsecurity_rewrite.o \
	objs/ngx_http_modsecurity_module_modules.o \
	-L/usr/share/luajit-2.1/jit -Wl,-Bsymbolic-functions,-z,relro -Wl,-z,now -Wl,--as-needed -lmodsecurity \
	-Wl,-E -fstack-protector-strong -L/usr/local/lib -L/usr/lib/x86_64-linux-gnu/perl/5.40/CORE -lperl -ldl -lm -lpthread -lc -lcrypt \
	-shared


objs/ngx_http_modsecurity_module_modules.o:	$(CORE_DEPS) \
	objs/ngx_http_modsecurity_module_modules.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/ngx_http_modsecurity_module_modules.o \
		objs/ngx_http_modsecurity_module_modules.c


objs/addon/src/ngx_http_modsecurity_module.o:	$(ADDON_DEPS) \
	modules/ModSecurity-nginx/src/ngx_http_modsecurity_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_modsecurity_module.o \
		modules/ModSecurity-nginx/src/ngx_http_modsecurity_module.c


objs/addon/src/ngx_http_modsecurity_pre_access.o:	$(ADDON_DEPS) \
	modules/ModSecurity-nginx/src/ngx_http_modsecurity_pre_access.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_modsecurity_pre_access.o \
		modules/ModSecurity-nginx/src/ngx_http_modsecurity_pre_access.c


objs/addon/src/ngx_http_modsecurity_header_filter.o:	$(ADDON_DEPS) \
	modules/ModSecurity-nginx/src/ngx_http_modsecurity_header_filter.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_modsecurity_header_filter.o \
		modules/ModSecurity-nginx/src/ngx_http_modsecurity_header_filter.c


objs/addon/src/ngx_http_modsecurity_body_filter.o:	$(ADDON_DEPS) \
	modules/ModSecurity-nginx/src/ngx_http_modsecurity_body_filter.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_modsecurity_body_filter.o \
		modules/ModSecurity-nginx/src/ngx_http_modsecurity_body_filter.c


objs/addon/src/ngx_http_modsecurity_log.o:	$(ADDON_DEPS) \
	modules/ModSecurity-nginx/src/ngx_http_modsecurity_log.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_modsecurity_log.o \
		modules/ModSecurity-nginx/src/ngx_http_modsecurity_log.c


objs/addon/src/ngx_http_modsecurity_rewrite.o:	$(ADDON_DEPS) \
	modules/ModSecurity-nginx/src/ngx_http_modsecurity_rewrite.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_modsecurity_rewrite.o \
		modules/ModSecurity-nginx/src/ngx_http_modsecurity_rewrite.c


modules:	objs/ngx_nchan_module.so

objs/ngx_nchan_module.so:	objs/addon/src/nchan_defs.o \
	objs/addon/src/nchan_variables.o \
	objs/addon/src/nchan_module.o \
	objs/addon/util/nchan_debug.o \
	objs/addon/util/nchan_list.o \
	objs/addon/util/nchan_slist.o \
	objs/addon/util/ngx_nchan_hacked_slab.o \
	objs/addon/util/shmem.o \
	objs/addon/util/nchan_rbtree.o \
	objs/addon/util/nchan_reuse_queue.o \
	objs/addon/util/nchan_output.o \
	objs/addon/util/nchan_util.o \
	objs/addon/util/nchan_fake_request.o \
	objs/addon/util/nchan_bufchainpool.o \
	objs/addon/util/nchan_channel_id.o \
	objs/addon/util/nchan_output_info.o \
	objs/addon/util/nchan_msg.o \
	objs/addon/util/nchan_thingcache.o \
	objs/addon/util/nchan_reaper.o \
	objs/addon/util/nchan_subrequest.o \
	objs/addon/util/nchan_benchmark.o \
	objs/addon/util/nchan_stats.o \
	objs/addon/util/nchan_accumulator.o \
	objs/addon/util/nchan_timequeue.o \
	objs/addon/util/hdr_histogram.o \
	objs/addon/subscribers/common.o \
	objs/addon/subscribers/longpoll.o \
	objs/addon/subscribers/intervalpoll.o \
	objs/addon/subscribers/eventsource.o \
	objs/addon/subscribers/http-chunked.o \
	objs/addon/subscribers/http-multipart-mixed.o \
	objs/addon/subscribers/http-raw-stream.o \
	objs/addon/subscribers/websocket.o \
	objs/addon/src/nchan_websocket_publisher.o \
	objs/addon/subscribers/internal.o \
	objs/addon/subscribers/memstore_ipc.o \
	objs/addon/subscribers/memstore_multi.o \
	objs/addon/subscribers/memstore_redis.o \
	objs/addon/subscribers/getmsg_proxy.o \
	objs/addon/subscribers/benchmark.o \
	objs/addon/store/spool.o \
	objs/addon/store/ngx_rwlock.o \
	objs/addon/store/store_common.o \
	objs/addon/memory/ipc.o \
	objs/addon/memory/ipc-handlers.o \
	objs/addon/memory/groups.o \
	objs/addon/memory/memstore.o \
	objs/addon/hiredis/alloc.o \
	objs/addon/hiredis/async.o \
	objs/addon/hiredis/dict.o \
	objs/addon/hiredis/hiredis.o \
	objs/addon/hiredis/net.o \
	objs/addon/hiredis/read.o \
	objs/addon/hiredis/sds.o \
	objs/addon/hiredis/sockcompat.o \
	objs/addon/hiredis/ssl.o \
	objs/addon/redis/cmp.o \
	objs/addon/redis/redis_lua_commands.o \
	objs/addon/redis/redis_nodeset_parser.o \
	objs/addon/redis/redis_nodeset.o \
	objs/addon/redis/redis_nodeset_stats.o \
	objs/addon/redis/rdsstore.o \
	objs/addon/redis/redis_nginx_adapter.o \
	objs/ngx_nchan_module_modules.o

	$(LINK) -o objs/ngx_nchan_module.so \
	objs/addon/src/nchan_defs.o \
	objs/addon/src/nchan_variables.o \
	objs/addon/src/nchan_module.o \
	objs/addon/util/nchan_debug.o \
	objs/addon/util/nchan_list.o \
	objs/addon/util/nchan_slist.o \
	objs/addon/util/ngx_nchan_hacked_slab.o \
	objs/addon/util/shmem.o \
	objs/addon/util/nchan_rbtree.o \
	objs/addon/util/nchan_reuse_queue.o \
	objs/addon/util/nchan_output.o \
	objs/addon/util/nchan_util.o \
	objs/addon/util/nchan_fake_request.o \
	objs/addon/util/nchan_bufchainpool.o \
	objs/addon/util/nchan_channel_id.o \
	objs/addon/util/nchan_output_info.o \
	objs/addon/util/nchan_msg.o \
	objs/addon/util/nchan_thingcache.o \
	objs/addon/util/nchan_reaper.o \
	objs/addon/util/nchan_subrequest.o \
	objs/addon/util/nchan_benchmark.o \
	objs/addon/util/nchan_stats.o \
	objs/addon/util/nchan_accumulator.o \
	objs/addon/util/nchan_timequeue.o \
	objs/addon/util/hdr_histogram.o \
	objs/addon/subscribers/common.o \
	objs/addon/subscribers/longpoll.o \
	objs/addon/subscribers/intervalpoll.o \
	objs/addon/subscribers/eventsource.o \
	objs/addon/subscribers/http-chunked.o \
	objs/addon/subscribers/http-multipart-mixed.o \
	objs/addon/subscribers/http-raw-stream.o \
	objs/addon/subscribers/websocket.o \
	objs/addon/src/nchan_websocket_publisher.o \
	objs/addon/subscribers/internal.o \
	objs/addon/subscribers/memstore_ipc.o \
	objs/addon/subscribers/memstore_multi.o \
	objs/addon/subscribers/memstore_redis.o \
	objs/addon/subscribers/getmsg_proxy.o \
	objs/addon/subscribers/benchmark.o \
	objs/addon/store/spool.o \
	objs/addon/store/ngx_rwlock.o \
	objs/addon/store/store_common.o \
	objs/addon/memory/ipc.o \
	objs/addon/memory/ipc-handlers.o \
	objs/addon/memory/groups.o \
	objs/addon/memory/memstore.o \
	objs/addon/hiredis/alloc.o \
	objs/addon/hiredis/async.o \
	objs/addon/hiredis/dict.o \
	objs/addon/hiredis/hiredis.o \
	objs/addon/hiredis/net.o \
	objs/addon/hiredis/read.o \
	objs/addon/hiredis/sds.o \
	objs/addon/hiredis/sockcompat.o \
	objs/addon/hiredis/ssl.o \
	objs/addon/redis/cmp.o \
	objs/addon/redis/redis_lua_commands.o \
	objs/addon/redis/redis_nodeset_parser.o \
	objs/addon/redis/redis_nodeset.o \
	objs/addon/redis/redis_nodeset_stats.o \
	objs/addon/redis/rdsstore.o \
	objs/addon/redis/redis_nginx_adapter.o \
	objs/ngx_nchan_module_modules.o \
	-L/usr/share/luajit-2.1/jit -Wl,-Bsymbolic-functions,-z,relro -Wl,-z,now -Wl,--as-needed -lm \
	-Wl,-E -fstack-protector-strong -L/usr/local/lib -L/usr/lib/x86_64-linux-gnu/perl/5.40/CORE -lperl -ldl -lm -lpthread -lc -lcrypt \
	-shared


objs/ngx_nchan_module_modules.o:	$(CORE_DEPS) \
	objs/ngx_nchan_module_modules.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/ngx_nchan_module_modules.o \
		objs/ngx_nchan_module_modules.c


objs/addon/src/nchan_defs.o:	$(ADDON_DEPS) \
	modules/nchan/src/nchan_defs.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/nchan_defs.o \
		modules/nchan/src/nchan_defs.c


objs/addon/src/nchan_variables.o:	$(ADDON_DEPS) \
	modules/nchan/src/nchan_variables.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/nchan_variables.o \
		modules/nchan/src/nchan_variables.c


objs/addon/src/nchan_module.o:	$(ADDON_DEPS) \
	modules/nchan/src/nchan_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/nchan_module.o \
		modules/nchan/src/nchan_module.c


objs/addon/util/nchan_debug.o:	$(ADDON_DEPS) \
	modules/nchan/src/util/nchan_debug.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/util/nchan_debug.o \
		modules/nchan/src/util/nchan_debug.c


objs/addon/util/nchan_list.o:	$(ADDON_DEPS) \
	modules/nchan/src/util/nchan_list.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/util/nchan_list.o \
		modules/nchan/src/util/nchan_list.c


objs/addon/util/nchan_slist.o:	$(ADDON_DEPS) \
	modules/nchan/src/util/nchan_slist.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/util/nchan_slist.o \
		modules/nchan/src/util/nchan_slist.c


objs/addon/util/ngx_nchan_hacked_slab.o:	$(ADDON_DEPS) \
	modules/nchan/src/util/ngx_nchan_hacked_slab.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/util/ngx_nchan_hacked_slab.o \
		modules/nchan/src/util/ngx_nchan_hacked_slab.c


objs/addon/util/shmem.o:	$(ADDON_DEPS) \
	modules/nchan/src/util/shmem.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/util/shmem.o \
		modules/nchan/src/util/shmem.c


objs/addon/util/nchan_rbtree.o:	$(ADDON_DEPS) \
	modules/nchan/src/util/nchan_rbtree.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/util/nchan_rbtree.o \
		modules/nchan/src/util/nchan_rbtree.c


objs/addon/util/nchan_reuse_queue.o:	$(ADDON_DEPS) \
	modules/nchan/src/util/nchan_reuse_queue.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/util/nchan_reuse_queue.o \
		modules/nchan/src/util/nchan_reuse_queue.c


objs/addon/util/nchan_output.o:	$(ADDON_DEPS) \
	modules/nchan/src/util/nchan_output.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/util/nchan_output.o \
		modules/nchan/src/util/nchan_output.c


objs/addon/util/nchan_util.o:	$(ADDON_DEPS) \
	modules/nchan/src/util/nchan_util.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/util/nchan_util.o \
		modules/nchan/src/util/nchan_util.c


objs/addon/util/nchan_fake_request.o:	$(ADDON_DEPS) \
	modules/nchan/src/util/nchan_fake_request.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/util/nchan_fake_request.o \
		modules/nchan/src/util/nchan_fake_request.c


objs/addon/util/nchan_bufchainpool.o:	$(ADDON_DEPS) \
	modules/nchan/src/util/nchan_bufchainpool.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/util/nchan_bufchainpool.o \
		modules/nchan/src/util/nchan_bufchainpool.c


objs/addon/util/nchan_channel_id.o:	$(ADDON_DEPS) \
	modules/nchan/src/util/nchan_channel_id.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/util/nchan_channel_id.o \
		modules/nchan/src/util/nchan_channel_id.c


objs/addon/util/nchan_output_info.o:	$(ADDON_DEPS) \
	modules/nchan/src/util/nchan_output_info.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/util/nchan_output_info.o \
		modules/nchan/src/util/nchan_output_info.c


objs/addon/util/nchan_msg.o:	$(ADDON_DEPS) \
	modules/nchan/src/util/nchan_msg.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/util/nchan_msg.o \
		modules/nchan/src/util/nchan_msg.c


objs/addon/util/nchan_thingcache.o:	$(ADDON_DEPS) \
	modules/nchan/src/util/nchan_thingcache.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/util/nchan_thingcache.o \
		modules/nchan/src/util/nchan_thingcache.c


objs/addon/util/nchan_reaper.o:	$(ADDON_DEPS) \
	modules/nchan/src/util/nchan_reaper.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/util/nchan_reaper.o \
		modules/nchan/src/util/nchan_reaper.c


objs/addon/util/nchan_subrequest.o:	$(ADDON_DEPS) \
	modules/nchan/src/util/nchan_subrequest.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/util/nchan_subrequest.o \
		modules/nchan/src/util/nchan_subrequest.c


objs/addon/util/nchan_benchmark.o:	$(ADDON_DEPS) \
	modules/nchan/src/util/nchan_benchmark.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/util/nchan_benchmark.o \
		modules/nchan/src/util/nchan_benchmark.c


objs/addon/util/nchan_stats.o:	$(ADDON_DEPS) \
	modules/nchan/src/util/nchan_stats.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/util/nchan_stats.o \
		modules/nchan/src/util/nchan_stats.c


objs/addon/util/nchan_accumulator.o:	$(ADDON_DEPS) \
	modules/nchan/src/util/nchan_accumulator.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/util/nchan_accumulator.o \
		modules/nchan/src/util/nchan_accumulator.c


objs/addon/util/nchan_timequeue.o:	$(ADDON_DEPS) \
	modules/nchan/src/util/nchan_timequeue.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/util/nchan_timequeue.o \
		modules/nchan/src/util/nchan_timequeue.c


objs/addon/util/hdr_histogram.o:	$(ADDON_DEPS) \
	modules/nchan/src/util/hdr_histogram.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/util/hdr_histogram.o \
		modules/nchan/src/util/hdr_histogram.c


objs/addon/subscribers/common.o:	$(ADDON_DEPS) \
	modules/nchan/src/subscribers/common.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/subscribers/common.o \
		modules/nchan/src/subscribers/common.c


objs/addon/subscribers/longpoll.o:	$(ADDON_DEPS) \
	modules/nchan/src/subscribers/longpoll.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/subscribers/longpoll.o \
		modules/nchan/src/subscribers/longpoll.c


objs/addon/subscribers/intervalpoll.o:	$(ADDON_DEPS) \
	modules/nchan/src/subscribers/intervalpoll.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/subscribers/intervalpoll.o \
		modules/nchan/src/subscribers/intervalpoll.c


objs/addon/subscribers/eventsource.o:	$(ADDON_DEPS) \
	modules/nchan/src/subscribers/eventsource.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/subscribers/eventsource.o \
		modules/nchan/src/subscribers/eventsource.c


objs/addon/subscribers/http-chunked.o:	$(ADDON_DEPS) \
	modules/nchan/src/subscribers/http-chunked.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/subscribers/http-chunked.o \
		modules/nchan/src/subscribers/http-chunked.c


objs/addon/subscribers/http-multipart-mixed.o:	$(ADDON_DEPS) \
	modules/nchan/src/subscribers/http-multipart-mixed.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/subscribers/http-multipart-mixed.o \
		modules/nchan/src/subscribers/http-multipart-mixed.c


objs/addon/subscribers/http-raw-stream.o:	$(ADDON_DEPS) \
	modules/nchan/src/subscribers/http-raw-stream.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/subscribers/http-raw-stream.o \
		modules/nchan/src/subscribers/http-raw-stream.c


objs/addon/subscribers/websocket.o:	$(ADDON_DEPS) \
	modules/nchan/src/subscribers/websocket.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/subscribers/websocket.o \
		modules/nchan/src/subscribers/websocket.c


objs/addon/src/nchan_websocket_publisher.o:	$(ADDON_DEPS) \
	modules/nchan/src/nchan_websocket_publisher.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/nchan_websocket_publisher.o \
		modules/nchan/src/nchan_websocket_publisher.c


objs/addon/subscribers/internal.o:	$(ADDON_DEPS) \
	modules/nchan/src/subscribers/internal.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/subscribers/internal.o \
		modules/nchan/src/subscribers/internal.c


objs/addon/subscribers/memstore_ipc.o:	$(ADDON_DEPS) \
	modules/nchan/src/subscribers/memstore_ipc.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/subscribers/memstore_ipc.o \
		modules/nchan/src/subscribers/memstore_ipc.c


objs/addon/subscribers/memstore_multi.o:	$(ADDON_DEPS) \
	modules/nchan/src/subscribers/memstore_multi.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/subscribers/memstore_multi.o \
		modules/nchan/src/subscribers/memstore_multi.c


objs/addon/subscribers/memstore_redis.o:	$(ADDON_DEPS) \
	modules/nchan/src/subscribers/memstore_redis.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/subscribers/memstore_redis.o \
		modules/nchan/src/subscribers/memstore_redis.c


objs/addon/subscribers/getmsg_proxy.o:	$(ADDON_DEPS) \
	modules/nchan/src/subscribers/getmsg_proxy.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/subscribers/getmsg_proxy.o \
		modules/nchan/src/subscribers/getmsg_proxy.c


objs/addon/subscribers/benchmark.o:	$(ADDON_DEPS) \
	modules/nchan/src/subscribers/benchmark.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/subscribers/benchmark.o \
		modules/nchan/src/subscribers/benchmark.c


objs/addon/store/spool.o:	$(ADDON_DEPS) \
	modules/nchan/src/store/spool.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/store/spool.o \
		modules/nchan/src/store/spool.c


objs/addon/store/ngx_rwlock.o:	$(ADDON_DEPS) \
	modules/nchan/src/store/ngx_rwlock.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/store/ngx_rwlock.o \
		modules/nchan/src/store/ngx_rwlock.c


objs/addon/store/store_common.o:	$(ADDON_DEPS) \
	modules/nchan/src/store/store_common.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/store/store_common.o \
		modules/nchan/src/store/store_common.c


objs/addon/memory/ipc.o:	$(ADDON_DEPS) \
	modules/nchan/src/store/memory/ipc.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/memory/ipc.o \
		modules/nchan/src/store/memory/ipc.c


objs/addon/memory/ipc-handlers.o:	$(ADDON_DEPS) \
	modules/nchan/src/store/memory/ipc-handlers.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/memory/ipc-handlers.o \
		modules/nchan/src/store/memory/ipc-handlers.c


objs/addon/memory/groups.o:	$(ADDON_DEPS) \
	modules/nchan/src/store/memory/groups.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/memory/groups.o \
		modules/nchan/src/store/memory/groups.c


objs/addon/memory/memstore.o:	$(ADDON_DEPS) \
	modules/nchan/src/store/memory/memstore.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/memory/memstore.o \
		modules/nchan/src/store/memory/memstore.c


objs/addon/hiredis/alloc.o:	$(ADDON_DEPS) \
	modules/nchan/src/store/redis/hiredis/alloc.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/hiredis/alloc.o \
		modules/nchan/src/store/redis/hiredis/alloc.c


objs/addon/hiredis/async.o:	$(ADDON_DEPS) \
	modules/nchan/src/store/redis/hiredis/async.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/hiredis/async.o \
		modules/nchan/src/store/redis/hiredis/async.c


objs/addon/hiredis/dict.o:	$(ADDON_DEPS) \
	modules/nchan/src/store/redis/hiredis/dict.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/hiredis/dict.o \
		modules/nchan/src/store/redis/hiredis/dict.c


objs/addon/hiredis/hiredis.o:	$(ADDON_DEPS) \
	modules/nchan/src/store/redis/hiredis/hiredis.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/hiredis/hiredis.o \
		modules/nchan/src/store/redis/hiredis/hiredis.c


objs/addon/hiredis/net.o:	$(ADDON_DEPS) \
	modules/nchan/src/store/redis/hiredis/net.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/hiredis/net.o \
		modules/nchan/src/store/redis/hiredis/net.c


objs/addon/hiredis/read.o:	$(ADDON_DEPS) \
	modules/nchan/src/store/redis/hiredis/read.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/hiredis/read.o \
		modules/nchan/src/store/redis/hiredis/read.c


objs/addon/hiredis/sds.o:	$(ADDON_DEPS) \
	modules/nchan/src/store/redis/hiredis/sds.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/hiredis/sds.o \
		modules/nchan/src/store/redis/hiredis/sds.c


objs/addon/hiredis/sockcompat.o:	$(ADDON_DEPS) \
	modules/nchan/src/store/redis/hiredis/sockcompat.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/hiredis/sockcompat.o \
		modules/nchan/src/store/redis/hiredis/sockcompat.c


objs/addon/hiredis/ssl.o:	$(ADDON_DEPS) \
	modules/nchan/src/store/redis/hiredis/ssl.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/hiredis/ssl.o \
		modules/nchan/src/store/redis/hiredis/ssl.c


objs/addon/redis/cmp.o:	$(ADDON_DEPS) \
	modules/nchan/src/store/redis/cmp.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/redis/cmp.o \
		modules/nchan/src/store/redis/cmp.c


objs/addon/redis/redis_lua_commands.o:	$(ADDON_DEPS) \
	modules/nchan/src/store/redis/redis_lua_commands.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/redis/redis_lua_commands.o \
		modules/nchan/src/store/redis/redis_lua_commands.c


objs/addon/redis/redis_nodeset_parser.o:	$(ADDON_DEPS) \
	modules/nchan/src/store/redis/redis_nodeset_parser.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/redis/redis_nodeset_parser.o \
		modules/nchan/src/store/redis/redis_nodeset_parser.c


objs/addon/redis/redis_nodeset.o:	$(ADDON_DEPS) \
	modules/nchan/src/store/redis/redis_nodeset.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/redis/redis_nodeset.o \
		modules/nchan/src/store/redis/redis_nodeset.c


objs/addon/redis/redis_nodeset_stats.o:	$(ADDON_DEPS) \
	modules/nchan/src/store/redis/redis_nodeset_stats.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/redis/redis_nodeset_stats.o \
		modules/nchan/src/store/redis/redis_nodeset_stats.c


objs/addon/redis/rdsstore.o:	$(ADDON_DEPS) \
	modules/nchan/src/store/redis/rdsstore.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/redis/rdsstore.o \
		modules/nchan/src/store/redis/rdsstore.c


objs/addon/redis/redis_nginx_adapter.o:	$(ADDON_DEPS) \
	modules/nchan/src/store/redis/redis_nginx_adapter.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/redis/redis_nginx_adapter.o \
		modules/nchan/src/store/redis/redis_nginx_adapter.c


modules:	objs/ngx_http_dav_ext_module.so

objs/ngx_http_dav_ext_module.so:	objs/addon/nginx-dav-ext-module/ngx_http_dav_ext_module.o \
	objs/ngx_http_dav_ext_module_modules.o

	$(LINK) -o objs/ngx_http_dav_ext_module.so \
	objs/addon/nginx-dav-ext-module/ngx_http_dav_ext_module.o \
	objs/ngx_http_dav_ext_module_modules.o \
	-L/usr/share/luajit-2.1/jit -Wl,-Bsymbolic-functions,-z,relro -Wl,-z,now -Wl,--as-needed -lxml2 -lxslt -lexslt \
	-Wl,-E -fstack-protector-strong -L/usr/local/lib -L/usr/lib/x86_64-linux-gnu/perl/5.40/CORE -lperl -ldl -lm -lpthread -lc -lcrypt \
	-shared


objs/ngx_http_dav_ext_module_modules.o:	$(CORE_DEPS) \
	objs/ngx_http_dav_ext_module_modules.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/ngx_http_dav_ext_module_modules.o \
		objs/ngx_http_dav_ext_module_modules.c


objs/addon/nginx-dav-ext-module/ngx_http_dav_ext_module.o:	$(ADDON_DEPS) \
	modules/nginx-dav-ext-module/ngx_http_dav_ext_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-dav-ext-module/ngx_http_dav_ext_module.o \
		modules/nginx-dav-ext-module/ngx_http_dav_ext_module.c


modules:	objs/ngx_rtmp_module.so

objs/ngx_rtmp_module.so:	objs/addon/nginx-rtmp-module/ngx_rtmp.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_init.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_handshake.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_handler.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_amf.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_send.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_shared.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_eval.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_receive.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_core_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_cmd_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_codec_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_access_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_record_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_live_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_play_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_flv_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_mp4_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_netcall_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_relay_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_bandwidth.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_exec_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_auto_push_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_notify_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_log_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_limit_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_bitop.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_proxy_protocol.o \
	objs/addon/hls/ngx_rtmp_hls_module.o \
	objs/addon/dash/ngx_rtmp_dash_module.o \
	objs/addon/hls/ngx_rtmp_mpegts.o \
	objs/addon/dash/ngx_rtmp_mp4.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_stat_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_control_module.o \
	objs/ngx_rtmp_module_modules.o

	$(LINK) -o objs/ngx_rtmp_module.so \
	objs/addon/nginx-rtmp-module/ngx_rtmp.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_init.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_handshake.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_handler.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_amf.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_send.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_shared.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_eval.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_receive.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_core_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_cmd_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_codec_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_access_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_record_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_live_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_play_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_flv_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_mp4_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_netcall_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_relay_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_bandwidth.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_exec_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_auto_push_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_notify_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_log_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_limit_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_bitop.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_proxy_protocol.o \
	objs/addon/hls/ngx_rtmp_hls_module.o \
	objs/addon/dash/ngx_rtmp_dash_module.o \
	objs/addon/hls/ngx_rtmp_mpegts.o \
	objs/addon/dash/ngx_rtmp_mp4.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_stat_module.o \
	objs/addon/nginx-rtmp-module/ngx_rtmp_control_module.o \
	objs/ngx_rtmp_module_modules.o \
	-L/usr/share/luajit-2.1/jit -Wl,-Bsymbolic-functions,-z,relro -Wl,-z,now -Wl,--as-needed \
	-Wl,-E -fstack-protector-strong -L/usr/local/lib -L/usr/lib/x86_64-linux-gnu/perl/5.40/CORE -lperl -ldl -lm -lpthread -lc -lcrypt \
	-shared


objs/ngx_rtmp_module_modules.o:	$(CORE_DEPS) \
	objs/ngx_rtmp_module_modules.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/ngx_rtmp_module_modules.o \
		objs/ngx_rtmp_module_modules.c


objs/addon/nginx-rtmp-module/ngx_rtmp.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp.o \
		modules/nginx-rtmp-module/ngx_rtmp.c


objs/addon/nginx-rtmp-module/ngx_rtmp_init.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_init.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_init.o \
		modules/nginx-rtmp-module/ngx_rtmp_init.c


objs/addon/nginx-rtmp-module/ngx_rtmp_handshake.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_handshake.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_handshake.o \
		modules/nginx-rtmp-module/ngx_rtmp_handshake.c


objs/addon/nginx-rtmp-module/ngx_rtmp_handler.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_handler.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_handler.o \
		modules/nginx-rtmp-module/ngx_rtmp_handler.c


objs/addon/nginx-rtmp-module/ngx_rtmp_amf.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_amf.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_amf.o \
		modules/nginx-rtmp-module/ngx_rtmp_amf.c


objs/addon/nginx-rtmp-module/ngx_rtmp_send.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_send.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_send.o \
		modules/nginx-rtmp-module/ngx_rtmp_send.c


objs/addon/nginx-rtmp-module/ngx_rtmp_shared.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_shared.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_shared.o \
		modules/nginx-rtmp-module/ngx_rtmp_shared.c


objs/addon/nginx-rtmp-module/ngx_rtmp_eval.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_eval.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_eval.o \
		modules/nginx-rtmp-module/ngx_rtmp_eval.c


objs/addon/nginx-rtmp-module/ngx_rtmp_receive.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_receive.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_receive.o \
		modules/nginx-rtmp-module/ngx_rtmp_receive.c


objs/addon/nginx-rtmp-module/ngx_rtmp_core_module.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_core_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_core_module.o \
		modules/nginx-rtmp-module/ngx_rtmp_core_module.c


objs/addon/nginx-rtmp-module/ngx_rtmp_cmd_module.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_cmd_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_cmd_module.o \
		modules/nginx-rtmp-module/ngx_rtmp_cmd_module.c


objs/addon/nginx-rtmp-module/ngx_rtmp_codec_module.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_codec_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_codec_module.o \
		modules/nginx-rtmp-module/ngx_rtmp_codec_module.c


objs/addon/nginx-rtmp-module/ngx_rtmp_access_module.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_access_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_access_module.o \
		modules/nginx-rtmp-module/ngx_rtmp_access_module.c


objs/addon/nginx-rtmp-module/ngx_rtmp_record_module.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_record_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_record_module.o \
		modules/nginx-rtmp-module/ngx_rtmp_record_module.c


objs/addon/nginx-rtmp-module/ngx_rtmp_live_module.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_live_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_live_module.o \
		modules/nginx-rtmp-module/ngx_rtmp_live_module.c


objs/addon/nginx-rtmp-module/ngx_rtmp_play_module.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_play_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_play_module.o \
		modules/nginx-rtmp-module/ngx_rtmp_play_module.c


objs/addon/nginx-rtmp-module/ngx_rtmp_flv_module.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_flv_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_flv_module.o \
		modules/nginx-rtmp-module/ngx_rtmp_flv_module.c


objs/addon/nginx-rtmp-module/ngx_rtmp_mp4_module.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_mp4_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_mp4_module.o \
		modules/nginx-rtmp-module/ngx_rtmp_mp4_module.c


objs/addon/nginx-rtmp-module/ngx_rtmp_netcall_module.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_netcall_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_netcall_module.o \
		modules/nginx-rtmp-module/ngx_rtmp_netcall_module.c


objs/addon/nginx-rtmp-module/ngx_rtmp_relay_module.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_relay_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_relay_module.o \
		modules/nginx-rtmp-module/ngx_rtmp_relay_module.c


objs/addon/nginx-rtmp-module/ngx_rtmp_bandwidth.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_bandwidth.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_bandwidth.o \
		modules/nginx-rtmp-module/ngx_rtmp_bandwidth.c


objs/addon/nginx-rtmp-module/ngx_rtmp_exec_module.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_exec_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_exec_module.o \
		modules/nginx-rtmp-module/ngx_rtmp_exec_module.c


objs/addon/nginx-rtmp-module/ngx_rtmp_auto_push_module.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_auto_push_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_auto_push_module.o \
		modules/nginx-rtmp-module/ngx_rtmp_auto_push_module.c


objs/addon/nginx-rtmp-module/ngx_rtmp_notify_module.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_notify_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_notify_module.o \
		modules/nginx-rtmp-module/ngx_rtmp_notify_module.c


objs/addon/nginx-rtmp-module/ngx_rtmp_log_module.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_log_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_log_module.o \
		modules/nginx-rtmp-module/ngx_rtmp_log_module.c


objs/addon/nginx-rtmp-module/ngx_rtmp_limit_module.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_limit_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_limit_module.o \
		modules/nginx-rtmp-module/ngx_rtmp_limit_module.c


objs/addon/nginx-rtmp-module/ngx_rtmp_bitop.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_bitop.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_bitop.o \
		modules/nginx-rtmp-module/ngx_rtmp_bitop.c


objs/addon/nginx-rtmp-module/ngx_rtmp_proxy_protocol.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_proxy_protocol.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_proxy_protocol.o \
		modules/nginx-rtmp-module/ngx_rtmp_proxy_protocol.c


objs/addon/hls/ngx_rtmp_hls_module.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/hls/ngx_rtmp_hls_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/hls/ngx_rtmp_hls_module.o \
		modules/nginx-rtmp-module/hls/ngx_rtmp_hls_module.c


objs/addon/dash/ngx_rtmp_dash_module.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/dash/ngx_rtmp_dash_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/dash/ngx_rtmp_dash_module.o \
		modules/nginx-rtmp-module/dash/ngx_rtmp_dash_module.c


objs/addon/hls/ngx_rtmp_mpegts.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/hls/ngx_rtmp_mpegts.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/hls/ngx_rtmp_mpegts.o \
		modules/nginx-rtmp-module/hls/ngx_rtmp_mpegts.c


objs/addon/dash/ngx_rtmp_mp4.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/dash/ngx_rtmp_mp4.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/dash/ngx_rtmp_mp4.o \
		modules/nginx-rtmp-module/dash/ngx_rtmp_mp4.c


objs/addon/nginx-rtmp-module/ngx_rtmp_stat_module.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_stat_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_stat_module.o \
		modules/nginx-rtmp-module/ngx_rtmp_stat_module.c


objs/addon/nginx-rtmp-module/ngx_rtmp_control_module.o:	$(ADDON_DEPS) \
	modules/nginx-rtmp-module/ngx_rtmp_control_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-rtmp-module/ngx_rtmp_control_module.o \
		modules/nginx-rtmp-module/ngx_rtmp_control_module.c


modules:	objs/ngx_http_uploadprogress_module.so

objs/ngx_http_uploadprogress_module.so:	objs/addon/nginx-upload-progress-module/ngx_http_uploadprogress_module.o \
	objs/ngx_http_uploadprogress_module_modules.o

	$(LINK) -o objs/ngx_http_uploadprogress_module.so \
	objs/addon/nginx-upload-progress-module/ngx_http_uploadprogress_module.o \
	objs/ngx_http_uploadprogress_module_modules.o \
	-L/usr/share/luajit-2.1/jit -Wl,-Bsymbolic-functions,-z,relro -Wl,-z,now -Wl,--as-needed \
	-Wl,-E -fstack-protector-strong -L/usr/local/lib -L/usr/lib/x86_64-linux-gnu/perl/5.40/CORE -lperl -ldl -lm -lpthread -lc -lcrypt \
	-shared


objs/ngx_http_uploadprogress_module_modules.o:	$(CORE_DEPS) \
	objs/ngx_http_uploadprogress_module_modules.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/ngx_http_uploadprogress_module_modules.o \
		objs/ngx_http_uploadprogress_module_modules.c


objs/addon/nginx-upload-progress-module/ngx_http_uploadprogress_module.o:	$(ADDON_DEPS) \
	modules/nginx-upload-progress-module/ngx_http_uploadprogress_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-upload-progress-module/ngx_http_uploadprogress_module.o \
		modules/nginx-upload-progress-module/ngx_http_uploadprogress_module.c


modules:	objs/ngx_http_upstream_fair_module.so

objs/ngx_http_upstream_fair_module.so:	objs/addon/nginx-upstream-fair/ngx_http_upstream_fair_module.o \
	objs/ngx_http_upstream_fair_module_modules.o

	$(LINK) -o objs/ngx_http_upstream_fair_module.so \
	objs/addon/nginx-upstream-fair/ngx_http_upstream_fair_module.o \
	objs/ngx_http_upstream_fair_module_modules.o \
	-L/usr/share/luajit-2.1/jit -Wl,-Bsymbolic-functions,-z,relro -Wl,-z,now -Wl,--as-needed \
	-Wl,-E -fstack-protector-strong -L/usr/local/lib -L/usr/lib/x86_64-linux-gnu/perl/5.40/CORE -lperl -ldl -lm -lpthread -lc -lcrypt \
	-shared


objs/ngx_http_upstream_fair_module_modules.o:	$(CORE_DEPS) \
	objs/ngx_http_upstream_fair_module_modules.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/ngx_http_upstream_fair_module_modules.o \
		objs/ngx_http_upstream_fair_module_modules.c


objs/addon/nginx-upstream-fair/ngx_http_upstream_fair_module.o:	$(ADDON_DEPS) \
	modules/nginx-upstream-fair/ngx_http_upstream_fair_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx-upstream-fair/ngx_http_upstream_fair_module.o \
		modules/nginx-upstream-fair/ngx_http_upstream_fair_module.c


modules:	objs/ngx_http_brotli_filter_module.so

objs/ngx_http_brotli_filter_module.so:	objs/addon/filter/ngx_http_brotli_filter_module.o \
	objs/ngx_http_brotli_filter_module_modules.o

	$(LINK) -o objs/ngx_http_brotli_filter_module.so \
	objs/addon/filter/ngx_http_brotli_filter_module.o \
	objs/ngx_http_brotli_filter_module_modules.o \
	-L/usr/share/luajit-2.1/jit -Wl,-Bsymbolic-functions,-z,relro -Wl,-z,now -Wl,--as-needed -Lmodules/ngx_brotli/deps/brotli/c/../out -lbrotlienc -lbrotlicommon -lm \
	-Wl,-E -fstack-protector-strong -L/usr/local/lib -L/usr/lib/x86_64-linux-gnu/perl/5.40/CORE -lperl -ldl -lm -lpthread -lc -lcrypt \
	-shared


objs/ngx_http_brotli_filter_module_modules.o:	$(CORE_DEPS) \
	objs/ngx_http_brotli_filter_module_modules.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/ngx_http_brotli_filter_module_modules.o \
		objs/ngx_http_brotli_filter_module_modules.c


objs/addon/filter/ngx_http_brotli_filter_module.o:	$(ADDON_DEPS) \
	modules/ngx_brotli/filter/ngx_http_brotli_filter_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/filter/ngx_http_brotli_filter_module.o \
		modules/ngx_brotli/filter/ngx_http_brotli_filter_module.c


modules:	objs/ngx_http_brotli_static_module.so

objs/ngx_http_brotli_static_module.so:	objs/addon/static/ngx_http_brotli_static_module.o \
	objs/ngx_http_brotli_static_module_modules.o

	$(LINK) -o objs/ngx_http_brotli_static_module.so \
	objs/addon/static/ngx_http_brotli_static_module.o \
	objs/ngx_http_brotli_static_module_modules.o \
	-L/usr/share/luajit-2.1/jit -Wl,-Bsymbolic-functions,-z,relro -Wl,-z,now -Wl,--as-needed \
	-Wl,-E -fstack-protector-strong -L/usr/local/lib -L/usr/lib/x86_64-linux-gnu/perl/5.40/CORE -lperl -ldl -lm -lpthread -lc -lcrypt \
	-shared


objs/ngx_http_brotli_static_module_modules.o:	$(CORE_DEPS) \
	objs/ngx_http_brotli_static_module_modules.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/ngx_http_brotli_static_module_modules.o \
		objs/ngx_http_brotli_static_module_modules.c


objs/addon/static/ngx_http_brotli_static_module.o:	$(ADDON_DEPS) \
	modules/ngx_brotli/static/ngx_http_brotli_static_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/static/ngx_http_brotli_static_module.o \
		modules/ngx_brotli/static/ngx_http_brotli_static_module.c


modules:	objs/ngx_http_cache_purge_module.so

objs/ngx_http_cache_purge_module.so:	objs/addon/ngx_cache_purge_dynamic/ngx_cache_purge_module.o \
	objs/ngx_http_cache_purge_module_modules.o

	$(LINK) -o objs/ngx_http_cache_purge_module.so \
	objs/addon/ngx_cache_purge_dynamic/ngx_cache_purge_module.o \
	objs/ngx_http_cache_purge_module_modules.o \
	-L/usr/share/luajit-2.1/jit -Wl,-Bsymbolic-functions,-z,relro -Wl,-z,now -Wl,--as-needed \
	-Wl,-E -fstack-protector-strong -L/usr/local/lib -L/usr/lib/x86_64-linux-gnu/perl/5.40/CORE -lperl -ldl -lm -lpthread -lc -lcrypt \
	-shared


objs/ngx_http_cache_purge_module_modules.o:	$(CORE_DEPS) \
	objs/ngx_http_cache_purge_module_modules.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/ngx_http_cache_purge_module_modules.o \
		objs/ngx_http_cache_purge_module_modules.c


objs/addon/ngx_cache_purge_dynamic/ngx_cache_purge_module.o:	$(ADDON_DEPS) \
	modules/ngx_cache_purge_dynamic/ngx_cache_purge_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/ngx_cache_purge_dynamic/ngx_cache_purge_module.o \
		modules/ngx_cache_purge_dynamic/ngx_cache_purge_module.c


modules:	objs/ndk_http_module.so

objs/ndk_http_module.so:	objs/addon/src/ndk.o \
	objs/ndk_http_module_modules.o

	$(LINK) -o objs/ndk_http_module.so \
	objs/addon/src/ndk.o \
	objs/ndk_http_module_modules.o \
	-L/usr/share/luajit-2.1/jit -Wl,-Bsymbolic-functions,-z,relro -Wl,-z,now -Wl,--as-needed \
	-Wl,-E -fstack-protector-strong -L/usr/local/lib -L/usr/lib/x86_64-linux-gnu/perl/5.40/CORE -lperl -ldl -lm -lpthread -lc -lcrypt \
	-shared


objs/ndk_http_module_modules.o:	$(CORE_DEPS) \
	objs/ndk_http_module_modules.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/ndk_http_module_modules.o \
		objs/ndk_http_module_modules.c


objs/addon/src/ndk.o:	$(ADDON_DEPS) \
	modules/ngx_devel_kit/src/ndk.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ndk.o \
		modules/ngx_devel_kit/src/ndk.c


modules:	objs/ngx_http_fancyindex_module.so

objs/ngx_http_fancyindex_module.so:	objs/addon/ngx-fancyindex/ngx_http_fancyindex_module.o \
	objs/ngx_http_fancyindex_module_modules.o

	$(LINK) -o objs/ngx_http_fancyindex_module.so \
	objs/addon/ngx-fancyindex/ngx_http_fancyindex_module.o \
	objs/ngx_http_fancyindex_module_modules.o \
	-L/usr/share/luajit-2.1/jit -Wl,-Bsymbolic-functions,-z,relro -Wl,-z,now -Wl,--as-needed \
	-Wl,-E -fstack-protector-strong -L/usr/local/lib -L/usr/lib/x86_64-linux-gnu/perl/5.40/CORE -lperl -ldl -lm -lpthread -lc -lcrypt \
	-shared


objs/ngx_http_fancyindex_module_modules.o:	$(CORE_DEPS) \
	objs/ngx_http_fancyindex_module_modules.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/ngx_http_fancyindex_module_modules.o \
		objs/ngx_http_fancyindex_module_modules.c


objs/addon/ngx-fancyindex/ngx_http_fancyindex_module.o:	$(ADDON_DEPS) \
	modules/ngx-fancyindex/ngx_http_fancyindex_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/ngx-fancyindex/ngx_http_fancyindex_module.o \
		modules/ngx-fancyindex/ngx_http_fancyindex_module.c


modules:	objs/ngx_http_auth_pam_module.so

objs/ngx_http_auth_pam_module.so:	objs/addon/ngx_http_auth_pam_module/ngx_http_auth_pam_module.o \
	objs/ngx_http_auth_pam_module_modules.o

	$(LINK) -o objs/ngx_http_auth_pam_module.so \
	objs/addon/ngx_http_auth_pam_module/ngx_http_auth_pam_module.o \
	objs/ngx_http_auth_pam_module_modules.o \
	-L/usr/share/luajit-2.1/jit -Wl,-Bsymbolic-functions,-z,relro -Wl,-z,now -Wl,--as-needed -lpam \
	-Wl,-E -fstack-protector-strong -L/usr/local/lib -L/usr/lib/x86_64-linux-gnu/perl/5.40/CORE -lperl -ldl -lm -lpthread -lc -lcrypt \
	-shared


objs/ngx_http_auth_pam_module_modules.o:	$(CORE_DEPS) \
	objs/ngx_http_auth_pam_module_modules.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/ngx_http_auth_pam_module_modules.o \
		objs/ngx_http_auth_pam_module_modules.c


objs/addon/ngx_http_auth_pam_module/ngx_http_auth_pam_module.o:	$(ADDON_DEPS) \
	modules/ngx_http_auth_pam_module/ngx_http_auth_pam_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/ngx_http_auth_pam_module/ngx_http_auth_pam_module.o \
		modules/ngx_http_auth_pam_module/ngx_http_auth_pam_module.c


modules:	objs/ngx_http_geoip2_module.so

objs/ngx_http_geoip2_module.so:	objs/addon/ngx_http_geoip2_module/ngx_http_geoip2_module.o \
	objs/ngx_http_geoip2_module_modules.o

	$(LINK) -o objs/ngx_http_geoip2_module.so \
	objs/addon/ngx_http_geoip2_module/ngx_http_geoip2_module.o \
	objs/ngx_http_geoip2_module_modules.o \
	-L/usr/share/luajit-2.1/jit -Wl,-Bsymbolic-functions,-z,relro -Wl,-z,now -Wl,--as-needed -lmaxminddb \
	-Wl,-E -fstack-protector-strong -L/usr/local/lib -L/usr/lib/x86_64-linux-gnu/perl/5.40/CORE -lperl -ldl -lm -lpthread -lc -lcrypt \
	-shared


objs/ngx_http_geoip2_module_modules.o:	$(CORE_DEPS) \
	objs/ngx_http_geoip2_module_modules.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/ngx_http_geoip2_module_modules.o \
		objs/ngx_http_geoip2_module_modules.c


objs/addon/ngx_http_geoip2_module/ngx_http_geoip2_module.o:	$(ADDON_DEPS) \
	modules/ngx_http_geoip2_module/ngx_http_geoip2_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/ngx_http_geoip2_module/ngx_http_geoip2_module.o \
		modules/ngx_http_geoip2_module/ngx_http_geoip2_module.c


modules:	objs/ngx_stream_geoip2_module.so

objs/ngx_stream_geoip2_module.so:	objs/addon/ngx_http_geoip2_module/ngx_stream_geoip2_module.o \
	objs/ngx_stream_geoip2_module_modules.o

	$(LINK) -o objs/ngx_stream_geoip2_module.so \
	objs/addon/ngx_http_geoip2_module/ngx_stream_geoip2_module.o \
	objs/ngx_stream_geoip2_module_modules.o \
	-L/usr/share/luajit-2.1/jit -Wl,-Bsymbolic-functions,-z,relro -Wl,-z,now -Wl,--as-needed -lmaxminddb \
	-Wl,-E -fstack-protector-strong -L/usr/local/lib -L/usr/lib/x86_64-linux-gnu/perl/5.40/CORE -lperl -ldl -lm -lpthread -lc -lcrypt \
	-shared


objs/ngx_stream_geoip2_module_modules.o:	$(CORE_DEPS) \
	objs/ngx_stream_geoip2_module_modules.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/ngx_stream_geoip2_module_modules.o \
		objs/ngx_stream_geoip2_module_modules.c


objs/addon/ngx_http_geoip2_module/ngx_stream_geoip2_module.o:	$(ADDON_DEPS) \
	modules/ngx_http_geoip2_module/ngx_stream_geoip2_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/ngx_http_geoip2_module/ngx_stream_geoip2_module.o \
		modules/ngx_http_geoip2_module/ngx_stream_geoip2_module.c


modules:	objs/ngx_http_subs_filter_module.so

objs/ngx_http_subs_filter_module.so:	objs/addon/ngx_http_substitutions_filter_module/ngx_http_subs_filter_module.o \
	objs/ngx_http_subs_filter_module_modules.o

	$(LINK) -o objs/ngx_http_subs_filter_module.so \
	objs/addon/ngx_http_substitutions_filter_module/ngx_http_subs_filter_module.o \
	objs/ngx_http_subs_filter_module_modules.o \
	-L/usr/share/luajit-2.1/jit -Wl,-Bsymbolic-functions,-z,relro -Wl,-z,now -Wl,--as-needed \
	-Wl,-E -fstack-protector-strong -L/usr/local/lib -L/usr/lib/x86_64-linux-gnu/perl/5.40/CORE -lperl -ldl -lm -lpthread -lc -lcrypt \
	-shared


objs/ngx_http_subs_filter_module_modules.o:	$(CORE_DEPS) \
	objs/ngx_http_subs_filter_module_modules.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/ngx_http_subs_filter_module_modules.o \
		objs/ngx_http_subs_filter_module_modules.c


objs/addon/ngx_http_substitutions_filter_module/ngx_http_subs_filter_module.o:	$(ADDON_DEPS) \
	modules/ngx_http_substitutions_filter_module/ngx_http_subs_filter_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/ngx_http_substitutions_filter_module/ngx_http_subs_filter_module.o \
		modules/ngx_http_substitutions_filter_module/ngx_http_subs_filter_module.c


modules:	objs/ngx_http_js_module.so

objs/ngx_http_js_module.so:	objs/addon/nginx/ngx_http_js_module.o \
	objs/addon/nginx/ngx_js.o \
	objs/addon/nginx/ngx_js_fetch.o \
	objs/addon/nginx/ngx_js_regex.o \
	objs/addon/nginx/ngx_js_shared_dict.o \
	objs/addon/external/njs_webcrypto_module.o \
	objs/addon/external/njs_xml_module.o \
	objs/addon/external/njs_zlib_module.o \
	objs/ngx_http_js_module_modules.o

	$(LINK) -o objs/ngx_http_js_module.so \
	objs/addon/nginx/ngx_http_js_module.o \
	objs/addon/nginx/ngx_js.o \
	objs/addon/nginx/ngx_js_fetch.o \
	objs/addon/nginx/ngx_js_regex.o \
	objs/addon/nginx/ngx_js_shared_dict.o \
	objs/addon/external/njs_webcrypto_module.o \
	objs/addon/external/njs_xml_module.o \
	objs/addon/external/njs_zlib_module.o \
	objs/ngx_http_js_module_modules.o \
	-L/usr/share/luajit-2.1/jit -Wl,-Bsymbolic-functions,-z,relro -Wl,-z,now -Wl,--as-needed -lxml2 -lxslt -lexslt modules/njs/nginx/../build/libnjs.a -lm \
	-Wl,-E -fstack-protector-strong -L/usr/local/lib -L/usr/lib/x86_64-linux-gnu/perl/5.40/CORE -lperl -ldl -lm -lpthread -lc -lcrypt \
	-shared


objs/ngx_http_js_module_modules.o:	$(CORE_DEPS) \
	objs/ngx_http_js_module_modules.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/ngx_http_js_module_modules.o \
		objs/ngx_http_js_module_modules.c


objs/addon/nginx/ngx_http_js_module.o:	$(ADDON_DEPS) \
	modules/njs/nginx/ngx_http_js_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx/ngx_http_js_module.o \
		modules/njs/nginx/ngx_http_js_module.c


objs/addon/nginx/ngx_js.o:	$(ADDON_DEPS) \
	modules/njs/nginx/ngx_js.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx/ngx_js.o \
		modules/njs/nginx/ngx_js.c


objs/addon/nginx/ngx_js_fetch.o:	$(ADDON_DEPS) \
	modules/njs/nginx/ngx_js_fetch.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx/ngx_js_fetch.o \
		modules/njs/nginx/ngx_js_fetch.c


objs/addon/nginx/ngx_js_regex.o:	$(ADDON_DEPS) \
	modules/njs/nginx/ngx_js_regex.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx/ngx_js_regex.o \
		modules/njs/nginx/ngx_js_regex.c


objs/addon/nginx/ngx_js_shared_dict.o:	$(ADDON_DEPS) \
	modules/njs/nginx/ngx_js_shared_dict.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx/ngx_js_shared_dict.o \
		modules/njs/nginx/ngx_js_shared_dict.c


objs/addon/external/njs_webcrypto_module.o:	$(ADDON_DEPS) \
	modules/njs/nginx/../external/njs_webcrypto_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/external/njs_webcrypto_module.o \
		modules/njs/nginx/../external/njs_webcrypto_module.c


objs/addon/external/njs_xml_module.o:	$(ADDON_DEPS) \
	modules/njs/nginx/../external/njs_xml_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/external/njs_xml_module.o \
		modules/njs/nginx/../external/njs_xml_module.c


objs/addon/external/njs_zlib_module.o:	$(ADDON_DEPS) \
	modules/njs/nginx/../external/njs_zlib_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/external/njs_zlib_module.o \
		modules/njs/nginx/../external/njs_zlib_module.c


modules:	objs/ngx_stream_js_module.so

objs/ngx_stream_js_module.so:	objs/addon/nginx/ngx_stream_js_module.o \
	objs/addon/nginx/ngx_js.o \
	objs/addon/nginx/ngx_js_fetch.o \
	objs/addon/nginx/ngx_js_regex.o \
	objs/addon/nginx/ngx_js_shared_dict.o \
	objs/addon/external/njs_webcrypto_module.o \
	objs/addon/external/njs_xml_module.o \
	objs/addon/external/njs_zlib_module.o \
	objs/ngx_stream_js_module_modules.o

	$(LINK) -o objs/ngx_stream_js_module.so \
	objs/addon/nginx/ngx_stream_js_module.o \
	objs/addon/nginx/ngx_js.o \
	objs/addon/nginx/ngx_js_fetch.o \
	objs/addon/nginx/ngx_js_regex.o \
	objs/addon/nginx/ngx_js_shared_dict.o \
	objs/addon/external/njs_webcrypto_module.o \
	objs/addon/external/njs_xml_module.o \
	objs/addon/external/njs_zlib_module.o \
	objs/ngx_stream_js_module_modules.o \
	-L/usr/share/luajit-2.1/jit -Wl,-Bsymbolic-functions,-z,relro -Wl,-z,now -Wl,--as-needed -lxml2 -lxslt -lexslt modules/njs/nginx/../build/libnjs.a -lm \
	-Wl,-E -fstack-protector-strong -L/usr/local/lib -L/usr/lib/x86_64-linux-gnu/perl/5.40/CORE -lperl -ldl -lm -lpthread -lc -lcrypt \
	-shared


objs/ngx_stream_js_module_modules.o:	$(CORE_DEPS) \
	objs/ngx_stream_js_module_modules.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/ngx_stream_js_module_modules.o \
		objs/ngx_stream_js_module_modules.c


objs/addon/nginx/ngx_stream_js_module.o:	$(ADDON_DEPS) \
	modules/njs/nginx/ngx_stream_js_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx/ngx_stream_js_module.o \
		modules/njs/nginx/ngx_stream_js_module.c


modules:	objs/ngx_http_set_misc_module.so

objs/ngx_http_set_misc_module.so:	objs/addon/src/ngx_http_set_base32.o \
	objs/addon/src/ngx_http_set_default_value.o \
	objs/addon/src/ngx_http_set_hashed_upstream.o \
	objs/addon/src/ngx_http_set_quote_sql.o \
	objs/addon/src/ngx_http_set_quote_json.o \
	objs/addon/src/ngx_http_set_unescape_uri.o \
	objs/addon/src/ngx_http_set_misc_module.o \
	objs/addon/src/ngx_http_set_escape_uri.o \
	objs/addon/src/ngx_http_set_hash.o \
	objs/addon/src/ngx_http_set_local_today.o \
	objs/addon/src/ngx_http_set_hex.o \
	objs/addon/src/ngx_http_set_base64.o \
	objs/addon/src/ngx_http_set_base64url.o \
	objs/addon/src/ngx_http_set_random.o \
	objs/addon/src/ngx_http_set_secure_random.o \
	objs/addon/src/ngx_http_set_rotate.o \
	objs/addon/src/ngx_http_set_hmac.o \
	objs/ngx_http_set_misc_module_modules.o

	$(LINK) -o objs/ngx_http_set_misc_module.so \
	objs/addon/src/ngx_http_set_base32.o \
	objs/addon/src/ngx_http_set_default_value.o \
	objs/addon/src/ngx_http_set_hashed_upstream.o \
	objs/addon/src/ngx_http_set_quote_sql.o \
	objs/addon/src/ngx_http_set_quote_json.o \
	objs/addon/src/ngx_http_set_unescape_uri.o \
	objs/addon/src/ngx_http_set_misc_module.o \
	objs/addon/src/ngx_http_set_escape_uri.o \
	objs/addon/src/ngx_http_set_hash.o \
	objs/addon/src/ngx_http_set_local_today.o \
	objs/addon/src/ngx_http_set_hex.o \
	objs/addon/src/ngx_http_set_base64.o \
	objs/addon/src/ngx_http_set_base64url.o \
	objs/addon/src/ngx_http_set_random.o \
	objs/addon/src/ngx_http_set_secure_random.o \
	objs/addon/src/ngx_http_set_rotate.o \
	objs/addon/src/ngx_http_set_hmac.o \
	objs/ngx_http_set_misc_module_modules.o \
	-L/usr/share/luajit-2.1/jit -Wl,-Bsymbolic-functions,-z,relro -Wl,-z,now -Wl,--as-needed \
	-Wl,-E -fstack-protector-strong -L/usr/local/lib -L/usr/lib/x86_64-linux-gnu/perl/5.40/CORE -lperl -ldl -lm -lpthread -lc -lcrypt \
	-shared


objs/ngx_http_set_misc_module_modules.o:	$(CORE_DEPS) \
	objs/ngx_http_set_misc_module_modules.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/ngx_http_set_misc_module_modules.o \
		objs/ngx_http_set_misc_module_modules.c


objs/addon/src/ngx_http_set_base32.o:	$(ADDON_DEPS) \
	modules/set-misc-nginx-module/src/ngx_http_set_base32.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_base32.o \
		modules/set-misc-nginx-module/src/ngx_http_set_base32.c


objs/addon/src/ngx_http_set_default_value.o:	$(ADDON_DEPS) \
	modules/set-misc-nginx-module/src/ngx_http_set_default_value.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_default_value.o \
		modules/set-misc-nginx-module/src/ngx_http_set_default_value.c


objs/addon/src/ngx_http_set_hashed_upstream.o:	$(ADDON_DEPS) \
	modules/set-misc-nginx-module/src/ngx_http_set_hashed_upstream.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_hashed_upstream.o \
		modules/set-misc-nginx-module/src/ngx_http_set_hashed_upstream.c


objs/addon/src/ngx_http_set_quote_sql.o:	$(ADDON_DEPS) \
	modules/set-misc-nginx-module/src/ngx_http_set_quote_sql.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_quote_sql.o \
		modules/set-misc-nginx-module/src/ngx_http_set_quote_sql.c


objs/addon/src/ngx_http_set_quote_json.o:	$(ADDON_DEPS) \
	modules/set-misc-nginx-module/src/ngx_http_set_quote_json.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_quote_json.o \
		modules/set-misc-nginx-module/src/ngx_http_set_quote_json.c


objs/addon/src/ngx_http_set_unescape_uri.o:	$(ADDON_DEPS) \
	modules/set-misc-nginx-module/src/ngx_http_set_unescape_uri.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_unescape_uri.o \
		modules/set-misc-nginx-module/src/ngx_http_set_unescape_uri.c


objs/addon/src/ngx_http_set_misc_module.o:	$(ADDON_DEPS) \
	modules/set-misc-nginx-module/src/ngx_http_set_misc_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_misc_module.o \
		modules/set-misc-nginx-module/src/ngx_http_set_misc_module.c


objs/addon/src/ngx_http_set_escape_uri.o:	$(ADDON_DEPS) \
	modules/set-misc-nginx-module/src/ngx_http_set_escape_uri.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_escape_uri.o \
		modules/set-misc-nginx-module/src/ngx_http_set_escape_uri.c


objs/addon/src/ngx_http_set_hash.o:	$(ADDON_DEPS) \
	modules/set-misc-nginx-module/src/ngx_http_set_hash.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_hash.o \
		modules/set-misc-nginx-module/src/ngx_http_set_hash.c


objs/addon/src/ngx_http_set_local_today.o:	$(ADDON_DEPS) \
	modules/set-misc-nginx-module/src/ngx_http_set_local_today.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_local_today.o \
		modules/set-misc-nginx-module/src/ngx_http_set_local_today.c


objs/addon/src/ngx_http_set_hex.o:	$(ADDON_DEPS) \
	modules/set-misc-nginx-module/src/ngx_http_set_hex.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_hex.o \
		modules/set-misc-nginx-module/src/ngx_http_set_hex.c


objs/addon/src/ngx_http_set_base64.o:	$(ADDON_DEPS) \
	modules/set-misc-nginx-module/src/ngx_http_set_base64.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_base64.o \
		modules/set-misc-nginx-module/src/ngx_http_set_base64.c


objs/addon/src/ngx_http_set_base64url.o:	$(ADDON_DEPS) \
	modules/set-misc-nginx-module/src/ngx_http_set_base64url.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_base64url.o \
		modules/set-misc-nginx-module/src/ngx_http_set_base64url.c


objs/addon/src/ngx_http_set_random.o:	$(ADDON_DEPS) \
	modules/set-misc-nginx-module/src/ngx_http_set_random.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_random.o \
		modules/set-misc-nginx-module/src/ngx_http_set_random.c


objs/addon/src/ngx_http_set_secure_random.o:	$(ADDON_DEPS) \
	modules/set-misc-nginx-module/src/ngx_http_set_secure_random.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_secure_random.o \
		modules/set-misc-nginx-module/src/ngx_http_set_secure_random.c


objs/addon/src/ngx_http_set_rotate.o:	$(ADDON_DEPS) \
	modules/set-misc-nginx-module/src/ngx_http_set_rotate.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_rotate.o \
		modules/set-misc-nginx-module/src/ngx_http_set_rotate.c


objs/addon/src/ngx_http_set_hmac.o:	$(ADDON_DEPS) \
	modules/set-misc-nginx-module/src/ngx_http_set_hmac.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_hmac.o \
		modules/set-misc-nginx-module/src/ngx_http_set_hmac.c


modules:	objs/ngx_http_srcache_filter_module.so

objs/ngx_http_srcache_filter_module.so:	objs/addon/src/ngx_http_srcache_filter_module.o \
	objs/addon/src/ngx_http_srcache_util.o \
	objs/addon/src/ngx_http_srcache_var.o \
	objs/addon/src/ngx_http_srcache_store.o \
	objs/addon/src/ngx_http_srcache_fetch.o \
	objs/addon/src/ngx_http_srcache_headers.o \
	objs/ngx_http_srcache_filter_module_modules.o

	$(LINK) -o objs/ngx_http_srcache_filter_module.so \
	objs/addon/src/ngx_http_srcache_filter_module.o \
	objs/addon/src/ngx_http_srcache_util.o \
	objs/addon/src/ngx_http_srcache_var.o \
	objs/addon/src/ngx_http_srcache_store.o \
	objs/addon/src/ngx_http_srcache_fetch.o \
	objs/addon/src/ngx_http_srcache_headers.o \
	objs/ngx_http_srcache_filter_module_modules.o \
	-L/usr/share/luajit-2.1/jit -Wl,-Bsymbolic-functions,-z,relro -Wl,-z,now -Wl,--as-needed \
	-Wl,-E -fstack-protector-strong -L/usr/local/lib -L/usr/lib/x86_64-linux-gnu/perl/5.40/CORE -lperl -ldl -lm -lpthread -lc -lcrypt \
	-shared


objs/ngx_http_srcache_filter_module_modules.o:	$(CORE_DEPS) \
	objs/ngx_http_srcache_filter_module_modules.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/ngx_http_srcache_filter_module_modules.o \
		objs/ngx_http_srcache_filter_module_modules.c


objs/addon/src/ngx_http_srcache_filter_module.o:	$(ADDON_DEPS) \
	modules/srcache-nginx-module/src/ngx_http_srcache_filter_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_srcache_filter_module.o \
		modules/srcache-nginx-module/src/ngx_http_srcache_filter_module.c


objs/addon/src/ngx_http_srcache_util.o:	$(ADDON_DEPS) \
	modules/srcache-nginx-module/src/ngx_http_srcache_util.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_srcache_util.o \
		modules/srcache-nginx-module/src/ngx_http_srcache_util.c


objs/addon/src/ngx_http_srcache_var.o:	$(ADDON_DEPS) \
	modules/srcache-nginx-module/src/ngx_http_srcache_var.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_srcache_var.o \
		modules/srcache-nginx-module/src/ngx_http_srcache_var.c


objs/addon/src/ngx_http_srcache_store.o:	$(ADDON_DEPS) \
	modules/srcache-nginx-module/src/ngx_http_srcache_store.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_srcache_store.o \
		modules/srcache-nginx-module/src/ngx_http_srcache_store.c


objs/addon/src/ngx_http_srcache_fetch.o:	$(ADDON_DEPS) \
	modules/srcache-nginx-module/src/ngx_http_srcache_fetch.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_srcache_fetch.o \
		modules/srcache-nginx-module/src/ngx_http_srcache_fetch.c


objs/addon/src/ngx_http_srcache_headers.o:	$(ADDON_DEPS) \
	modules/srcache-nginx-module/src/ngx_http_srcache_headers.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/src/ngx_http_srcache_headers.o \
		modules/srcache-nginx-module/src/ngx_http_srcache_headers.c


../openssl-3.4.0/.openssl/include/openssl/ssl.h:	objs/Makefile
	cd ../openssl-3.4.0 \
	&& if [ -f Makefile ]; then $(MAKE) clean; fi \
	&& ./config --prefix=/root/freenginx-1.27.4/../openssl-3.4.0/.openssl no-shared no-threads -O3 -ffast-math -march=native -flto=full -Wno-error=nan-infinity-disabled -Werror=implicit-function-declaration -funsafe-math-optimizations --param=ssp-buffer-size=4 -fstack-protector-strong -fstack-clash-protection -Wformat -Werror=format-security -fcf-protection -Wdate-time -Wp,-D_FORTIFY_SOURCE=2 -fPIC no-tests enable-ktls \
	&& $(MAKE) \
	&& $(MAKE) install_sw LIBDIR=lib


objs/src/http/modules/perl/ngx_http_perl_module.o: \
		objs/src/http/modules/perl/blib/arch/auto/nginx/nginx.so

objs/src/http/modules/perl/blib/arch/auto/nginx/nginx.so: \
		$(CORE_DEPS) $(HTTP_DEPS) \
		src/http/modules/perl/ngx_http_perl_module.h \
		objs/src/http/modules/perl/Makefile
	cd objs/src/http/modules/perl && $(MAKE)

	rm -rf objs/install_perl


objs/src/http/modules/perl/Makefile: \
		objs/ngx_auto_config.h \
		src/core/nginx.h \
		src/http/modules/perl/Makefile.PL \
		src/http/modules/perl/nginx.pm \
		src/http/modules/perl/nginx.xs \
		src/http/modules/perl/typemap
	grep 'define NGINX_VERSION' src/core/nginx.h \
		| sed -e 's/^.*"\(.*\)".*/\1/' > \
		objs/src/http/modules/perl/version
	sed "s/%%VERSION%%/`cat objs/src/http/modules/perl/version`/" \
		src/http/modules/perl/nginx.pm > \
		objs/src/http/modules/perl/nginx.pm
	cp -p src/http/modules/perl/nginx.xs objs/src/http/modules/perl/
	cp -p src/http/modules/perl/typemap objs/src/http/modules/perl/
	cp -p src/http/modules/perl/Makefile.PL objs/src/http/modules/perl/

	cd objs/src/http/modules/perl \
		&& NGX_PM_CFLAGS="$(NGX_PM_CFLAGS) -g -O3 -ffast-math -march=native -flto=full -w -Werror=implicit-function-declaration -funsafe-math-optimizations --param=ssp-buffer-size=4 -fstack-protector-strong -fstack-clash-protection -Wformat -Werror=format-security -fcf-protection -Wdate-time -Wp,-D_FORTIFY_SOURCE=2 -fPIC" \
			NGX_PM_LDFLAGS="-L/usr/share/luajit-2.1/jit -Wl,-Bsymbolic-functions,-z,relro -Wl,-z,now -Wl,--as-needed $(NGX_PM_LDFLAGS)" \
			NGX_INCS="src/core src/event src/event/modules src/event/quic src/os/unix  /usr/include/luajit-2.1/ modules/lua-nginx-module/src/api modules/nchan/src modules/nginx-rtmp-module modules/ngx_brotli/deps/brotli/c/include modules/ngx_devel_kit/objs objs/addon/ndk modules/ngx_devel_kit/src modules/ngx_devel_kit/objs objs/addon/ndk modules/njs/nginx/../src modules/njs/nginx/../build                       modules/njs/nginx/../src modules/njs/nginx/../build                        ../openssl-3.4.0/.openssl/include /usr/include/libxml2   objs  src/http src/http/modules src/http/v2 src/http/v3 src/http/modules/perl modules/ngx_devel_kit/src " \
			NGX_DEPS="$(CORE_DEPS) $(HTTP_DEPS)" \
		perl Makefile.PL \
			LIB= \
			INSTALLSITEMAN3DIR=


install_perl_modules:
	cd objs/src/http/modules/perl && $(MAKE) install

manpage:	objs/nginx.8

objs/nginx.8:	man/nginx.8 objs/ngx_auto_config.h
	sed -e "s|%%PREFIX%%|/www/nginx|" \
		-e "s|%%PID_PATH%%|/var/run/nginx.pid|" \
		-e "s|%%CONF_PATH%%|/www/nginx/conf/nginx.conf|" \
		-e "s|%%ERROR_LOG_PATH%%|/www/nginx/log/error.log|" \
		< man/nginx.8 > $@

install:	build install_perl_modules
	test -d '$(DESTDIR)/www/nginx' || mkdir -p '$(DESTDIR)/www/nginx'

	test -d '$(DESTDIR)/usr/lib/nginx' \
		|| mkdir -p '$(DESTDIR)/usr/lib/nginx'
	test ! -f '$(DESTDIR)/usr/lib/nginx/nginx' \
		|| mv '$(DESTDIR)/usr/lib/nginx/nginx' \
			'$(DESTDIR)/usr/lib/nginx/nginx.old'
	cp objs/nginx '$(DESTDIR)/usr/lib/nginx/nginx'

	test -d '$(DESTDIR)/www/nginx/conf' \
		|| mkdir -p '$(DESTDIR)/www/nginx/conf'

	cp conf/koi-win '$(DESTDIR)/www/nginx/conf'
	cp conf/koi-utf '$(DESTDIR)/www/nginx/conf'
	cp conf/win-utf '$(DESTDIR)/www/nginx/conf'

	test -f '$(DESTDIR)/www/nginx/conf/mime.types' \
		|| cp conf/mime.types '$(DESTDIR)/www/nginx/conf'
	cp conf/mime.types '$(DESTDIR)/www/nginx/conf/mime.types.default'

	test -f '$(DESTDIR)/www/nginx/conf/fastcgi_params' \
		|| cp conf/fastcgi_params '$(DESTDIR)/www/nginx/conf'
	cp conf/fastcgi_params \
		'$(DESTDIR)/www/nginx/conf/fastcgi_params.default'

	test -f '$(DESTDIR)/www/nginx/conf/fastcgi.conf' \
		|| cp conf/fastcgi.conf '$(DESTDIR)/www/nginx/conf'
	cp conf/fastcgi.conf '$(DESTDIR)/www/nginx/conf/fastcgi.conf.default'

	test -f '$(DESTDIR)/www/nginx/conf/uwsgi_params' \
		|| cp conf/uwsgi_params '$(DESTDIR)/www/nginx/conf'
	cp conf/uwsgi_params \
		'$(DESTDIR)/www/nginx/conf/uwsgi_params.default'

	test -f '$(DESTDIR)/www/nginx/conf/scgi_params' \
		|| cp conf/scgi_params '$(DESTDIR)/www/nginx/conf'
	cp conf/scgi_params \
		'$(DESTDIR)/www/nginx/conf/scgi_params.default'

	test -f '$(DESTDIR)/www/nginx/conf/nginx.conf' \
		|| cp conf/nginx.conf '$(DESTDIR)/www/nginx/conf/nginx.conf'
	cp conf/nginx.conf '$(DESTDIR)/www/nginx/conf/nginx.conf.default'

	test -d '$(DESTDIR)/var/run' \
		|| mkdir -p '$(DESTDIR)/var/run'

	test -d '$(DESTDIR)/www/nginx/log' \
		|| mkdir -p '$(DESTDIR)/www/nginx/log'

	test -d '$(DESTDIR)/www/nginx/html' \
		|| cp -R html '$(DESTDIR)/www/nginx'

	test -d '$(DESTDIR)/www/nginx/log' \
		|| mkdir -p '$(DESTDIR)/www/nginx/log'

	test -d '$(DESTDIR)/www/nginx/modules' \
		|| mkdir -p '$(DESTDIR)/www/nginx/modules'

	test ! -f '$(DESTDIR)/www/nginx/modules/ngx_http_echo_module.so' \
		|| mv '$(DESTDIR)/www/nginx/modules/ngx_http_echo_module.so' \
			'$(DESTDIR)/www/nginx/modules/ngx_http_echo_module.so.old'
	cp objs/ngx_http_echo_module.so '$(DESTDIR)/www/nginx/modules/ngx_http_echo_module.so'

	test ! -f '$(DESTDIR)/www/nginx/modules/ngx_http_headers_more_filter_module.so' \
		|| mv '$(DESTDIR)/www/nginx/modules/ngx_http_headers_more_filter_module.so' \
			'$(DESTDIR)/www/nginx/modules/ngx_http_headers_more_filter_module.so.old'
	cp objs/ngx_http_headers_more_filter_module.so '$(DESTDIR)/www/nginx/modules/ngx_http_headers_more_filter_module.so'

	test ! -f '$(DESTDIR)/www/nginx/modules/ngx_http_lua_module.so' \
		|| mv '$(DESTDIR)/www/nginx/modules/ngx_http_lua_module.so' \
			'$(DESTDIR)/www/nginx/modules/ngx_http_lua_module.so.old'
	cp objs/ngx_http_lua_module.so '$(DESTDIR)/www/nginx/modules/ngx_http_lua_module.so'

	test ! -f '$(DESTDIR)/www/nginx/modules/ngx_http_memc_module.so' \
		|| mv '$(DESTDIR)/www/nginx/modules/ngx_http_memc_module.so' \
			'$(DESTDIR)/www/nginx/modules/ngx_http_memc_module.so.old'
	cp objs/ngx_http_memc_module.so '$(DESTDIR)/www/nginx/modules/ngx_http_memc_module.so'

	test ! -f '$(DESTDIR)/www/nginx/modules/ngx_http_modsecurity_module.so' \
		|| mv '$(DESTDIR)/www/nginx/modules/ngx_http_modsecurity_module.so' \
			'$(DESTDIR)/www/nginx/modules/ngx_http_modsecurity_module.so.old'
	cp objs/ngx_http_modsecurity_module.so '$(DESTDIR)/www/nginx/modules/ngx_http_modsecurity_module.so'

	test ! -f '$(DESTDIR)/www/nginx/modules/ngx_nchan_module.so' \
		|| mv '$(DESTDIR)/www/nginx/modules/ngx_nchan_module.so' \
			'$(DESTDIR)/www/nginx/modules/ngx_nchan_module.so.old'
	cp objs/ngx_nchan_module.so '$(DESTDIR)/www/nginx/modules/ngx_nchan_module.so'

	test ! -f '$(DESTDIR)/www/nginx/modules/ngx_http_dav_ext_module.so' \
		|| mv '$(DESTDIR)/www/nginx/modules/ngx_http_dav_ext_module.so' \
			'$(DESTDIR)/www/nginx/modules/ngx_http_dav_ext_module.so.old'
	cp objs/ngx_http_dav_ext_module.so '$(DESTDIR)/www/nginx/modules/ngx_http_dav_ext_module.so'

	test ! -f '$(DESTDIR)/www/nginx/modules/ngx_rtmp_module.so' \
		|| mv '$(DESTDIR)/www/nginx/modules/ngx_rtmp_module.so' \
			'$(DESTDIR)/www/nginx/modules/ngx_rtmp_module.so.old'
	cp objs/ngx_rtmp_module.so '$(DESTDIR)/www/nginx/modules/ngx_rtmp_module.so'

	test ! -f '$(DESTDIR)/www/nginx/modules/ngx_http_uploadprogress_module.so' \
		|| mv '$(DESTDIR)/www/nginx/modules/ngx_http_uploadprogress_module.so' \
			'$(DESTDIR)/www/nginx/modules/ngx_http_uploadprogress_module.so.old'
	cp objs/ngx_http_uploadprogress_module.so '$(DESTDIR)/www/nginx/modules/ngx_http_uploadprogress_module.so'

	test ! -f '$(DESTDIR)/www/nginx/modules/ngx_http_upstream_fair_module.so' \
		|| mv '$(DESTDIR)/www/nginx/modules/ngx_http_upstream_fair_module.so' \
			'$(DESTDIR)/www/nginx/modules/ngx_http_upstream_fair_module.so.old'
	cp objs/ngx_http_upstream_fair_module.so '$(DESTDIR)/www/nginx/modules/ngx_http_upstream_fair_module.so'

	test ! -f '$(DESTDIR)/www/nginx/modules/ngx_http_brotli_filter_module.so' \
		|| mv '$(DESTDIR)/www/nginx/modules/ngx_http_brotli_filter_module.so' \
			'$(DESTDIR)/www/nginx/modules/ngx_http_brotli_filter_module.so.old'
	cp objs/ngx_http_brotli_filter_module.so '$(DESTDIR)/www/nginx/modules/ngx_http_brotli_filter_module.so'

	test ! -f '$(DESTDIR)/www/nginx/modules/ngx_http_brotli_static_module.so' \
		|| mv '$(DESTDIR)/www/nginx/modules/ngx_http_brotli_static_module.so' \
			'$(DESTDIR)/www/nginx/modules/ngx_http_brotli_static_module.so.old'
	cp objs/ngx_http_brotli_static_module.so '$(DESTDIR)/www/nginx/modules/ngx_http_brotli_static_module.so'

	test ! -f '$(DESTDIR)/www/nginx/modules/ngx_http_cache_purge_module.so' \
		|| mv '$(DESTDIR)/www/nginx/modules/ngx_http_cache_purge_module.so' \
			'$(DESTDIR)/www/nginx/modules/ngx_http_cache_purge_module.so.old'
	cp objs/ngx_http_cache_purge_module.so '$(DESTDIR)/www/nginx/modules/ngx_http_cache_purge_module.so'

	test ! -f '$(DESTDIR)/www/nginx/modules/ndk_http_module.so' \
		|| mv '$(DESTDIR)/www/nginx/modules/ndk_http_module.so' \
			'$(DESTDIR)/www/nginx/modules/ndk_http_module.so.old'
	cp objs/ndk_http_module.so '$(DESTDIR)/www/nginx/modules/ndk_http_module.so'

	test ! -f '$(DESTDIR)/www/nginx/modules/ngx_http_fancyindex_module.so' \
		|| mv '$(DESTDIR)/www/nginx/modules/ngx_http_fancyindex_module.so' \
			'$(DESTDIR)/www/nginx/modules/ngx_http_fancyindex_module.so.old'
	cp objs/ngx_http_fancyindex_module.so '$(DESTDIR)/www/nginx/modules/ngx_http_fancyindex_module.so'

	test ! -f '$(DESTDIR)/www/nginx/modules/ngx_http_auth_pam_module.so' \
		|| mv '$(DESTDIR)/www/nginx/modules/ngx_http_auth_pam_module.so' \
			'$(DESTDIR)/www/nginx/modules/ngx_http_auth_pam_module.so.old'
	cp objs/ngx_http_auth_pam_module.so '$(DESTDIR)/www/nginx/modules/ngx_http_auth_pam_module.so'

	test ! -f '$(DESTDIR)/www/nginx/modules/ngx_http_geoip2_module.so' \
		|| mv '$(DESTDIR)/www/nginx/modules/ngx_http_geoip2_module.so' \
			'$(DESTDIR)/www/nginx/modules/ngx_http_geoip2_module.so.old'
	cp objs/ngx_http_geoip2_module.so '$(DESTDIR)/www/nginx/modules/ngx_http_geoip2_module.so'

	test ! -f '$(DESTDIR)/www/nginx/modules/ngx_stream_geoip2_module.so' \
		|| mv '$(DESTDIR)/www/nginx/modules/ngx_stream_geoip2_module.so' \
			'$(DESTDIR)/www/nginx/modules/ngx_stream_geoip2_module.so.old'
	cp objs/ngx_stream_geoip2_module.so '$(DESTDIR)/www/nginx/modules/ngx_stream_geoip2_module.so'

	test ! -f '$(DESTDIR)/www/nginx/modules/ngx_http_subs_filter_module.so' \
		|| mv '$(DESTDIR)/www/nginx/modules/ngx_http_subs_filter_module.so' \
			'$(DESTDIR)/www/nginx/modules/ngx_http_subs_filter_module.so.old'
	cp objs/ngx_http_subs_filter_module.so '$(DESTDIR)/www/nginx/modules/ngx_http_subs_filter_module.so'

	test ! -f '$(DESTDIR)/www/nginx/modules/ngx_http_js_module.so' \
		|| mv '$(DESTDIR)/www/nginx/modules/ngx_http_js_module.so' \
			'$(DESTDIR)/www/nginx/modules/ngx_http_js_module.so.old'
	cp objs/ngx_http_js_module.so '$(DESTDIR)/www/nginx/modules/ngx_http_js_module.so'

	test ! -f '$(DESTDIR)/www/nginx/modules/ngx_stream_js_module.so' \
		|| mv '$(DESTDIR)/www/nginx/modules/ngx_stream_js_module.so' \
			'$(DESTDIR)/www/nginx/modules/ngx_stream_js_module.so.old'
	cp objs/ngx_stream_js_module.so '$(DESTDIR)/www/nginx/modules/ngx_stream_js_module.so'

	test ! -f '$(DESTDIR)/www/nginx/modules/ngx_http_set_misc_module.so' \
		|| mv '$(DESTDIR)/www/nginx/modules/ngx_http_set_misc_module.so' \
			'$(DESTDIR)/www/nginx/modules/ngx_http_set_misc_module.so.old'
	cp objs/ngx_http_set_misc_module.so '$(DESTDIR)/www/nginx/modules/ngx_http_set_misc_module.so'

	test ! -f '$(DESTDIR)/www/nginx/modules/ngx_http_srcache_filter_module.so' \
		|| mv '$(DESTDIR)/www/nginx/modules/ngx_http_srcache_filter_module.so' \
			'$(DESTDIR)/www/nginx/modules/ngx_http_srcache_filter_module.so.old'
	cp objs/ngx_http_srcache_filter_module.so '$(DESTDIR)/www/nginx/modules/ngx_http_srcache_filter_module.so'
