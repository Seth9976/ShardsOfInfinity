// 函数名称: ?__c16rtomb_utf8@__crt_mbstring@@YAIPAD_SPAU_Mbstatet@@@Z
// 虚拟地址: 0x53b858
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")?__c16rtomb_utf8@__crt_mbstring@@YAIPAD_SPAU_Mbstatet@@@Z(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int16_t arg5, void* arg6)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t var_c = arg3
    void* esi = arg6
    uint32_t ecx = zx.d(arg5)
    int32_t edi
    int32_t var_14 = edi
    
    if (esi == 0)
        esi = &data_65aa9c
    
    int32_t result
    
    if (*esi != 0)
        if (arg5 + 0x2400 u> 0x3ff)
            result = __crt_mbstring::return_illegal_sequence(esi)
        else
            int32_t* var_18_3 = &var_c
            var_c = 0
            int32_t var_1c_2 = (zx.d(arg5) & 0xffff23ff) + *esi
            int32_t var_20_2 = arg4
            int32_t var_8_1 = 0
            result = sub_53bcf8()
            *esi = 0
            *(esi + 4) = 0
    else if (arg5 + 0x2400 u> 0x3ff)
        if (arg5 + 0x2800 u> 0x3ff)
            void* var_18_2 = esi
            uint32_t var_1c_1 = ecx
            int32_t var_20_1 = arg4
            return sub_53bcf8()
        
        result = 0
        *esi = ((ecx & 0xffff27ff) + 0x40) << 0xa
    else
        result = __crt_mbstring::return_illegal_sequence(esi)
    
    return result
}
