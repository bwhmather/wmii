libixp_sources = [
  'src/client.c',
  'src/convert.c',
  'src/error.c',
  'src/map.c',
  'src/message.c',
  'src/request.c',
  'src/rpc.c',
  'src/server.c',
  'src/socket.c',
  'src/srv_util.c',
  'src/thread.c',
  'src/thread_pthread.c',
  'src/timer.c',
  'src/transport.c',
  'src/util.c',
]
libixp_includes = include_directories('include')

libixp_dependencies = []

libixp = static_library(
  'ixp', libixp_sources,
  include_directories : libixp_includes,
  dependencies : libixp_dependencies,
  install : false,
)

libixp_dep = declare_dependency(include_directories : libixp_includes, link_with : libixp)
