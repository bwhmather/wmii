wmii9menu_sources = [
  'src/main.c',
]

wmii9menu_dependencies = [
  libutf_dep,
  libfmt_dep,
  libbio_dep,
  libixp_dep,
  libregexp_dep,
  libstuff_dep,
  xinerama_dep,
  xrandr_dep,
]

wmii9menu = executable(
  'wmii9menu', wmii9menu_sources,
  dependencies : wmii9menu_dependencies,
  install : true,
)

