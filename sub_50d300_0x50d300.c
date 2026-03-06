// 函数名称: sub_50d300
// 虚拟地址: 0x50d300
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_50d300(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t eax = 0xffffffff
    int32_t i = 0
    
    if (arg2 + 4 s> 0)
        do
            uint32_t edx = zx.d(*(*arg1 - arg2 + i - 4))
            i += 1
            eax = eax u>> 8 ^ *(((edx ^ zx.d(eax.b)) << 2) + &data_59d470)
        while (i s< arg2 + 4)
    
    uint8_t* edx_2 = *arg1
    int32_t eax_2 = not.d(eax)
    *edx_2 = (eax_2 u>> 0x18).b
    edx_2[1] = (eax_2 u>> 0x10).b
    edx_2[2] = (eax_2 u>> 8).b
    edx_2[3] = eax_2.b
    *arg1 = &edx_2[4]
    return &edx_2[4]
}
