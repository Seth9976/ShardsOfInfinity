// 函数名称: sub_44ac60
// 虚拟地址: 0x44ac60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_44ac60(int32_t arg1, uint32_t arg2, void* arg3, uint32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t eax_2 = zx.d(arg4.w)
    uint32_t var_48 = eax_2
    int32_t var_68_2
    char const* const var_64_3
    char* ecx_6
    
    if (eax_2 u>= 0xc8)
    label_44ae05:
        var_64_3 = "CardGet"
        var_68_2 = 0x90
        ecx_6 = "idNoMimic < MAX_CARDS"
    else
        int32_t var_64_1 = *(*((eax_2 << 5) + arg3 + 0x14) + 0x24)
        int32_t var_68_1 = *sub_445b50(arg3, arg2)
        char const* const var_6c_1 = "%s exhausts %s."
        void* var_70_1 = arg3
        int32_t eax_6 = *(arg3 + 0x2168)
        
        if (eax_6 != 2 && eax_6 != 3)
            uint32_t (* eax_7)[0x4] = sub_44d360(arg3, arg2)
            *eax_7 = 2
            (*eax_7)[1] = arg4
        
        void* eax_11 = (var_48 << 5) + 4 + arg3
        int32_t eax_12 = *(eax_11 + 0x18)
        int32_t ecx_4 = (eax_11 - arg3 - 4) s>> 5
        int32_t eax_14
        
        if (eax_12 == 0)
            eax_14 = ecx_4
        else
            eax_14 = eax_12 << 0x10 | ecx_4
        
        eax_2 = sub_44ab90(eax_14, arg2, arg3, eax_14)
        
        if (eax_2.b != 0)
            *(eax_11 + 0x15) = 1
            sub_445a20(eax_11, 0xe, arg3, arg2, arg4, 0, 0, 0)
            uint32_t edx_2 = arg4
            int32_t esi_3 = 0
            int32_t edi_1 = 0
            int32_t ebx_1 = 0
            
            while (true)
                eax_2 = var_48
                uint32_t var_50 = edx_2
                int32_t var_4c_1 = edi_1
                
                if (eax_2 u>= 0xc8)
                    break
                
                void* ecx_8 = arg3
                int32_t** eax_19 = *((eax_2 << 5) + ecx_8 + 0x14) + 0x34 + ebx_1
                int32_t* result = *eax_19
                int32_t var_1c[0x4]
                
                if (result != 0)
                    result &= 0xa0000000
                    
                    if (result == 0x20000000)
                        void var_34
                        result = sub_448960(&var_50, arg2, ecx_8, &var_50, &var_34, 1)
                        
                        if ((*eax_19 & 0x40000000) == 0)
                            var_1c[esi_3] = edi_1
                            esi_3 += 1
                        else if (result == 0)
                            esi_3 = 0
                            var_1c[esi_3] = edi_1
                            esi_3 += 1
                        
                        edx_2 = arg4
                        ecx_8 = arg3
                    
                    ebx_1 += 0xc
                    edi_1 += 1
                    
                    if (ebx_1 s< 0x30)
                        continue
                
                int32_t edi_2 = 0
                
                if (esi_3 s> 0)
                    do
                        int32_t var_4c_2 = var_1c[edi_2]
                        var_50 = edx_2
                        result = sub_44a900(&var_50, arg2, ecx_8, &var_50)
                        ecx_8 = arg3
                        edi_2 += 1
                        edx_2 = arg4
                    while (edi_2 s< esi_3)
                
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return result
            
            goto label_44ae05
        
        var_64_3 = "ShExhaust"
        var_68_2 = 0xa6f
        ecx_6 = "CanExhaust(g, who, CardGetId(g, c))"
    
    sub_44e4d0(eax_2, &data_5559b1, ecx_6, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_68_2, 
        var_64_3)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
