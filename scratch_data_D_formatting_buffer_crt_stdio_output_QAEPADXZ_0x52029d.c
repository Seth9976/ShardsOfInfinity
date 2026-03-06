// 函数名称: ??$scratch_data@D@formatting_buffer@__crt_stdio_output@@QAEPADXZ
// 虚拟地址: 0x52029d
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcall??$scratch_data@D@formatting_buffer@__crt_stdio_output@@QAEPADXZ(void* arg1)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_8 = edi
    int32_t edi_1 = *(arg1 + 0x404)
    uint32_t eax = __crt_stdio_output::formatting_buffer::count<char>(arg1)
    
    if (edi_1 != 0)
        return eax + edi_1
    
    return eax + arg1
}
