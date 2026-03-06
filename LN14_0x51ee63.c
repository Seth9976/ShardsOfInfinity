// 函数名称: $LN14
// 虚拟地址: 0x51ee63
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*$LN14(void* arg1 @ ebp, int32_t* arg2 @ edi)
{
    // 第一条实际指令: *(*(arg1 + 0xc) - 4) = *(arg1 - 0x30)
    *(*(arg1 + 0xc) - 4) = *(arg1 - 0x30)
    __FindAndUnlinkFrame(*(arg1 - 0x34))
    void* eax = sub_51e354()
    *(eax + 0x10) = *(arg1 - 0x38)
    int32_t* result = sub_51e354()
    result[5] = *(arg1 - 0x3c)
    int32_t entry_ebx
    
    if (*arg2 == 0xe06d7363 && arg2[4] == 3
            && (arg2[5] == 0x19930520 || arg2[5] == 0x19930521 || arg2[5] == 0x19930522)
            && *(arg1 - 0x40) == 0 && entry_ebx != 0)
        result = __IsExceptionObjectToBeDestroyed(arg2[6])
        
        if (result != 0)
            result.b = *(arg1 - 0x44) != 0
            uint32_t var_4_2 = zx.d(result.b)
            result = ___DestructExceptionObject(arg2)
    
    return result
}
