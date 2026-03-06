// 函数名称: ?invert@?$scanset_buffer@E@__crt_stdio_input@@QAEXXZ
// 虚拟地址: 0x5287c2
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcall?invert@?$scanset_buffer@E@__crt_stdio_input@@QAEXXZ(char* arg1, int32_t arg2 @ esi)
{
    // 第一条实际指令: void* result = &arg1[0x20]
    void* result = &arg1[0x20]
    int32_t edx = 0
    int32_t var_4 = arg2
    int32_t esi_2 = (sbb.d(arg2, arg2, result u< arg1) & 0xffffffe0) + 0x20
    
    if (arg1 u<= result)
        do
            *arg1 = not.b(*arg1)
            arg1 = &arg1[1]
            edx += 1
        while (edx != esi_2)
    
    return result
}
