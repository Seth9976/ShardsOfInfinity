// 函数名称: sub_476940
// 虚拟地址: 0x476940
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_476940(char** arg1, char* arg2)
{
    // 第一条实际指令: *arg2 = 0
    *arg2 = 0
    int32_t ecx = data_5c99d8
    char* result
    
    if (ecx != 0)
        void* edx = data_5c99a4
        uint32_t esi_1 = zx.d(ecx.w)
        
        if (esi_1 u< edx)
            int32_t edi_1 = data_5c99a0
            result = *(esi_1 * 0x1008 + edi_1 + 0x1004)
            char* result_1 = result
            
            if (result == ecx)
                int32_t var_24
                char const* const ecx_1
                
                if (ecx == 0)
                    char const* const var_20 = "DataArray<struct UI2>::DataArrayGet"
                    var_24 = 0x6c
                    ecx_1 = "id != DATAID_NULL"
                label_476a84:
                    sub_44e4d0(result, &data_5559b1, ecx_1, "c:\ax2017\engine\dataarray.h", var_24, 
                        "DataArray<struct UI2>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result = zx.d(ecx.w)
                char* result_2 = result
                
                if (result u>= edx)
                label_476a6e:
                    char const* const var_20_1 = "DataArray<struct UI2>::DataArrayGet"
                    var_24 = 0x6d
                    ecx_1 = "DataArrayTryToGet(id) != NULL"
                    goto label_476a84
                
                result *= 0x1008
                
                if (*(result + edi_1 + 0x1004) != ecx)
                    goto label_476a6e
                
                if (*(result_2 * 0x1008 + edi_1 + 0x69c) == 3)
                    result = *arg1
                    
                    if (result == 1)
                        result = arg1[1]
                        
                        if (result == 0x1b || result == 9 || result == 0xd)
                            if (esi_1 u< edx && result_1 == ecx)
                                sub_46f6c0(esi_1 * 0x1008 + edi_1)
                                result = arg1[1]
                                ecx = data_5c99d8
                            
                            edx.b = result == 0xd
                            sub_46f4b0(ecx, edx.b)
                            *arg2 = 1
                        
                        result.b = 1
                        return result
                    
                    if (result == 2 || result == 0)
                        result.b = 1
                        return result
                    
                    if (result == 3)
                        if (esi_1 u< edx)
                            void* eax_2 = esi_1 * 0x1008 + edi_1
                            
                            if (*(eax_2 + 0x1004) == ecx)
                                sub_46f6c0(eax_2)
                                ecx = data_5c99d8
                        
                        edx.b = 0
                        sub_46f4b0(ecx, edx.b)
    
    result.b = 0
    return result
}
