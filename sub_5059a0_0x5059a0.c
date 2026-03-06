// 函数名称: sub_5059a0
// 虚拟地址: 0x5059a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

LRESULT __fastcallsub_5059a0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_114
    char eax_2
    int32_t edx
    eax_2, edx = _memset(&var_114, 0, 0x104)
    char* const edi = &data_5559b1
    WPARAM eax_3 = sub_503110(eax_2, edx, *(data_e47264 + 0x14), *arg1)
    
    if (eax_3 == 0xffffffff)
        char** lParam =
            sub_501690(eax_3, &data_5559b1, *arg1, &data_5559b1, &data_5559b1, &data_5559b1, 0x63)
        lParam[6] = 1
        SendMessageA(*(data_e47264 + 0x14), 0x180, 0, lParam)
    
    uint32_t eax_5 = arg1[5]
    
    if (eax_5 u<= 0x63)
        eax_5 = zx.d(lookup_table_505c04[eax_5])
        
        switch (eax_5)
            case 0
                edi = arg1[4]
            case 1
                uint32_t ecx_5 = zx.d(arg1[4].w)
                uint32_t var_120_2 = zx.d(*(arg1 + 0x12))
                uint32_t var_124_1 = ecx_5 u>> 8
                uint32_t var_128_1 = zx.d(ecx_5.b)
                eax_5 = sub_5015e0(&var_114, 0x104, "%d,%d,%d")
                edi = &var_114
            case 2
                eax_5 = sub_502ef0(arg1[4])
                edi = &data_e49dd0
            case 3
                sub_502f70(arg1[4])
                arg1[2] = 0xe4a558
                eax_5 = arg1[4]
                edi = *(eax_5 + 4)
            case 4
                edi = &data_59d250
                eax_5 = &data_59cf5c
                
                if (arg1[4] == 0)
                    edi = &data_59cf5c
            case 5
                int32_t ecx_8 = arg1[4]
                uint32_t var_120_3 = zx.d(ecx_8.b)
                uint32_t var_124_2 = zx.d((ecx_8 u>> 8).b)
                uint32_t var_128_2 = zx.d((ecx_8 u>> 0x10).b)
                uint32_t var_12c_2 = ecx_8 u>> 0x18
                eax_5 = sub_5015e0(&var_114, 0x104, "%d.%d.%d.%d")
                edi = &var_114
            case 6
                eax_5 = GetDateFormatA(0x400, 1, arg1[4], nullptr, &var_114, 0x104)
                edi = &var_114
            case 7
                eax_5 = GetTimeFormatA(0x400, 0, arg1[4], "hh':'mm':'ss tt", &var_114, 0x104)
                edi = &var_114
            case 8
                GetDateFormatA(0x400, 1, arg1[4], nullptr, &var_114, 0x104)
                int32_t __saved_esi
                void* edi_1 = &__saved_esi:3
                char i
                
                do
                    i = *(edi_1 + 1)
                    edi_1 += 1
                while (i != 0)
                
                void* ecx_10 = &var_114
                *edi_1 = 0x20
                
                do
                    i = *ecx_10
                    ecx_10 += 1
                while (i != 0)
                
                void var_113
                int32_t ecx_11 = ecx_10 - &var_113
                eax_5 = GetTimeFormatA(0x400, 0, arg1[4], "hh':'mm':'ss tt", &var_114 + ecx_11, 
                    0x104 - ecx_11)
                edi = &var_114
            case 9
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return 0xfffffffe
    
    char** lParam_1 = sub_501690(eax_5, arg1[1], *arg1, edi, arg1[2], arg1[3], arg1[5])
    LRESULT result = SendMessageA(*(data_e47264 + 0x18), 0x180, 0, lParam_1)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
