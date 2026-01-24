# GCC-Shortcuts
Some simple and stupid GCC Compiler shortcuts to not make your terminal (and experience) messy

## Usage
`comp` - compile only<br>
`cor`  - compile and run<br>
`cod`  - compile, run and delete (useful if you are debugging / testing code)

## Get this repository
```bash
$ git clone https://github.com/plasma-bls/GCC-Shortcuts.git && cd GCC-Shortcuts/
```
## Install or uninstall them on your system!
```bash
// To install
$ make install
// To remove
$ make uninstall
```

## .. Or do it manually
```bash
// Compile from source
$ gcc cod.c -o cod && gcc comp.c -o comp && gcc cor.c -o cor

// Give them execute permissions
$ chmod +x cod cor comp 

// (With sudo) move them to /usr/bin
$ mv cod /bin/cod && mv cor /bin/cor && mv /bin/comp
```

