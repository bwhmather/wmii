wimenu_bindings = custom_target(
  'bindings',
  input : 'keys.txt',
  output : 'bindings.c',
  command : ['generate-bindings.sh'],
  feed : true,
  capture : true,
)

wimenu_sources = [
  'src/history.c',
  'src/main.c',
  'src/menu.c',
  'src/keys.c',
  'src/caret.c',
  wimenu_bindings,
]

wimenu_dependencies = [
  libutf_dep,
  libfmt_dep,
  libregexp_dep,
  libbio_dep,
  libixp_dep,
  libstuff_dep,
  xinerama_dep,
  xrandr_dep,
]

wimenu = executable(
  'wimenu', wimenu_sources,
  dependencies : wimenu_dependencies,
  install : true,
)

