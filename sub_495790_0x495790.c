// 函数名称: sub_495790
// 虚拟地址: 0x495790
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_495790(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: void* esi = *(arg3 + 0x2e0)
    void* esi = *(arg3 + 0x2e0)
    
    if (esi != 0)
        arg1 = sub_4459f0(**(esi + 0x2e4))
        int32_t* edx_1 = *(esi + 0x2dc) * 0x134 + *arg1
        
        if (*(edx_1 + arg2 + 0xc) != 0)
            int32_t* eax_1 = sub_4b8ac0(arg1, edx_1, &data_5b39c8, data_e471a0, arg2)
            int32_t eax_2 = sub_452ac0()
            *arg4 =
                sub_4e0380(eax_1, 0, *(*(arg3 + 0x2e0) + 0x2e8), ((eax_2 & 0x7fffff) | 0x3f800000) - 1f)
            int32_t* eax_5
            eax_5.b = 1
            return eax_5
    
    arg1.b = 0
    return arg1
}
