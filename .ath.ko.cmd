cmd_drivers/net/wireless/ath/ath.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/net/wireless/ath/ath.ko drivers/net/wireless/ath/ath.o drivers/net/wireless/ath/ath.mod.o
