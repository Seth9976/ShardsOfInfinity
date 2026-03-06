// 函数名称: sub_512140
// 虚拟地址: 0x512140
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_512140(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t i_1 = arg2
    int32_t i_1 = arg2
    
    if (i_1 s> 0)
        int32_t* esi_1 = arg3 + 0x46cc
        int32_t i
        
        do
            int32_t eax = *esi_1
            
            if (eax != 0)
                _free(eax)
                *esi_1 = 0
                esi_1[-1] = 0
            
            int32_t eax_1 = esi_1[1]
            
            if (eax_1 != 0)
                _free(eax_1)
                esi_1[1] = 0
                esi_1[3] = 0
            
            int32_t eax_2 = esi_1[2]
            
            if (eax_2 != 0)
                _free(eax_2)
                esi_1[2] = 0
            
            esi_1 = &esi_1[0x12]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return arg4
}
