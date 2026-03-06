// 函数名称: ?write_string_impl@?$output_adapter_common@DV?$stream_output_adapter@D@__crt_stdio_output@@@__crt_stdio_output@@IBEXQBDHQAHAAV__crt_deferred_errno_cache@@@Z
// 虚拟地址: 0x522c28
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscall?write_string_impl@?$output_adapter_common@DV?$stream_output_adapter@D@__crt_stdio_output@@@__crt_stdio_output@@IBEXQBDHQAHAAV__crt_deferred_errno_cache@@@Z(int32_t* arg1, char* arg2, void* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t* edx = arg1
    int32_t* edx = arg1
    int32_t* var_8 = edx
    void* esi = *arg5
    
    if (esi == 0)
        edx = var_8
        esi = __errno()
        *arg5 = esi
    
    char* ebx_1 = arg2
    int32_t result = *esi
    void* ecx_1 = arg3 + ebx_1
    *esi = 0
    
    if (ebx_1 != ecx_1)
        int32_t edi
        int32_t var_1c_1 = edi
        
        do
            if (__crt_stdio_output::stream_output_adapter<char>::write_character_without_count_update(
                    edx, *ebx_1) != 0)
                *arg4 += 1
            else
                void* eax_5 = *arg5
                
                if (eax_5 == 0)
                    eax_5 = __errno()
                    *arg5 = eax_5
                
                if (*eax_5 != 0x2a)
                    *arg4 = 0xffffffff
                    break
                
                if (__crt_stdio_output::stream_output_adapter<char>::write_character_without_count_update(
                        var_8, 0x3f) == 0)
                    *arg4 = 0xffffffff
                else
                    *arg4 += 1
            
            edx = var_8
            ebx_1 = &ebx_1[1]
        while (ebx_1 != ecx_1)
    
    if (*esi == 0 && result != 0)
        *esi = result
    
    return result
}
