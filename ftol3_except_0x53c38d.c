// 函数名称: __ftol3_except
// 虚拟地址: 0x53c38d
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcall__ftol3_except(int32_t arg1, int32_t arg2, int16_t arg3 @ x87control, int64_t arg4 @ xmm0)
{
    // 第一条实际指令: int16_t x87status
    int16_t x87status
    int16_t temp0
    temp0, x87status = __fnstcw_memmem16(arg3)
    uint32_t eax = zx.d(temp0)
    
    if (arg2 != 8 && (*(arg2 + &data_59e6f8:7) & eax.b) != 0)
        return 
    
    int16_t x87control
    int16_t x87status_1
    x87control, x87status_1 = __fldcw_memmem16(0x133f)
    int16_t var_20
    var_20.d = arg2
    int64_t var_10_1 = arg4
    uint32_t var_8_1 = eax
    sub_5328f0(var_20, 0, arg4.d)
}
