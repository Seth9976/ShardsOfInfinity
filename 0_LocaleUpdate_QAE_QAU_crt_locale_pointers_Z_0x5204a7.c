// 函数名称: ??0_LocaleUpdate@@QAE@QAU__crt_locale_pointers@@@Z
// 虚拟地址: 0x5204a7
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void** __thiscall??0_LocaleUpdate@@QAE@QAU__crt_locale_pointers@@@Z(void** arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_c = edi
    arg1[3].b = 0
    
    if (arg2 != 0)
        arg1[1] = *arg2
        arg1[2] = arg2[1]
    else if (data_65a674 != 0)
        int32_t* eax_3 = sub_530312()
        *arg1 = eax_3
        arg1[1] = eax_3[0x13]
        arg1[2] = eax_3[0x12]
        ___acrt_update_multibyte_info(eax_3, &arg1[1])
        ___acrt_update_multibyte_info(*arg1, &arg1[2])
        void* ecx_3 = *arg1
        int32_t eax_4 = *(ecx_3 + 0x350)
        
        if ((eax_4.b & 2) == 0)
            *(ecx_3 + 0x350) = eax_4 | 2
            arg1[3].b = 1
    else
        arg1[1] = data_5b0290
        arg1[2] = data_5b0294
    
    return arg1
}
