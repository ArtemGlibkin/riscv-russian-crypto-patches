/*
 *  RISC-V Russian crypto intrinsic
*/

#ifndef RVINTRIN_H
#define RVINTRIN_H
#include <limits.h>
#include <stdint.h>
#include <stdio.h>

#ifdef RVINTRIN_RV64
static inline int64_t _rv64_grasshooper_s(int64_t rs1) { int64_t rd; __asm__ ("grasshooper64.r  %0, %1 " : "=r"(rd) : "r"(rs1)); return rd; }
static inline int64_t _rv64_grasshooper_rs(int64_t rs1) { int64_t rd; __asm__ ("grasshooper64.rs  %0, %1 " : "=r"(rd) : "r"(rs1)); return rd; }
static inline int64_t _rv64_grasshooper_l(int64_t rs1, int64_t rs2) { int64_t rd; __asm__ ("grasshooper64.l  %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int64_t _rv64_grasshooper_rl(int64_t rs1, int64_t rs2) { int64_t rd; __asm__ ("grasshooper64.rl  %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int64_t _rv64_stribog_s(int64_t rs1) { int64_t rd; __asm__ ("stribog64.s  %0, %1 " : "=r"(rd) : "r"(rs1)); return rd; }
static inline int64_t _rv64_stribog_rs(int64_t rs1) { int64_t rd; __asm__ ("stribog64.l  %0, %1 " : "=r"(rd) : "r"(rs1)); return rd; }
#endif


#endif // RVINTRIN_H
