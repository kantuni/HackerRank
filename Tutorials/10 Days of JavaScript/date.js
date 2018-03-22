function getDayName(dateString) {
  const daysOfTheWeek = [
    'Sunday', 'Monday', 'Tuesday', 'Wednesday',
    'Thursday', 'Friday', 'Saturday'
  ];
  const day = new Date(dateString).getDay();
  return daysOfTheWeek[day];
}
