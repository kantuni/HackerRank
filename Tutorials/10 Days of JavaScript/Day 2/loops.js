function isVowel(letter) {
  return /[aeiou]/i.test(letter);
}

function vowelsAndConsonants(s) {
  const letters = [...s];
  const vowels = letters.filter(letter => isVowel(letter));
  const consonants = letters.filter(letter => !isVowel(letter));
  vowels.map(vowel => console.log(vowel));
  consonants.map(consonant => console.log(consonant));
}
