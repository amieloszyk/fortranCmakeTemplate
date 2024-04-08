function sum_ints(int0, int1)

implicit none
integer :: sum_ints
integer, intent(in) :: int0, int1

sum_ints = int0 + int1

end function



subroutine sum_real(real_out, real_in0, real_in1)

implicit none
real(8), intent(out) :: real_out
real(8), intent(in) :: real_in0, real_in1

real_out = real_in0 + real_in1

end subroutine sum_real
