wistrut_sources = [
  'src/win.c',
  'src/main.c',
  'src/ewmh.c',
]

wistrut_dependencies = [
  libutf_dep,
  libfmt_dep,
  libbio_dep,
  libstuff_dep,
  libregexp_dep,
  xinerama_dep,
  xrandr_dep,
]

wistrut = executable(
  'wistrut', wistrut_sources,
  dependencies : wistrut_dependencies,
  install : true,
)

