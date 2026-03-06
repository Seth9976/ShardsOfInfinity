// 函数名称: sub_462db0
// 虚拟地址: 0x462db0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_462db0(void* arg1)
{
    // 第一条实际指令: int32_t edx = *(arg1 + 0x63c) * 0x208
    int32_t edx = *(arg1 + 0x63c) * 0x208
    int32_t eax = *(edx + arg1 + 0x204)
    
    if (eax u> 6)
        sub_44e4d0(eax, &data_5559b1, "Halt", "c:\ax2017\engine\ui2.cpp", 0xe55, "UI2AcceptsClicks")
        
        if (IsDebuggerPresent() != 1)
            noreturn sub_44e680() __tailcall
        
        breakpoint
    
    switch (eax)
        case 0
            int32_t eax_1 = *(arg1 + 0x69c)
            
            if (eax_1 == 2)
                int32_t eax_2
                eax_2.b = *(edx + arg1 + 0x1a0) != 0
                return eax_2
            
            if (eax_1 == 3)
                if (*(edx + arg1 + 0x1d8) == 0)
                    eax.b = 0
                    return eax
                
                eax.b = 1
                return eax
            
            if (eax_1 == 5)
                eax.b = 1
                return eax
            
            eax.b = 0
            return eax
        case 1, 3, 4, 5
            eax.b = 0
            return eax
        case 2, 6
            eax.b = 1
            return eax
}
