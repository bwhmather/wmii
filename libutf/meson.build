libutf_sources = [
  'src/runestrncpy.c',
  'src/runestrcat.c',
  'src/runestrchr.c',
  'src/runestrecpy.c',
  'src/runestrlen.c',
  'src/utflen.c',
  'src/runestrdup.c',
  'src/runestrstr.c',
  'src/runestrncmp.c',
  'src/runestrcmp.c',
  'src/runestrcpy.c',
  'src/rune.c',
  'src/runestrrchr.c',
  'src/utfrune.c',
  'src/runestrncat.c',
  'src/runetype.c',
  'src/utfecpy.c',
  'src/utfrrune.c',
  'src/utfnlen.c',
]

libutf_includes = include_directories('include')

libutf_dependencies = []

libutf = static_library(
  'utf', libutf_sources,
  dependencies : libutf_dependencies,
  include_directories : libutf_includes,
  install : false,
)

libutf_dep = declare_dependency(
  link_with : libutf,
  include_directories : libutf_includes,
)


