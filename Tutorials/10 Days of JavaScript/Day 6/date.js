function getDayName(dateString) {
  const date = new Date(dateString);
  const options = {
    weekday: 'long'
  };
  return new Intl.DateTimeFormat('en-US', options).format(date);
}
