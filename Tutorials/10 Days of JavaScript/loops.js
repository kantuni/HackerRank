function isVowel(letter) {
  return /[aeiou]/i.test(letter);
}

function vowelsAndConsonants(s) {
  let vowels = [], consonants = [];
  for (const letter of s) {
    if (isVowel(letter)) {
      vowels.push(letter);
    } else {
      consonants.push(letter);
    }
  }
  vowels.map(vowel => console.log(vowel));
  consonants.map(consonant => console.log(consonant));
}
