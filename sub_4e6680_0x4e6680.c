// 函数名称: sub_4e6680
// 虚拟地址: 0x4e6680
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (* __convention("regparm")sub_4e6680(int32_t arg1, uint32_t (* arg2)[0x4], int32_t* arg3, void* arg4, void* arg5))[0x4]
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    uint32_t (* eax)[0x4] = arg2
    uint32_t (* var_8_1)[0x4] = eax
    int32_t* esi = arg3
    
    if (arg4 s> 0)
        sub_482730(eax, esi[6], arg3, eax, arg4)
        eax = var_8_1
        esi[6] += arg4
    
    if (arg5 s> 0)
        if (esi[0x16].b != 0)
            int32_t* ecx = esi[1]
            
            if (*esi != ecx)
                void* eax_1 = sub_4826f0(ecx)
                
                if (*(eax_1 + 0x18) == 1 && *(eax_1 + 0x24) s> 1)
                    bool cond:0_1 = esi[0x15] == 0
                    *esi = *(*(eax_1 + 0x1c) + 4)
                    
                    if (not(cond:0_1))
                        sub_4d64e0(esi)
            
            void* eax_5 = var_8_1 + arg4
            sub_482730(eax_5, esi[8], esi, eax_5, arg5)
            void* eax_7 = esi[8] + arg5
            esi[6] = eax_7
            return eax_7
        
        eax = _memset(eax + arg4, 0, arg5)
        
        if (esi[9] == 0)
            eax = esi[7] + arg4
            esi[9] = eax
    
    return eax
}
