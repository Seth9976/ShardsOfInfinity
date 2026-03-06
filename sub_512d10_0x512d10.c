// 函数名称: sub_512d10
// 虚拟地址: 0x512d10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_512d10(char* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: char eax = *arg2
    char eax = *arg2
    *arg1 = eax
    
    if (arg3 == 1)
        arg1[1] = eax
        return arg1
    
    int32_t i = 1
    arg1[1] = ((zx.d(arg2[1]) + 2 + zx.d(*arg2) * 3) u>> 2).b
    
    if (arg3 - 1 s> 1)
        do
            uint32_t eax_7 = zx.d(arg2[i])
            int32_t ecx_2 = eax_7 + ((eax_7 + 1) << 1)
            arg1[i << 1] = ((zx.d(arg2[i - 1]) + ecx_2) u>> 2).b
            arg1[(i << 1) + 1] = ((zx.d(arg2[i + 1]) + ecx_2) u>> 2).b
            i += 1
        while (i s< arg3 - 1)
    
    arg1[i << 1] = ((zx.d(arg2[arg3 - 1]) + 2 + zx.d(arg2[arg3 - 2]) * 3) u>> 2).b
    arg1[(i << 1) + 1] = arg2[arg3 - 1]
    return arg1
}
