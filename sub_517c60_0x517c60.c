// 函数名称: sub_517c60
// 虚拟地址: 0x517c60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_517c60(void* arg1, char* arg2)
{
    // 第一条实际指令: uint32_t esi = zx.d(sub_50ed90(arg1))
    uint32_t esi = zx.d(sub_50ed90(arg1))
    *arg2 = ((esi u>> 0xa & 0x1f) * 0xff s/ 0x1f).b
    arg2[1] = ((esi u>> 5 & 0x1f) * 0xff s/ 0x1f).b
    char result = ((esi & 0x1f) * 0xff s/ 0x1f).b
    arg2[2] = result
    return result
}
