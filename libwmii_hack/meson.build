libwmiihack_sources = [
  'src/hack.c',
]

libwmiihack_dependencies = [
  dl_dep,
  x11_dep,
]

libwmiihack = shared_library(
  'wmii_hack', libwmiihack_sources,
  dependencies : libwmiihack_dependencies,
  install : true,
)
