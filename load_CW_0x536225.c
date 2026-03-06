// 函数名称: __load_CW
// 虚拟地址: 0x536225
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__load_CW(int32_t arg1)
{
    // 第一条实际指令: arg1:2.w = (arg1.w & 0x300) | 0x7f
    arg1:2.w = (arg1.w & 0x300) | 0x7f
    int16_t x87control
    int16_t x87status
    x87control, x87status = __fldcw_memmem16(arg1:2.w)
}
