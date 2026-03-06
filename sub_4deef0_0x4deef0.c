// 函数名称: sub_4deef0
// 虚拟地址: 0x4deef0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_4deef0(int32_t arg1, int32_t* arg2, void* arg3, int32_t* arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t edi = *(arg3 + 4)
    int32_t edi = *(arg3 + 4)
    
    if (edi == 0)
        edi = arg4[4]
    
    *arg2 = arg4[1]
    arg2[1] = arg4[2]
    arg2[3] = 1
    arg2[0xd] = 1
    int64_t* eax_3 = sub_45cd70(8)
    *eax_3 = 0
    int32_t edx = arg2[1]
    int32_t ecx = *arg2
    arg2[0xf] = eax_3
    arg2[4] = 8
    arg2[5] = edi
    arg2[6] = 0
    int32_t eax_4 = sub_4dd7f0(eax_3, edx, ecx, edi)
    int32_t* ecx_1 = arg2[0xf]
    *ecx_1 = eax_4
    int32_t edi_1
    
    if (arg4[4] != edi || arg6 == 2)
        void* eax_6 = sub_45cd70(eax_4)
        void* var_1c = eax_6
        ecx_1[1] = eax_6
        int32_t ecx_4 = *arg2
        int32_t var_18_1 = ecx_4
        int32_t var_14_1 = arg2[1]
        int32_t var_10_1 = sub_4dd730(ecx_4, edi)
        int32_t var_c_1 = edi
        char* eax_9
        int32_t ecx_6
        eax_9, ecx_6 = sub_4ddd60(arg4, &var_1c)
        edi_1 = arg5
        
        if (arg6 != 2)
            int32_t var_34_2 = edi_1
            sub_4de010(eax_9, &var_1c, ecx_6)
        
        int32_t eax_10 = *arg4
        
        if (eax_10 != 0)
            _aligned_free_base(eax_10)
        
        *arg4 = 0
    else
        int32_t eax_5 = *arg4
        edi_1 = arg5
        int32_t var_34_1 = edi_1
        ecx_1[1] = eax_5
        sub_4de010(eax_5, arg4, ecx_1)
    
    if (*(arg3 + 8) == 0)
        int32_t var_34_4 = edi_1
        sub_44e260("Autogeneration of mipmaps is not implemented for %s")
    
    void* result
    result.b = 1
    return result
}
