# Slurm Docker Cluster

## Исходник
+ https://github.com/giovtorres/slurm-docker-cluster/tree/master

## Поднять контейнер
```bash
docker-compose up --build
```

## Запустить приветствие
```bash
docker exec -it slurmctld bash
cd data
mpirun --allow-run-as-root -np 4 ./mpi_prog
```
