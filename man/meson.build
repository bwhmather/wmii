txt2tags = find_program('txt2tags')
cat = find_program('cat')

man_sources = [
  'wihack.man1',
  'wimenu.man1',
  'wistrut.man1',
  'witray.man1',
  'wmii9menu.man1',
  'wmii.man1',
  'wmiir.man1',
]

foreach man_source : man_sources
  man_input_name = man_source.substring(0, -5) + '.tmp' + man_source.substring(-5)
  man_output_name = man_source.substring(0, -4) + man_source.substring(-1)

  man_input = custom_target(
    man_input_name,
    input : ['header.t2t', man_source],
    output : man_input_name,
    command : [cat, '@INPUT0@', '@INPUT1@'],
    capture : true,
  )
  man_output = custom_target(
    man_output_name,
    input : man_input,
    output : man_output_name,
    command : [txt2tags, '-t', 'man', '-o', '@OUTPUT@', '@INPUT@'],
    install : true,
    install_dir : [mandir]
  )
endforeach
