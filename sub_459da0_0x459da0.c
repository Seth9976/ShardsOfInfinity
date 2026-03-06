// 函数名称: sub_459da0
// 虚拟地址: 0x459da0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_459da0(uint32_t arg1, uint32_t arg2)
{
    // 第一条实际指令: void var_a8
    void var_a8
    int32_t eax_1 = __security_cookie ^ &var_a8
    uint32_t edi = arg2
    int64_t var_8c = *(arg1 + 8)
    int128_t xmm0_1 = *(arg1 + 0x14)
    int32_t var_84 = *(arg1 + 0x10)
    void* eax_3 = *(arg1 + 0x2c)
    int32_t var_a0 = *(arg1 + 0x24)
    int128_t var_60 = var_a0.o
    int128_t var_50 = xmm0_1
    
    if (eax_3 != 0)
        arg2.b = *(eax_3 + 0xc) != 0
    else
        arg2.b = 0
    
    int128_t* eax_5 = sub_45c3f0(&var_a0, arg2, &var_60, &var_a0)
    var_60 = *eax_5
    int128_t var_50_1 = eax_5[1]
    int128_t var_40 = eax_5[2]
    uint32_t eax_6 = arg1
    
    if (arg2.b == 0)
        eax_6 = 0
    
    int128_t var_30 = eax_5[3]
    int32_t* result = sub_459880(eax_6, &var_60, *(arg1 + 4), edi, 0, eax_6)
    @__security_check_cookie@4(eax_1 ^ &var_a8)
    return result
}
