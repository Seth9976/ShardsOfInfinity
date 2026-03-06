// 函数名称: __trandisp1
// 虚拟地址: 0x535f50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall__trandisp1(int32_t arg1, void* arg2, void* arg3 @ ebp, long double arg4 @ st0)
{
    // 第一条实际指令: int16_t ebx
    int16_t ebx
    
    if (*(arg2 + 0xe) != 5)
        ebx = 0x133f
    else
        ebx:1.b = (*(arg3 - 0xa4)):1.b | 2
        ebx:1.b &= 0xfe
        ebx.b = 0x3f
    
    *(arg3 - 0xa2) = ebx
    int16_t x87control
    int16_t x87status
    x87control, x87status = __fldcw_memmem16(*(arg3 - 0xa2))
    bool c0
    bool c1
    bool c2
    bool c3
    c0, c1, c2, c3 = __fxam(arg4)
    *(arg3 - 0x94) = arg2
    *(arg3 - 0xa0) = (c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe
    *(arg3 - 0x90) = 0
    arg1.b = *(arg3 - 0x9f)
    arg1.b <<= 1
    arg1.b s>>= 1
    arg1.b = rol.b(arg1.b, 1)
    int32_t eax
    eax.b = arg1.b
    eax.b &= 0xf
    eax.b = *(&data_54f3de + eax)
    int32_t eax_1 = sx.d(eax.b)
    int32_t var_4 = eax_1
    void* var_8 = arg2
    int32_t var_c = arg1 & 0x404
    *(arg2 + eax_1 + 0x10)
    jump(*(arg2 + eax_1 + 0x10))
}
