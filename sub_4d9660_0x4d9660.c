// 函数名称: sub_4d9660
// 虚拟地址: 0x4d9660
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_4d9660(int32_t arg1, int32_t* arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: int32_t edx_1 = *arg2 - 0x1c
    int32_t edx_1 = *arg2 - 0x1c
    uint32_t param2
    
    switch (edx_1)
        case 0, 1, 2, 3, 4
            param2 = 0
        case 6, 7, 8, 9, 0xa
            param2 = 1
        case 0xc, 0xd, 0xe, 0xf, 0x10
            param2 = 2
        case 0x12, 0x13, 0x14, 0x15, 0x16
            param2 = 3
        case 0x18, 0x19, 0x1a, 0x1b, 0x1c
            param2 = 4
        case 0x1e, 0x1f, 0x20, 0x21, 0x22
            param2 = 5
        case 0x24, 0x25, 0x26, 0x27, 0x28
            param2 = 6
        case 0x2a, 0x2b, 0x2c, 0x2d, 0x2e
            param2 = 7
        default
            param2 = 0xffffffff
    
    if (param2 == arg3 && *(arg4 + 0x13f) == 0)
        uint32_t target = 0x8513
        param2 = 0xde1
        
        if (*(arg4 + 0x140) == 0)
            target = 0xde1
        
        if (edx_1 u<= 0x2e)
            param2 = zx.d(lookup_table_4d98d4[edx_1])
            
            switch (param2)
                case 0
                    param2 = arg2[1]
                    
                    if (*(arg4 + 0xe8) != param2)
                        glTexParameteri(target, 0x2802, param2)
                        int32_t eax = arg2[1]
                        *(arg4 + 0xe8) = eax
                        return eax
                case 1
                    param2 = arg2[1]
                    
                    if (*(arg4 + 0xec) != param2)
                        glTexParameteri(target, 0x2803, param2)
                        int32_t eax_1 = arg2[1]
                        *(arg4 + 0xec) = eax_1
                        return eax_1
                case 2
                    param2 = arg2[1]
                    
                    if (*(arg4 + 0xf0) != param2)
                        glTexParameteri(target, 0x8072, param2)
                        int32_t eax_2 = arg2[1]
                        *(arg4 + 0xf0) = eax_2
                        return eax_2
                case 3
                    int32_t param2_1 = arg2[1]
                    
                    if (*(arg4 + 0x13d) != 0)
                        if (param2_1 == 0x2700 || param2_1 == 0x2702)
                            param2_1 = 0x2600
                        else if (param2_1 == 0x2701 || param2_1 == 0x2703)
                            param2_1 = 0x2601
                    
                    if (*(arg4 + 0xf4) != param2_1)
                        glTexParameteri(target, 0x2801, param2_1)
                        *(arg4 + 0xf4) = param2_1
                    
                    param2 = arg2[2]
                    
                    if (*(arg4 + 0xfc) != param2)
                        *(arg4 + 0xfc) = param2
                case 4
                    param2 = arg2[1]
                    
                    if (*(arg4 + 0xf8) != param2)
                        glTexParameteri(target, 0x2800, param2)
                        param2 = arg2[1]
                        *(arg4 + 0xf8) = param2
    
    return param2
}
