// 函数名称: sub_4762f0
// 虚拟地址: 0x4762f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4762f0(void* arg1)
{
    // 第一条实际指令: void* result = nullptr
    void* result = nullptr
    void* result_1 = data_5c99a0
    void* esi_1 = data_5c99a4 * 0x1008 + result_1
    
    while (true)
        if (result != 0)
            result += 0x1008
        else
            result = result_1
        
        if (result u>= esi_1)
            break
        
        while ((*(result + 0x1004) & 0xffff0000) == 0)
            result += 0x1008
            
            if (result u>= esi_1)
                return nullptr
        
        int32_t edi_1 = *(result + 0x7f4)
        int32_t ecx = 0
        
        if (edi_1 s> 0)
            void* edx_1 = result + 0x7f8
            
            while (true)
                if (*edx_1 == *(arg1 + 0x1004))
                    if (ecx == 0)
                        break
                    
                    int32_t ecx_1 = *(result + (ecx << 2) + 0x7f4)
                    int32_t var_14
                    char* ecx_2
                    
                    if (ecx_1 != 0)
                        result = zx.d(ecx_1.w)
                        
                        if (result u< data_5c99a4)
                            result = result * 0x1008 + data_5c99a0
                            
                            if (*(result + 0x1004) == ecx_1)
                                return result
                        
                        char const* const var_10_1 = "DataArray<struct UI2>::DataArrayGet"
                        var_14 = 0x6d
                        ecx_2 = "DataArrayTryToGet(id) != NULL"
                    else
                        char const* const var_10 = "DataArray<struct UI2>::DataArrayGet"
                        var_14 = 0x6c
                        ecx_2 = "id != DATAID_NULL"
                    
                    sub_44e4d0(result, &data_5559b1, ecx_2, "c:\ax2017\engine\dataarray.h", var_14, 
                        "DataArray<struct UI2>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                ecx += 1
                edx_1 += 4
                
                if (ecx s>= edi_1)
                    goto label_476310
            
            break
        
    label_476310:
        result_1 = data_5c99a0
    
    return nullptr
}
