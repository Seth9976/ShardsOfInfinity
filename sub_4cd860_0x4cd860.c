// 函数名称: sub_4cd860
// 虚拟地址: 0x4cd860
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_4cd860(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebx = *arg2
    int32_t ebx = *arg2
    *arg1 = ebx.b
    uint8_t eax_1 = (ebx u>> 0x10).b
    arg1[2] = eax_1
    uint8_t edx_1 = (ebx u>> 8).b
    arg1[1] = edx_1
    uint32_t result = zx.d(ebx.b)
    *arg2 = (zx.d(eax_1) << 8 | zx.d(edx_1)) << 8 | result
    return result
}
