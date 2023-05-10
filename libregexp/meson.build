libregexp_sources = [
  'src/regaux.c',
  'src/rregexec.c',
  'src/regcomp.c',
  'src/rregsub.c',
  'src/regerror.c',
  'src/regexec.c',
  'src/regsub.c',
]

libregexp_includes = include_directories('include')

libregexp_dependencies = [
  libutf_dep,
]

libregexp = shared_library(
  'regexp', libregexp_sources,
  include_directories : libregexp_includes,
  dependencies : libregexp_dependencies,
  install : false
)

libregexp_dep = declare_dependency(
  link_with : libregexp,
  include_directories : libregexp_includes,
)
