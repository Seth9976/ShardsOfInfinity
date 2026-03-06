// 函数名称: ?decode_open_create_flags@@YAKH@Z
// 虚拟地址: 0x539f58
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?decode_open_create_flags@@YAKH@Z(int32_t arg1)
{
    // 第一条实际指令: int32_t eax_1 = arg1 & 0x700
    int32_t eax_1 = arg1 & 0x700
    
    if (eax_1 u> 0x400)
        if (eax_1 != 0x500)
            if (eax_1 == 0x600)
                return 5
            
            if (eax_1 != 0x700)
            label_539faf:
                *__errno() = 0x16
                __invalid_parameter_noinfo()
                return 0xffffffff
        
        return 1
    
    if (eax_1 == 0x400 || eax_1 == 0)
        return 3
    
    if (eax_1 == 0x100)
        return 4
    
    if (eax_1 == 0x200)
        return 5
    
    if (eax_1 == 0x300)
        return 2
    
    goto label_539faf
}
