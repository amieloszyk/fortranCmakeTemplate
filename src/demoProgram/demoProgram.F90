program demo

implicit none

integer, external :: sum_ints

integer :: int_value0, int_value1, int_value2
real(8) :: real_value0, real_value1, real_value2

int_value0 = 1
int_value1 = 2
int_value2 = sum_ints(int_value0, int_value1)
write(*,*) int_value0, " + ", int_value1, " = ", int_value2

real_value0 = 100.0_8
real_value1 = 400.0_8
call sum_real(real_value2, real_value0, real_value1)
write(*,*) real_value0, " + ", real_value1, " = ", real_value2

write(*,*) "The demo ran!"

end program demo
