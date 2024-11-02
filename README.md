# The City Kings

## Members
- Ruan Esterhuizen (u23532387)
- Dylan Hebron (u22503685)
- Thomas Schulz (u05039364)
- Ruben Hannes Gadd (u23633353)
- Raphael Rato (u22887581)


## Cloning the Repository:
- This project includes googletest as a Git submodule, which is required to build and run tests. When cloning the repository, make sure to initialize and update submodules to download all dependencies.


### Clone with Submodules in One Step:
- To clone the repository and initialize submodules in one command, use:

git clone --recurse-submodules <repo-url>

- Replace <repo-url> with the URL of this repository.

### Clone and Initialize Submodules Separately:
- Alternatively, if you’ve already cloned the repository without submodules, you can initialize them with:

git submodule update --init --recursive

- This will populate the googletest directory with the necessary files for running tests.
