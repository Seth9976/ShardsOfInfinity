// 函数名称: ??1formatting_buffer@__crt_stdio_output@@QAE@XZ
// 虚拟地址: 0x52053a
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall??1formatting_buffer@__crt_stdio_output@@QAE@XZ(void* arg1)
{
    // 第一条实际指令: int32_t result = __free_base(*(arg1 + 0x404))
    int32_t result = __free_base(*(arg1 + 0x404))
    *(arg1 + 0x404) = 0
    return result
}
