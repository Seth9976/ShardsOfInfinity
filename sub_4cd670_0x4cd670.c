// 函数名称: sub_4cd670
// 虚拟地址: 0x4cd670
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_4cd670(int128_t* arg1)
{
    // 第一条实际指令: int32_t eax = sub_45c850(*arg1)
    int32_t eax = sub_45c850(*arg1)
    return zx.d(eax.b) | (zx.d((eax u>> 0x10).b) << 8 | zx.d((eax u>> 8).b)) << 8
}
