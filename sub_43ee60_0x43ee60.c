// 函数名称: sub_43ee60
// 虚拟地址: 0x43ee60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_43ee60(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, char arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi = arg4
    int32_t result_2 = 0
    int32_t* i_1
    int32_t* var_3e0 = &i_1
    int32_t var_350 = edi
    int32_t result_1 = 0
    int32_t* var_344 = &data_5bcd7c
    i_1 = nullptr
    void* eax_2 = sub_445070(&data_5bcd7c, var_3e0)
    int32_t var_32c[0xc9]
    
    for (int32_t* i = i_1; i != 0xffffffff; i = i_1)
        int32_t edx = i[2]
        int32_t eax_3 = i[3]
        int32_t var_3e4
        char const* const var_3e0_1
        char* ecx
        
        if (edx != 0xffffffff)
            if (eax_3 == 1 || eax_3 == 3 || eax_3 == 4 || eax_3 == 2)
                var_3e0_1 = "Reorg"
                var_3e4 = 0x1a88
                ecx = "gfx.card.where != CW_GLOBAL_HERO && gfx.card.where != CW_GLOBAL_DISCARD && gfx."
                "card.where != CW_GLOBAL_CENTER && gfx.card.where != CW_GLOBAL_DECK"
            label_43f153:
                sub_44e4d0(eax_3, &data_5559b1, ecx, "c:\ax2017\jams\shards\code\shardsclient.cpp", 
                    var_3e4, var_3e0_1)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
        else if (eax_3 != 1 && eax_3 != 3 && eax_3 != 4 && eax_3 != 2)
            var_3e0_1 = "Reorg"
            var_3e4 = 0x1a80
            ecx = "gfx.card.where == CW_GLOBAL_HERO || gfx.card.where == CW_GLOBAL_DISCARD || gfx.card."
            "where == CW_GLOBAL_CENTER || gfx.card.where == CW_GLOBAL_DECK"
            goto label_43f153
        
        if (*i == 0 && edx == arg3 && eax_3 == arg2 && (eax_3 != 9 || *(i + 0x16) == 0))
            var_32c[result_2] = i
            result_2 += 1
            result_1 = result_2
        
        eax_2 = sub_445070(var_344, &i_1)
    
    int32_t result = sub_429140(eax_2, &var_32c[result_2], &var_32c, result_2, sub_43edc0)
    void* i_2 = nullptr
    i_1 = nullptr
    
    if (result_2 s> 0)
        result = result_1
        
        do
            void* esi_1 = var_32c[i_2]
            *(esi_1 + 0x10) = i_2
            void var_364
            int32_t* eax_5 = sub_437260(&var_364, arg3, edi, &var_364, i_2, result)
            int32_t ecx_4 = *(esi_1 + 0x564)
            int128_t xmm0_1 = *eax_5
            int128_t var_33c = xmm0_1
            
            if (ecx_4 != data_5bcaec)
                int32_t eax_6 = *(esi_1 + 0x4f0)
                
                if (eax_6 != 0)
                    int32_t edx_6 = eax_6 * 0x70
                    int32_t eax_8 = *(edx_6 + esi_1 + 0x104)
                    void* ecx_8
                    
                    if (eax_8 == 0x12)
                        if (edi != 7 && edi != 0x11)
                            goto label_43f0df
                        
                        ecx_8 = esi_1 + 0xa0
                        eax_8 = data_5bcd60 | data_5bcd64
                        int128_t* edx_7 = &var_33c
                        int32_t var_3e4_5 = 6
                        
                        if (eax_8 != 0)
                            sub_432710(eax_8, edx_7, ecx_8, var_3e4_5, arg5)
                        else
                            sub_432880(eax_8, edx_7, ecx_8, var_3e4_5, arg5)
                    else if (eax_8 != 7 || (edi != 0x11 && edi != 0x16))
                    label_43f0df:
                        ecx_8 = esi_1 + 0xa0
                        
                        if (eax_8 != edi)
                            sub_432710(eax_8, &var_33c, ecx_8, 6, arg5)
                        else
                            sub_432880(eax_8, &var_33c, ecx_8, *(edx_6 + esi_1 + 0x168), arg5)
                    else
                        sub_432880(eax_8, &var_33c, esi_1 + 0xa0, 6, arg5)
                else
                    int32_t ecx_5 = *(esi_1 + 0x10c)
                    
                    if (ecx_5 != edi)
                        sub_432670(esi_1 + 0xa0, &var_33c, esi_1 + 0xa0, 6, arg5)
                    else if (ecx_5 != 0x13)
                        sub_432670(esi_1 + 0xa0, &var_33c, esi_1 + 0xa0, 2, arg5)
                    else
                        int128_t xmm0_2 = *eax_5
                        int32_t var_3cc = 1
                        *(esi_1 + 0x4f0) = 0
                        int128_t var_3c8_1 = xmm0_2
                        __builtin_memcpy(esi_1 + 0xa0, &var_3cc, 0x68)
                        __builtin_memcpy(esi_1 + 0x108, &var_3cc, 0x68)
                        edi = var_350
            else
                *(esi_1 + 0x508) = xmm0_1
            
            result = result_1
            i_2 = i_1 + 1
            i_1 = i_2
        while (i_2 s< result)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
