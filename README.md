# dmgsim

DMG CPU functional simulator in C/C++.

- dmglib: DMG-CPU component base
- sm83sim: SHARP SM83 Core functional simulator
- dmgsim: DMG-CPU SoC functional simulator

## Approaches to simulation

Since DMG CPU uses both synchronous (DFF) and asynchronous (Dynamic latches) approaches, we need to simulate edge.

This is done by storing two contexts of simulated circuits - current and previous. In this way the edge can be detected.

The results of the simulator's work are saved in VCD dump, which can be viewed in utilities like GTKWave.

We will consider the boot of Monitor ROM (the one inside the SoC) as the success of the project.