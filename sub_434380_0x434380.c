// 函数名称: sub_434380
// 虚拟地址: 0x434380
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_434380(int32_t arg1, int16_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: uint32_t eax = zx.d(arg2)
    uint32_t eax = zx.d(arg2)
    
    if (eax u>= 0xc8)
        sub_44e4d0(eax, &data_5559b1, "idNoMimic < MAX_CARDS", 
            "c:\ax2017\jams\shards\code\shardsgame.cpp", 0x87, "CardGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t i = 0
    int32_t* edx_1 = *((eax << 5) + data_5c2e2c + 0x14) + 0x34
    int32_t result
    
    do
        result = *edx_1
        bool cond:0_1
        
        if ((result & 0x20000000) == 0)
            cond:0_1 = arg4 == 1
        else
            cond:0_1 = arg4 == 0
        
        if (not(cond:0_1) && (result & arg3) == arg3)
            result.b = 1
            return result
        
        i += 1
        edx_1 = &edx_1[3]
    while (i s< 4)
    
    result.b = 0
    return result
}
