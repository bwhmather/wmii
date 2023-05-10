witray_sources = [
  'src/tray.c',
  'src/selection.c',
  'src/client.c',
  'src/xembed.c',
  'src/main.c',
  'src/ewmh.c',
]

witray_dependencies = [
  libutf_dep,
  libfmt_dep,
  libregexp_dep,
  libbio_dep,
  libixp_dep,
  libstuff_dep,
  xinerama_dep,
  xrandr_dep,
]

witray = executable(
  'witray', witray_sources,
  dependencies : witray_dependencies,
  install : true,
)

