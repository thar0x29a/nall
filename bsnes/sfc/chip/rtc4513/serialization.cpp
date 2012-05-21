#ifdef RTC4513_CPP

void RTC4513::serialize(serializer &s) {
  Thread::serialize(s);

  s.integer(clocks);
  s.integer(seconds);

  s.integer(chipselect);
  s.integer((unsigned&)state);
  s.integer(mdr);
  s.integer(offset);
  s.integer(wait);
  s.integer(ready);

  s.integer(secondlo);
  s.integer(secondhi);
  s.integer(batteryfailure);

  s.integer(minutelo);
  s.integer(minutehi);
  s.integer(minutecarry);

  s.integer(hourlo);
  s.integer(hourhi);
  s.integer(meridian);
  s.integer(hourcarry);

  s.integer(daylo);
  s.integer(dayhi);
  s.integer(dayram);
  s.integer(daycarry);

  s.integer(monthlo);
  s.integer(monthhi);
  s.integer(monthram);
  s.integer(monthcarry);

  s.integer(yearlo);
  s.integer(yearhi);

  s.integer(weekday);
  s.integer(weekdaycarry);

  s.integer(hold);
  s.integer(calendar);
  s.integer(irqflag);
  s.integer(roundseconds);

  s.integer(irqmask);
  s.integer(irqduty);
  s.integer(irqperiod);

  s.integer(pause);
  s.integer(stop);
  s.integer(atime);
  s.integer(test);
}

#endif
