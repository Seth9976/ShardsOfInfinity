// 函数名称: __cintrindisp1
// 虚拟地址: 0x53ec90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int80_t __fastcall__cintrindisp1(int32_t arg1, void* arg2, int16_t arg3 @ x87control, long double arg4 @ st0)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* ebp = &__saved_ebp
    int16_t x87status
    int16_t temp0
    temp0, x87status = __fnstcw_memmem16(arg3)
    int16_t var_a8 = temp0
    
    if (___acrt_has_user_matherr() != 0)
        double var_8a_1 = fconvert.d(arg4)
    
    __trandisp1(arg1, arg2, ebp, arg4)
    char var_2cc
    char var_2cc_2 = (var_2cc | 1) & 0xfd
    return cintrinexit(ebp, arg4)
}
