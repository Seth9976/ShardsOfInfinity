// 函数名称: sub_47b400
// 虚拟地址: 0x47b400
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_47b400(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c = arg1
    int32_t var_c = arg1
    int32_t var_20
    struct _EXCEPTION_REGISTRATION_RECORD** result
    char const* const ecx
    
    if (arg1 != 0)
        uint32_t edx_1 = zx.d(arg1.w)
        
        if (edx_1 u< data_5c99a4)
            int32_t esi_1 = data_5c99a0
            result = edx_1 * 0x1008 + esi_1
            
            if (result[0x401] == arg1)
                void* ebx_1 = edx_1 * 0x1008 + esi_1
                
                if (*(ebx_1 + 0x69c) == 3)
                    result = *(ebx_1 + 0x63c) * 0x208
                
                if (*(ebx_1 + 0x69c) != 3 || *(result + ebx_1 + 0x1d8) != 1
                        || *(result + ebx_1 + 0x1d9) != 1)
                    int32_t esi_2 = 0
                    
                    if (*(ebx_1 + 0x7f4) s<= 0)
                    label_47b4ac:
                        result.b = 0
                        return result
                    
                    void* edi_1 = ebx_1 + 0x7f8
                    
                    while (true)
                        *edi_1
                        
                        if (sub_47b400().b == 1)
                            break
                        
                        esi_2 += 1
                        edi_1 += 4
                        
                        if (esi_2 s>= *(ebx_1 + 0x7f4))
                            goto label_47b4ac
                else
                    sub_46f730(arg1, nullptr)
                
                result.b = 1
                return result
        
        char const* const var_1c_1 = "DataArray<struct UI2>::DataArrayGet"
        var_20 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_1c = "DataArray<struct UI2>::DataArrayGet"
        var_20 = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_44e4d0(result, &data_5559b1, ecx, "c:\ax2017\engine\dataarray.h", var_20, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
