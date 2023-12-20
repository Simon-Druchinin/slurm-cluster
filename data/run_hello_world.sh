#!/bin/bash
#SBATCH -J mpi-hello # Job name
#SBATCH -n 4 # Number of processes
#SBATCH -t 0:10:00 # Max wall time
#SBATCH -o result.out # Output file name

mpicc main.c -o main
mpirun --allow-run-as-root -np 4 ./main
