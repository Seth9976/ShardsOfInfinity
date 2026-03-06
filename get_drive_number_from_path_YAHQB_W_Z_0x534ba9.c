// 函数名称: ?get_drive_number_from_path@@YAHQB_W@Z
// 虚拟地址: 0x534ba9
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?get_drive_number_from_path@@YAHQB_W@Z(int16_t* arg1)
{
    // 第一条实际指令: uint32_t eax = zx.d(*arg1)
    uint32_t eax = zx.d(*arg1)
    
    if (eax.w == 0 || arg1[1] != 0x3a)
        return 0
    
    if (eax u>= 0x61 && eax u<= 0x7a)
        eax -= 0x20
    
    return eax - 0x40
}
