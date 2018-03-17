function vowelsAndConsonants(s) {
  const vowels = ['a', 'e', 'i', 'o', 'u'];
  for (let letter of s) {
    if (vowels.includes(letter)) {
      console.log(letter);
    }
  }
  for (let letter of s) {
    if (!vowels.includes(letter)) {
      console.log(letter);
    }
  }
}
