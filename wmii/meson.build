wmii_sources = [
  'src/key.c',
  'src/print.c',
  'src/frame.c',
  'src/error.c',
  'src/message.c',
  'src/backtrace.c',
  'src/client.c',
  'src/mouse.c',
  'src/view.c',
  'src/event.c',
  'src/column.c',
  'src/layout.c',
  'src/fs.c',
  'src/utf.c',
  'src/main.c',
  'src/area.c',
  'src/stack.c',
  'src/root.c',
  'src/bar.c',
  'src/ewmh.c',
  'src/float.c',
  'src/div.c',
  'src/screen.c',
  'src/xdnd.c',
  'src/rule.c',
]

wmii_dependencies = [
  libbio_dep,
  libfmt_dep,
  libixp_dep,
  libregexp_dep,
  libstuff_dep,
  libutf_dep,
  m_dep,
  x11_dep,
  xext_dep,
  xinerama_dep,
  xrandr_dep,
]

wmii = executable(
  'wmii', wmii_sources,
  dependencies : wmii_dependencies,
  install : true,
)

