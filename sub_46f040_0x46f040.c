// 函数名称: sub_46f040
// 虚拟地址: 0x46f040
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_46f040(int32_t arg1)
{
    // 第一条实际指令: int32_t eax = data_5c99a4
    int32_t eax = data_5c99a4
    int32_t edx = 0
    int32_t ebx = data_5c99a0
    int32_t edi = data_5cea2c
    
    if (edi s> 0)
        do
            if (arg1 == 0)
                goto label_46f0a6
            
            uint32_t ecx = zx.d(arg1.w)
            
            if (ecx u>= eax)
                goto label_46f14e
            
            eax = ecx * 0x1008
            
            if (*(eax + ebx + 0x1004) != arg1)
                goto label_46f14e
            
            if ((&data_5cda2c)[edx] == *(ecx * 0x1008 + ebx + 0x6a8))
                data_5cea2c = edi - 1
                int32_t result = (&data_5cda2c)[edi - 1]
                (&data_5cda2c)[edx] = result
                return result
            
            eax = data_5c99a4
            edx += 1
        while (edx s< edi)
    
    int32_t var_14
    char const* const ecx_2
    
    if (arg1 != 0)
        uint32_t edx_1 = zx.d(arg1.w)
        
        if (edx_1 u< eax)
            eax = edx_1 * 0x1008
            
            if (*(eax + ebx + 0x1004) == arg1)
                void* ecx_4 = edx_1 * 0x1008 + ebx
                eax = *(ecx_4 + 0x6a8)
                (&data_5cda2c)[edi] = eax
                data_5cea2c += 1
                
                if (edx_1 u< data_5c99a4)
                    eax = edx_1 * 0x1008
                    
                    if (*(eax + ebx + 0x1004) == arg1)
                        data_5cea30 = sub_46e4e0(ecx_4)
                        sub_51d5b0(&(&data_5cda24)[data_64f840 * 0x407], &data_5cda28, 0x1018)
                        return sub_46e5c0(arg1) __tailcall
        
    label_46f14e:
        char const* const var_10_1 = "DataArray<struct UI2>::DataArrayGet"
        ecx_2 = "DataArrayTryToGet(id) != NULL"
        var_14 = 0x6d
    else
    label_46f0a6:
        char const* const var_10 = "DataArray<struct UI2>::DataArrayGet"
        var_14 = 0x6c
        ecx_2 = "id != DATAID_NULL"
    
    sub_44e4d0(eax, &data_5559b1, ecx_2, "c:\ax2017\engine\dataarray.h", var_14, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
