// 函数名称: sub_502ef0
// 虚拟地址: 0x502ef0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_502ef0(int32_t* arg1)
{
    // 第一条实际指令: _memset(&data_e49dd0, 0, 0x104)
    _memset(&data_e49dd0, 0, 0x104)
    int32_t var_8 = arg1[0xf]
    void* var_c = &arg1[7]
    uint32_t var_10 = zx.d(*(arg1 + 0x1b))
    uint32_t var_14 = zx.d(*(arg1 + 0x1a))
    uint32_t var_18 = zx.d(*(arg1 + 0x19))
    uint32_t var_1c = zx.d(arg1[6].b)
    uint32_t var_20 = zx.d(*(arg1 + 0x17))
    uint32_t var_24 = zx.d(*(arg1 + 0x16))
    uint32_t var_28 = zx.d(*(arg1 + 0x15))
    uint32_t var_2c = zx.d(arg1[5].b)
    int32_t var_30 = arg1[4]
    int32_t var_34 = arg1[3]
    int32_t var_38 = arg1[2]
    int32_t var_3c = arg1[1]
    int32_t var_40 = *arg1
    sub_5015e0(&data_e49dd0, 0x104, 
        "Height: %d\r\nWidth: %d\r\nEscapement: %d\r\nOrientation:  %d\r\nWeight: %d\r\nItalic: %d\r\n"
    "Underline: %d\r\nStrikeOut: %d\r\nCharSet: %d\r\nOutPrecision: %d\r\nClipPrecis")
    return &data_e49dd0
}
