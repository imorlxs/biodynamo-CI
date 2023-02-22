<p align="center">
  <a href="http://biodynamo.org">
    <img src="https://biodynamo.org/images/bdm_logo_large.png" alt="BioDynaMo logo" width="72" height="72">
  </a>
</p>

<h3 align="center">BioDynaMo</h3>

<p align="center">
  Biology Dynamics Modeller
  <br>
  <a href="http://biodynamo.org/"><strong>Visit our website »</strong></a>
  <br>
  <br>
  <a href="https://github.com/BioDynaMo/biodynamo/issues/new">Report bug</a>
  ·
  <a href="https://github.com/BioDynaMo/biodynamo/issues/new">Request feature</a>
  ·
  <a href="https://biodynamo.org/docs/userguide/">User's guide</a>
  ·
  <a href="https://biodynamo.org/docs/devguide/">Developer's guide</a>
</p>

<p align="center">
  <a href="https://github.com/BioDynaMo/biodynamo/actions/workflows/ubuntu-system-ci.yml"><img src="https://github.com/BioDynaMo/biodynamo/actions/workflows/ubuntu-system-ci.yml/badge.svg"/></a>
  <a href="https://github.com/BioDynaMo/biodynamo/actions/workflows/centos-system-ci.yml"><img src="https://github.com/BioDynaMo/biodynamo/actions/workflows/centos-system-ci.yml/badge.svg"/></a>
  <a href="https://github.com/BioDynaMo/biodynamo/actions/workflows/macos-system-ci.yml"><img src="https://github.com/BioDynaMo/biodynamo/actions/workflows/macos-system-ci.yml/badge.svg"/></a>
  <a href="https://sonarcloud.io/project/overview?id=BioDynaMo_biodynamo"><img src="https://sonarcloud.io/api/project_badges/measure?project=BioDynaMo_biodynamo&metric=alert_status"/></a>
  <a href="https://discord.gg/9hNCbNYwcT"><img src="https://img.shields.io/discord/1029690454574370816"/></a>
  <a href="https://opensource.org/licenses/Apache-2.0"><img src="https://img.shields.io/badge/License-Apache%202.0-blue.svg"/></a>
</p>

## What is BioDynaMo?

BioDynaMo is a software platform to easily create, run, and visualise 3D agent-based simulations.
* **Blazing fast:** The core of the platform is written in C++ and is highly optimized to harness the computational power of modern hardware.
* **Modular:** Reuse, adapt, or create modules that represents a specific biological behavior or entity. With BioDynaMo you don't need to start from scratch anymore!
* **Visual:** Effortlessly create astonishing images and animations of your simulations. Your publications and presentations will stand out even more!

## Installation

Simply run the following command:

```
curl https://biodynamo.org/install | bash
```

For more information, check out our [user's guide](https://biodynamo.org/docs/userguide/).

<!-- ## Examples
-- Show some nice visualizations here, with a one-liner explanation -->

## Contributing

The main purpose of this repository is to evolve BioDynaMo, making it faster and
easier to use. Development of BioDynaMo happens in the open on Github, and we are
grateful to the community for contributing bugfixes and improvements. Please read our [contribution guide](https://biodynamo.org/docs/devguide/contribute/) and learn about our development process, how to propose bugfixes and improvements, and how to build and test your changes to BioDynaMo.

We expect contributors to adhere to our [Contributor Covenant](https://github.com/BioDynaMo/biodynamo/blob/master/CODE_OF_CONDUCT.md).

## Cite

When citing BioDynaMo, please use this reference:

```
Lukas Breitwieser et al. BioDynaMo: a modular platform for high-performance agent-based simulation.
Bioinformatics, 2021. DOI: https://doi.org/10.1093/bioinformatics/btab649.
```

We recommend specifying the exact BioDynaMo version used in the methods section. 
For example: 

```
We use BioDynaMo v1.01.115-e1088d4a (Breitwieser el al., 2021) for all simulations in this article. 
```

The version can be obtained by executing `biodynamo --version` and can be interpreted as follows: `vMAJOR.MINOR.PATCH-SHA` 
`SHA` is the git commit hash that can be used to check out the exact BioDynaMo version with `git checkout SHA`.

## License

BioDynaMo is [Apache 2.0 licensed](./LICENSE).
