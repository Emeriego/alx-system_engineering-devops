# installs puppet-lint package
include python

python::pip {'flask':
  ensure   => '2.1.0',
  name     => 'flask',
  provider => 'pip3'
}
