<h1 align="center">OS-Assignment</h1>

<p align="center"><img src="/code.gif?raw=true"/></p>

## Table of contents

- [Introduction](#introduction)

- [Requirements](#requirements)

- [Usage](#usage)
    
## Introduction
 - Thread 2 finishes before Thread 1
 - Thread 1 finishes before Thread 3
 - Use semaphore(s) to enforce these sychronization rules by adding P() and V() calls 
 - Finally, you must include sem create calls in suitable places to create and initialize the semaphores. 
 - Use sem create() calls show the intial semaphore value for each newly created semaphore. 
 - Do not use any synchronization primitives or techniques other than sempahores. 

## Requirements
 - `gcc compiler`
 
## Usage

### For compilation
 - using semaphores
```sh
$ gcc code.c -lpthread
```
 - without using semaphores
```sh
$ gcc without_sem.c -lpthread
```

### For execution
```sh
$ ./a.out
``` 

[(Back to top)](#table-of-contents)
## License
Lovely Professional University
> LinkedIn: [Debasish Dash](https://www.linkedin.com/in/debasishdash01) &nbsp;&middot;&nbsp;
 
