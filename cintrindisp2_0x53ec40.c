// 函数名称: __cintrindisp2
// 虚拟地址: 0x53ec40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int80_t __fastcall__cintrindisp2(int32_t arg1, void* arg2, int16_t arg3 @ x87control, long double arg4 @ st0, long double arg5 @ st1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* ebp = &__saved_ebp
    int16_t x87status
    int16_t temp0
    temp0, x87status = __fnstcw_memmem16(arg3)
    int16_t var_a8 = temp0
    
    if (___acrt_has_user_matherr() != 0)
        double var_8a_1 = fconvert.d(arg5)
        double var_82_1 = fconvert.d(arg4)
    
    __trandisp2(arg1, arg2, ebp, arg4, arg5)
    char var_2cc
    char var_2cc_1 = var_2cc | 3
    return cintrinexit(ebp, arg4)
}
