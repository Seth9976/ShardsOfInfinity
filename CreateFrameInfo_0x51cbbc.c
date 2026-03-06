// 函数名称: __CreateFrameInfo
// 虚拟地址: 0x51cbbc
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*__CreateFrameInfo(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: *arg1 = arg2
    *arg1 = arg2
    arg1[1] = *(sub_51e354() + 0x24)
    *(sub_51e354() + 0x24) = arg1
    return arg1
}
