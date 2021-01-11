*toolbox* library and utilities
===============================

A set of utilities and library functions to facilitate writing of 
scientific codes -- with a particular focus on the analysis of 
atomistic simulations. This code is adapted from 
[cosmo-epfl/toolbox](https://github.com/cosmo-epfl/toolbox) with 
the additional feature of computing pair-specific 3D Radial Distribution Functions (3DRDF)
as described in [Gasparotto et al. (2016)](https://pubs.acs.org/doi/abs/10.1021/acs.jctc.5b01138).

To actrivate the computation of 3DRDFs in `trajworks` use the flag `-wdens`. Check the help
for more informations.

Compilation and dependencies
----------------------------

Compilation of the *toolbox* libraries and tools should not be too
difficult. It requires that FFTW3 and LAPACK libraries are installed
on the system, and a C++ compiler. 

On a Ubuntu system the dependencies can be satisfied by installing

```bash
sudo apt-get install build-essential liblapack-dev libfftw3-dev
```
Then, compiling *toolbox* should be straightforward:

```bash
cd src
make
```

The resulting executables will be generated in `bin`.

One can modify the default parameters for the compiler and library 
paths by creating a arch.xxx file in the main path, and specifying
which architecture file to load by running

```bash
cd src
ARCH=xxx make
```


 
