#include "interrupts.h"
#include "startup.h"

void __default_handler()
{
    __on_default_handler();
    while (true)
        ;
}

#define IRQ_HANDLER_ATTRS __attribute__((weak, alias("__default_handler")))

IRQ_HANDLER_ATTRS void Reset_Handler(void);
IRQ_HANDLER_ATTRS void NMI_Handler(void);
IRQ_HANDLER_ATTRS void HardFault_Handler(void);
IRQ_HANDLER_ATTRS void MemManage_Handler(void);
IRQ_HANDLER_ATTRS void BusFault_Handler(void);
IRQ_HANDLER_ATTRS void UsageFault_Handler(void);
IRQ_HANDLER_ATTRS void SVC_Handler(void);
IRQ_HANDLER_ATTRS void DebugMon_Handler(void);
IRQ_HANDLER_ATTRS void PendSV_Handler(void);
IRQ_HANDLER_ATTRS void SysTick_Handler(void);

IRQ_HANDLER_ATTRS void IRQ000_Handler(void);
IRQ_HANDLER_ATTRS void IRQ001_Handler(void);
IRQ_HANDLER_ATTRS void IRQ002_Handler(void);
IRQ_HANDLER_ATTRS void IRQ003_Handler(void);
IRQ_HANDLER_ATTRS void IRQ004_Handler(void);
IRQ_HANDLER_ATTRS void IRQ005_Handler(void);
IRQ_HANDLER_ATTRS void IRQ006_Handler(void);
IRQ_HANDLER_ATTRS void IRQ007_Handler(void);
IRQ_HANDLER_ATTRS void IRQ008_Handler(void);
IRQ_HANDLER_ATTRS void IRQ009_Handler(void);
IRQ_HANDLER_ATTRS void IRQ010_Handler(void);
IRQ_HANDLER_ATTRS void IRQ011_Handler(void);
IRQ_HANDLER_ATTRS void IRQ012_Handler(void);
IRQ_HANDLER_ATTRS void IRQ013_Handler(void);
IRQ_HANDLER_ATTRS void IRQ014_Handler(void);
IRQ_HANDLER_ATTRS void IRQ015_Handler(void);
IRQ_HANDLER_ATTRS void IRQ016_Handler(void);
IRQ_HANDLER_ATTRS void IRQ017_Handler(void);
IRQ_HANDLER_ATTRS void IRQ018_Handler(void);
IRQ_HANDLER_ATTRS void IRQ019_Handler(void);
IRQ_HANDLER_ATTRS void IRQ020_Handler(void);
IRQ_HANDLER_ATTRS void IRQ021_Handler(void);
IRQ_HANDLER_ATTRS void IRQ022_Handler(void);
IRQ_HANDLER_ATTRS void IRQ023_Handler(void);
IRQ_HANDLER_ATTRS void IRQ024_Handler(void);
IRQ_HANDLER_ATTRS void IRQ025_Handler(void);
IRQ_HANDLER_ATTRS void IRQ026_Handler(void);
IRQ_HANDLER_ATTRS void IRQ027_Handler(void);
IRQ_HANDLER_ATTRS void IRQ028_Handler(void);
IRQ_HANDLER_ATTRS void IRQ029_Handler(void);
IRQ_HANDLER_ATTRS void IRQ030_Handler(void);
IRQ_HANDLER_ATTRS void IRQ031_Handler(void);
IRQ_HANDLER_ATTRS void IRQ032_Handler(void);
IRQ_HANDLER_ATTRS void IRQ033_Handler(void);
IRQ_HANDLER_ATTRS void IRQ034_Handler(void);
IRQ_HANDLER_ATTRS void IRQ035_Handler(void);
IRQ_HANDLER_ATTRS void IRQ036_Handler(void);
IRQ_HANDLER_ATTRS void IRQ037_Handler(void);
IRQ_HANDLER_ATTRS void IRQ038_Handler(void);
IRQ_HANDLER_ATTRS void IRQ039_Handler(void);
IRQ_HANDLER_ATTRS void IRQ040_Handler(void);
IRQ_HANDLER_ATTRS void IRQ041_Handler(void);
IRQ_HANDLER_ATTRS void IRQ042_Handler(void);
IRQ_HANDLER_ATTRS void IRQ043_Handler(void);
IRQ_HANDLER_ATTRS void IRQ044_Handler(void);
IRQ_HANDLER_ATTRS void IRQ045_Handler(void);
IRQ_HANDLER_ATTRS void IRQ046_Handler(void);
IRQ_HANDLER_ATTRS void IRQ047_Handler(void);
IRQ_HANDLER_ATTRS void IRQ048_Handler(void);
IRQ_HANDLER_ATTRS void IRQ049_Handler(void);
IRQ_HANDLER_ATTRS void IRQ050_Handler(void);
IRQ_HANDLER_ATTRS void IRQ051_Handler(void);
IRQ_HANDLER_ATTRS void IRQ052_Handler(void);
IRQ_HANDLER_ATTRS void IRQ053_Handler(void);
IRQ_HANDLER_ATTRS void IRQ054_Handler(void);
IRQ_HANDLER_ATTRS void IRQ055_Handler(void);
IRQ_HANDLER_ATTRS void IRQ056_Handler(void);
IRQ_HANDLER_ATTRS void IRQ057_Handler(void);
IRQ_HANDLER_ATTRS void IRQ058_Handler(void);
IRQ_HANDLER_ATTRS void IRQ059_Handler(void);
IRQ_HANDLER_ATTRS void IRQ060_Handler(void);
IRQ_HANDLER_ATTRS void IRQ061_Handler(void);
IRQ_HANDLER_ATTRS void IRQ062_Handler(void);
IRQ_HANDLER_ATTRS void IRQ063_Handler(void);
IRQ_HANDLER_ATTRS void IRQ064_Handler(void);
IRQ_HANDLER_ATTRS void IRQ065_Handler(void);
IRQ_HANDLER_ATTRS void IRQ066_Handler(void);
IRQ_HANDLER_ATTRS void IRQ067_Handler(void);
IRQ_HANDLER_ATTRS void IRQ068_Handler(void);
IRQ_HANDLER_ATTRS void IRQ069_Handler(void);
IRQ_HANDLER_ATTRS void IRQ070_Handler(void);
IRQ_HANDLER_ATTRS void IRQ071_Handler(void);
IRQ_HANDLER_ATTRS void IRQ072_Handler(void);
IRQ_HANDLER_ATTRS void IRQ073_Handler(void);
IRQ_HANDLER_ATTRS void IRQ074_Handler(void);
IRQ_HANDLER_ATTRS void IRQ075_Handler(void);
IRQ_HANDLER_ATTRS void IRQ076_Handler(void);
IRQ_HANDLER_ATTRS void IRQ077_Handler(void);
IRQ_HANDLER_ATTRS void IRQ078_Handler(void);
IRQ_HANDLER_ATTRS void IRQ079_Handler(void);
IRQ_HANDLER_ATTRS void IRQ080_Handler(void);
IRQ_HANDLER_ATTRS void IRQ081_Handler(void);
IRQ_HANDLER_ATTRS void IRQ082_Handler(void);
IRQ_HANDLER_ATTRS void IRQ083_Handler(void);
IRQ_HANDLER_ATTRS void IRQ084_Handler(void);
IRQ_HANDLER_ATTRS void IRQ085_Handler(void);
IRQ_HANDLER_ATTRS void IRQ086_Handler(void);
IRQ_HANDLER_ATTRS void IRQ087_Handler(void);
IRQ_HANDLER_ATTRS void IRQ088_Handler(void);
IRQ_HANDLER_ATTRS void IRQ089_Handler(void);
IRQ_HANDLER_ATTRS void IRQ090_Handler(void);
IRQ_HANDLER_ATTRS void IRQ091_Handler(void);
IRQ_HANDLER_ATTRS void IRQ092_Handler(void);
IRQ_HANDLER_ATTRS void IRQ093_Handler(void);
IRQ_HANDLER_ATTRS void IRQ094_Handler(void);
IRQ_HANDLER_ATTRS void IRQ095_Handler(void);
IRQ_HANDLER_ATTRS void IRQ096_Handler(void);
IRQ_HANDLER_ATTRS void IRQ097_Handler(void);
IRQ_HANDLER_ATTRS void IRQ098_Handler(void);
IRQ_HANDLER_ATTRS void IRQ099_Handler(void);
IRQ_HANDLER_ATTRS void IRQ100_Handler(void);
IRQ_HANDLER_ATTRS void IRQ101_Handler(void);
IRQ_HANDLER_ATTRS void IRQ102_Handler(void);
IRQ_HANDLER_ATTRS void IRQ103_Handler(void);
IRQ_HANDLER_ATTRS void IRQ104_Handler(void);
IRQ_HANDLER_ATTRS void IRQ105_Handler(void);
IRQ_HANDLER_ATTRS void IRQ106_Handler(void);
IRQ_HANDLER_ATTRS void IRQ107_Handler(void);
IRQ_HANDLER_ATTRS void IRQ108_Handler(void);
IRQ_HANDLER_ATTRS void IRQ109_Handler(void);
IRQ_HANDLER_ATTRS void IRQ110_Handler(void);
IRQ_HANDLER_ATTRS void IRQ111_Handler(void);
IRQ_HANDLER_ATTRS void IRQ112_Handler(void);
IRQ_HANDLER_ATTRS void IRQ113_Handler(void);
IRQ_HANDLER_ATTRS void IRQ114_Handler(void);
IRQ_HANDLER_ATTRS void IRQ115_Handler(void);
IRQ_HANDLER_ATTRS void IRQ116_Handler(void);
IRQ_HANDLER_ATTRS void IRQ117_Handler(void);
IRQ_HANDLER_ATTRS void IRQ118_Handler(void);
IRQ_HANDLER_ATTRS void IRQ119_Handler(void);
IRQ_HANDLER_ATTRS void IRQ120_Handler(void);
IRQ_HANDLER_ATTRS void IRQ121_Handler(void);
IRQ_HANDLER_ATTRS void IRQ122_Handler(void);
IRQ_HANDLER_ATTRS void IRQ123_Handler(void);
IRQ_HANDLER_ATTRS void IRQ124_Handler(void);
IRQ_HANDLER_ATTRS void IRQ125_Handler(void);
IRQ_HANDLER_ATTRS void IRQ126_Handler(void);
IRQ_HANDLER_ATTRS void IRQ127_Handler(void);
IRQ_HANDLER_ATTRS void IRQ128_Handler(void);
IRQ_HANDLER_ATTRS void IRQ129_Handler(void);
IRQ_HANDLER_ATTRS void IRQ130_Handler(void);
IRQ_HANDLER_ATTRS void IRQ131_Handler(void);
IRQ_HANDLER_ATTRS void IRQ132_Handler(void);
IRQ_HANDLER_ATTRS void IRQ133_Handler(void);
IRQ_HANDLER_ATTRS void IRQ134_Handler(void);
IRQ_HANDLER_ATTRS void IRQ135_Handler(void);
IRQ_HANDLER_ATTRS void IRQ136_Handler(void);
IRQ_HANDLER_ATTRS void IRQ137_Handler(void);
IRQ_HANDLER_ATTRS void IRQ138_Handler(void);
IRQ_HANDLER_ATTRS void IRQ139_Handler(void);
IRQ_HANDLER_ATTRS void IRQ140_Handler(void);
IRQ_HANDLER_ATTRS void IRQ141_Handler(void);
IRQ_HANDLER_ATTRS void IRQ142_Handler(void);
IRQ_HANDLER_ATTRS void IRQ143_Handler(void);
