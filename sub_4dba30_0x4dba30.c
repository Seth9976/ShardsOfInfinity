// 函数名称: sub_4dba30
// 虚拟地址: 0x4dba30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscallsub_4dba30(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = arg1 + (arg2 << 2)
    void* esi = arg1 + (arg2 << 2)
    (*__glewQueryCounter)(*(esi + 0x4264), 0x8e28)
    arg2 = 0
    return (*__glewGetQueryObjectiv)(*(esi + 0x4264), 0x8867, &arg2)
}
