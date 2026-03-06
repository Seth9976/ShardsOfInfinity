// 函数名称: __wsopen_s
// 虚拟地址: 0x53a264
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__wsopen_s(int32_t* arg1, uint8_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: return common_sopen_dispatch<char>(arg2, arg3, arg4, arg5, arg1, 1)
    return common_sopen_dispatch<char>(arg2, arg3, arg4, arg5, arg1, 1)
}
