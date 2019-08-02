This project contains copies of the FOSS packages used in the rhpro-11 sterilizer firmware.

The top level of this directory contains:

  README.md file (this file)
  FOSS directory which contains a directory for each package deployed in an installation.

Each package directory contains zero or more 'patches' to the project plus a subdirectory containing the source code. Additional
files and directories may exist if required for the particular package.

Patches are those to be applied by the developer to the upstream version.

These files are posted without git submodules due to requirements of GPL and other licenses that copies of software be made
available rather than simply pointers to upstream versions. git submodule would only pass along a 'git-able' submodule which might
disappear after being referenced. We do it in this way to ensure the actual source code used in the rhpro11 firmware is made
available, as the original upstream version, with any local patches identified.
