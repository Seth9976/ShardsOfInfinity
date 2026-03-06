// 函数名称: ?destroy_fls@@YGXPAX@Z
// 虚拟地址: 0x5301d7
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __stdcall?destroy_fls@@YGXPAX@Z(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        destroy_ptd(arg1)
        __free_base(arg1)
}
