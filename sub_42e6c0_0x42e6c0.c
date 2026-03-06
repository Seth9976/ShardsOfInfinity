// 函数名称: sub_42e6c0
// 虚拟地址: 0x42e6c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_42e6c0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t esi = 0
    
    if (arg4 s> 0)
        do
            int32_t result = *(arg2 + (esi << 2))
            uint32_t eax = zx.d(result.w)
            
            if (eax u>= 0xc8)
                sub_44e4d0(eax, &data_5559b1, "idNoMimic < MAX_CARDS", 
                    "c:\ax2017\jams\shards\code\shardsgame.cpp", 0x87, "CardGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            if (**((eax << 5) + arg3 + 0x14) == arg5)
                return result
            
            esi += 1
        while (esi s< arg4)
    
    return 0
}
