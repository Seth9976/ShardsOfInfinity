// 函数名称: sub_41fbd0
// 虚拟地址: 0x41fbd0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_41fbd0(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    int32_t result = sub_46e020(sub_472550(arg1, sub_41e4a0), "tblAvatar", arg1, 0xffffffff)
    int32_t result_1 = result
    
    for (int32_t i = 0; i s< 0x10; i += 1)
        result = sub_46e020(result, "tblAvatarItem", result_1, i)
        
        if (result != 0)
            sub_441db0(i + 0xc8)
            int32_t var_1c_2 = 0xffffffff
            result = sub_469930(result)
    
    return result
}
