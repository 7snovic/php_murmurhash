## PHP MurmurHash Extension.

a full implementation for murmurhash library in PHP.

### Installation :-

```sh
phpize
./configure
make
make test
sudo make install
```

### Available functions :-

```php

// MurmurHash1 functions.
int $out = MurmurHash1(string $key, int $seed);
int $out = MurmurHash1Aligned(string $key, int $seed);

// MurmurHash2 functions.
int $out = MurmurHash2(string $key, int $seed);
int $out = MurmurHash64A(string $key, int $seed);
int $out = MurmurHash64B(string $key, int $seed);
int $out = MurmurHash2A(string $key, int $seed);
int $out = MurmurHashNeutral2(string $key, int $seed);
int $out = MurmurHashAligned2(string $key, int $seed);

// MurmurHash3 functions.
int $out = MurmurHash3_x86_32(string $key, int $seed);
array $out = MurmurHash3_x86_128(string $key, int $seed);
array $out = MurmurHash3_x64_128(string $key, int $seed);

```

Don't forget to run `make test`.
