// 函数名称: sub_446a60
// 虚拟地址: 0x446a60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_446a60(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    void* eax = sub_445c50(arg1, arg2, arg3, arg4)
    int32_t ecx = 0
    void* esi = eax
    int32_t var_1c
    char const* const var_18_1
    char* ecx_1
    
    if (arg5 != 0)
        eax = *esi
        
        while (true)
            if (eax == 0)
                var_18_1 = "RemoveCardAtIndex"
                var_1c = 0x2c3
                ecx_1 = "*pid != CARDID_NULL"
                goto label_446b6f
            
            eax = zx.d(eax.w)
            
            if (eax u>= 0xc8)
                break
            
            esi = arg3 + 0xc + (eax << 5)
            eax = *esi
            
            if (eax == 0)
                var_18_1 = "RemoveCardAtIndex"
                var_1c = 0x2c8
                ecx_1 = "Halt"
                goto label_446b6f
            
            ecx += 1
            
            if (ecx == arg5)
                goto label_446aa2
        
        goto label_446ad0
    
    label_446aa2:
    int32_t edx_1 = *esi
    
    if (edx_1 != 0)
        void* eax_2 = sub_445c00(arg3, edx_1.w)
        int32_t result = *esi
        int32_t eax_3 = *(eax_2 + 8)
        *esi = eax_3
        
        if (eax_3 == 0)
        label_446b29:
            int32_t esi_2 = 0
            void* edi_1 = arg3 + 0x19dc
            
            while (true)
                int32_t edx_2 = *edi_1
                
                if (edx_2 != 0)
                    eax = sub_445c00(arg3, edx_2.w)
                    
                    if (*eax != 4)
                        var_18_1 = "RemoveCardAtIndex"
                        var_1c = 0x2bc
                        ecx_1 = "c.where == CW_GLOBAL_CENTER"
                        break
                
                esi_2 += 1
                edi_1 += 4
                
                if (esi_2 s>= 6)
                    return result
        else
            while (true)
                eax = zx.d(eax_3.w)
                
                if (eax u>= 0xc8)
                    break
                
                int32_t eax_4 = eax << 5
                *(eax_4 + arg3 + 0x10) -= 1
                eax_3 = *(eax_4 + arg3 + 0xc)
                
                if (eax_3 == 0)
                    goto label_446b29
            
        label_446ad0:
            var_18_1 = "CardGet"
            var_1c = 0x90
            ecx_1 = "idNoMimic < MAX_CARDS"
    else
        var_18_1 = "RemoveCardAtIndex"
        var_1c = 0x2ac
        ecx_1 = "*pid != CARDID_NULL"
    
    label_446b6f:
    sub_44e4d0(eax, &data_5559b1, ecx_1, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_1c, var_18_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
