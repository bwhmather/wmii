wikeyname_sources = [
  'src/main.c',
]

wikeyname_dependencies = [
  libutf_dep,
  libfmt_dep,
  libregexp_dep,
  libbio_dep,
  libstuff_dep,
  xinerama_dep,
  xrandr_dep,
]

wikeyname = executable(
  'wikeyname', wikeyname_sources,
  dependencies : wikeyname_dependencies,
  install : true,
)

