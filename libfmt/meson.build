libfmt_sources = [
  'src/print.c',
  'src/fmtquote.c',
  'src/runevseprint.c',
  'src/runesprint.c',
  'src/strtod.c',
  'src/vsmprint.c',
  'src/fmtfdflush.c',
  'src/errfmt.c',
  'src/fmtlocale.c',
  'src/fmtfd.c',
  'src/seprint.c',
  'src/fprint.c',
  'src/runesmprint.c',
  'src/fltfmt.c',
  'src/fmtprint.c',
  'src/nan64.c',
  'src/fmtvprint.c',
  'src/fmtstr.c',
  'src/pow10.c',
  'src/runevsnprint.c',
  'src/vfprint.c',
  'src/charstod.c',
  'src/fmtrune.c',
  'src/snprint.c',
  'src/dofmt.c',
  'src/smprint.c',
  'src/runeseprint.c',
  'src/runefmtstr.c',
  'src/vsnprint.c',
  'src/runevsmprint.c',
  'src/sprint.c',
  'src/fmtlock.c',
  'src/dorfmt.c',
  'src/runesnprint.c',
  'src/fmt.c',
  'src/vseprint.c',
]

libfmt_includes = include_directories('include')

libfmt_dependencies = [
  libutf_dep,
]

libfmt = static_library(
  'fmt', libfmt_sources,
  include_directories : libfmt_includes,
  dependencies : libfmt_dependencies,
  install : false,
)

libfmt_dep = declare_dependency(
  link_with : libfmt,
  include_directories : libfmt_includes,
)

