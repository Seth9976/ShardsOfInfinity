// 函数名称: sub_44a9e0
// 虚拟地址: 0x44a9e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_44a9e0(int32_t arg1, uint32_t arg2, void* arg3, uint32_t arg4)
{
    // 第一条实际指令: uint32_t eax_1 = zx.d(arg4.w)
    uint32_t eax_1 = zx.d(arg4.w)
    int32_t var_48_2
    char const* const var_44_2
    char* ecx_1
    
    if (eax_1 u>= 0xc8)
    label_44ab5d:
        var_44_2 = "CardGet"
        var_48_2 = 0x90
        ecx_1 = "idNoMimic < MAX_CARDS"
    else
        uint32_t var_44_1 = arg4
        int32_t var_48_1 = *(*((eax_1 << 5) + arg3 + 0x14) + 0x24)
        int32_t var_4c_1 = *sub_445b50(arg3, arg2)
        char const* const var_50_1 = "%s plays %s (%d)."
        void* var_54_1 = arg3
        int32_t eax_5 = *(arg3 + 0x2168)
        uint32_t esi_2
        
        if (eax_5 == 2 || eax_5 == 3)
            esi_2 = arg4
        else
            uint32_t (* eax_6)[0x4] = sub_44d360(arg3, arg2)
            esi_2 = arg4
            *eax_6 = 1
            (*eax_6)[1] = esi_2
        
        eax_1 = (eax_1 << 5) + 4 + arg3
        uint32_t var_c_1 = eax_1
        
        if (*(eax_1 + 4) == arg2)
            if (*eax_1 == 7)
                void* eax_10 = sub_445b50(arg3, arg2)
                *(*(*(var_c_1 + 0x10) + 0xc) + eax_10 + 0x1e) = 1
                sub_449980(eax_10, arg2, arg3, esi_2, 0)
                void* var_18 = arg3
                uint32_t var_14_1 = arg2
                int32_t var_24
                sub_445e80(&var_18, &var_24)
                void var_30
                eax_1 = sub_445ea0(&var_18, &var_30)
                int32_t var_1c
                int32_t edi_1 = var_1c
                int32_t var_28
                
                if (edi_1 == var_28)
                    return sub_449a10(arg3)
                
                int32_t var_20
                int32_t* esi_5 = var_20 * 0x9c + var_24 + ((edi_1 * 5 + 0x7a9) << 2)
                
                while (true)
                    uint32_t edx_4 = zx.d((*esi_5).w)
                    
                    if (edx_4 u>= 0xc8)
                        break
                    
                    eax_1 = *((edx_4 << 5) + arg3 + 0x14)
                    int32_t edx_6 = *(eax_1 + esi_5[1] * 0xc + 0x34)
                    
                    if (edx_6.b == 0x15)
                        eax_1 = sub_448f50(var_c_1, edx_6 - 0x15)
                        
                        if (eax_1.b != 0)
                            eax_1 = sub_449c10(eax_1, arg2, arg3, arg4, esi_5)
                    
                    edi_1 += 1
                    esi_5 = &esi_5[5]
                    
                    if (edi_1 == var_28)
                        return sub_449a10(arg3)
                
                goto label_44ab5d
            
            var_44_2 = "ShPlay"
            var_48_2 = 0xa18
            ecx_1 = "c.where == CW_PLAYER_HAND"
        else
            var_44_2 = "ShPlay"
            var_48_2 = 0xa17
            ecx_1 = "c.owner == who"
    
    sub_44e4d0(eax_1, &data_5559b1, ecx_1, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_48_2, 
        var_44_2)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
