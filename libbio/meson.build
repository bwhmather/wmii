libbio_sources = [
  'src/bputc.c',
  'src/boffset.c',
  'src/bprint.c',
  'src/brdstr.c',
  'src/bseek.c',
  'src/brdline.c',
  'src/bvprint.c',
  'src/bbuffered.c',
  'src/bwrite.c',
  'src/bfildes.c',
  'src/bread.c',
  'src/bflush.c',
  'src/bputrune.c',
  'src/bgetc.c',
  'src/binit.c',
  'src/bgetrune.c',
  'src/bgetd.c',
]

libbio_includes = include_directories('include')

libbio_dependencies = [
  libutf_dep,
  libfmt_dep,
]

libbio = static_library(
  'bio', libbio_sources,
  include_directories : libbio_includes,
  dependencies : libbio_dependencies,
  install : false,
)

libbio_dep = declare_dependency(
  link_with : libbio,
  include_directories : libbio_includes,
)
