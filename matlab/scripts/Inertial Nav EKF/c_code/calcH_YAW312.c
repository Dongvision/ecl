  t9 = q0*q3;
  t10 = q1*q2;
  t2 = t9-t10;
  t3 = q0*q0;
  t4 = q1*q1;
  t5 = q2*q2;
  t6 = q3*q3;
  t7 = t3-t4+t5-t6;
  t8 = 1.0/(t7*t7);
  t11 = t2*t2;
  t12 = t8*t11*4.0;
  t13 = t12+1.0;
  t14 = 1.0/t13;
  A0[0][0] = t8*t14*(q3*t3+q3*t4-q3*t5+q3*t6-q0*q1*q2*2.0)*-2.0;
  A0[0][1] = t8*t14*(q2*t3+q2*t4+q2*t5-q2*t6-q0*q1*q3*2.0)*-2.0;
  A0[0][2] = t8*t14*(-q1*t3+q1*t4+q1*t5+q1*t6-q0*q2*q3*2.0)*2.0;
  A0[0][3] = t8*t14*(q0*t3-q0*t4+q0*t5+q0*t6-q1*q2*q3*2.0)*2.0;
