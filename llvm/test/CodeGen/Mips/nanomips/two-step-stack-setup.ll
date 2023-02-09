; RUN: llc -mtriple=nanomips -asm-show-inst -verify-machineinstrs < %s | FileCheck %s

; Check if stack setup is splitted into two-step setup when sp
; offset is larger than 4096
define void @test1() {
  ; CHECK: save	32, $s0, $s1, $s2, $s3, $s4
  ; CHECK: addiu $sp, $sp, -4096  
  %foo = alloca [4096 x i8], align 1
  %1 = getelementptr inbounds [4096 x i8], [4096 x i8]* %foo, i32 0, i32 0
  call void asm sideeffect "", "r,~{$16},~{$17},~{$18},~{$19},~{$20},~{$1}"(i8* %1)
  ret void
  ; CHECK: addiu $sp, $sp, 4096
  ; CHECK: restore.jrc	32, $s0, $s1, $s2, $s3, $s4
}

; Check if there are two instructions for storing sp in fp
; if function uses fp and two-step stack setup is present
define void @test2() #0 {
  ; CHECK: save	32, $fp, $ra, $s0, $s1, $s2, $s3, $s4  
  ; CHECK: or $fp, $sp, $zero
  ; CHECK: addiu $sp, $sp, -4096
  ; CHECK: or $fp, $sp, $zero
  %foo = alloca [4096 x i8], align 1
  %1 = getelementptr inbounds [4096 x i8], [4096 x i8]* %foo, i32 0, i32 0
  call void asm sideeffect "", "r,~{$16},~{$17},~{$18},~{$19},~{$20},~{$1}"(i8* %1)
  ret void
  ; CHECK: addiu $sp, $sp, 4096
  ; CHECK: restore.jrc	32, $fp, $ra, $s0, $s1, $s2, $s3, $s4
}

attributes #0 = { "frame-pointer"="all"}

!llvm.module.flags = !{!0}

!0 = !{i32 7, !"frame-pointer", i32 2}

