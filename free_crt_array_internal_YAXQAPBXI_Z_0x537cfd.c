// 函数名称: ?free_crt_array_internal@@YAXQAPBXI@Z
// 虚拟地址: 0x537cfd
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*?free_crt_array_internal@@YAXQAPBXI@Z(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t entry_ebx
    int32_t entry_ebx
    int32_t var_8 = entry_ebx
    int32_t* esi = arg1
    int32_t edi
    int32_t var_10 = edi
    int32_t edi_1 = 0
    void* result = &esi[arg2]
    int32_t ebx_2 = not.d(sbb.d(entry_ebx, entry_ebx, result u< esi)) & arg2 << 2 u>> 2
    
    if (ebx_2 != 0)
        do
            result = __free_base(*esi)
            edi_1 += 1
            esi = &esi[1]
        while (edi_1 != ebx_2)
    
    return result
}
