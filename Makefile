.PHONY: clean All

All:
	@echo "----------Building project:[ opd3-3 - Debug ]----------"
	@cd "opd3-3" && "$(MAKE)" -f  "opd3-3.mk"
clean:
	@echo "----------Cleaning project:[ opd3-3 - Debug ]----------"
	@cd "opd3-3" && "$(MAKE)" -f  "opd3-3.mk" clean
