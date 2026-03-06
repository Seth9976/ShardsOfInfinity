// 函数名称: ??$ensure_buffer_is_big_enough@D@formatting_buffer@__crt_stdio_output@@QAE_NI@Z
// 虚拟地址: 0x51fc6e
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __thiscall??$ensure_buffer_is_big_enough@D@formatting_buffer@__crt_stdio_output@@QAE_NI@Z(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    int32_t edi
    int32_t var_10 = edi
    void* result
    
    if (arg2 u<= 0x7fffffff)
        char ebx_1 = 0
        uint32_t esi_1 = arg2 * 2
        
        if (*(arg1 + 0x404) != 0)
            if (esi_1 u> *(arg1 + 0x400))
                goto label_51fcb4
            
            result.b = 1
        else if (esi_1 u<= 0x400 || esi_1 u<= *(arg1 + 0x400))
            result.b = 1
        else
        label_51fcb4:
            void* eax = __malloc_base(esi_1)
            var_8 = eax
            
            if (eax != 0)
                __crt_unique_heap_ptr<wchar_t,struct __crt_internal_free_policy>::operator=(
                    arg1 + 0x404, &var_8)
                eax = var_8
                ebx_1 = 1
                *(arg1 + 0x400) = esi_1
            
            __free_base(eax)
            result.b = ebx_1
    else
        *__errno() = 0xc
        result.b = 0
    
    return result
}
