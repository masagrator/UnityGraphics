
.PHONY: all clean

all:
	@$(MAKE) -C Plugin/
	@$(MAKE) -C Overlay/
	@mkdir -p Out/SaltySD/plugins/
	@mkdir -p Out/switch/.overlays
	@cp Overlay/UnityGraphics-ovl.ovl Out/switch/.overlays/UnityGraphics-ovl.ovl
	@cp Plugin/UnityGraphics.elf Out/SaltySD/plugins/UnityGraphics.elf

clean:
	@$(MAKE) -C Plugin/ clean
	@$(MAKE) -C Overlay/ clean
	@rm -r -f Out