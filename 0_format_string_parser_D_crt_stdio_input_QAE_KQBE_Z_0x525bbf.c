// 函数名称: ??0?$format_string_parser@D@__crt_stdio_input@@QAE@_KQBE@Z
// 虚拟地址: 0x525bbf
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __thiscall??0?$format_string_parser@D@__crt_stdio_input@@QAE@_KQBE@Z(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_c = edi
    *arg1 = arg2
    arg1[1] = arg3
    arg1[2] = arg4
    arg1[3] = 0
    __builtin_memset(&arg1[0xb], 0, 0x20)
    arg1[4] = 0
    arg1[5].w = 0
    *(arg1 + 0x16) = 0
    arg1[6] = 0
    arg1[7] = 0
    arg1[8] = 0
    arg1[9].b = 0
    arg1[0xa] = 0
    return arg1
}
