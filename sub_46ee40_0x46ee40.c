// 函数名称: sub_46ee40
// 虚拟地址: 0x46ee40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_46ee40()
{
    // 第一条实际指令: uint32_t eax = sub_46e9d0() - 0x66
    uint32_t eax = sub_46e9d0() - 0x66
    
    if (eax u<= 0x88)
        eax = zx.d(lookup_table_46eef8[eax])
        
        switch (eax)
            case 0
                return 0x586558
            case 1
                return &data_571ae0
            case 2
                return &data_571e58
            case 3
                return 0x5725f8
            case 4
                return 0x571bf8
            case 5
                return 0x571c48
            case 6
                return 0x571ca8
            case 7
                return 0x571c80
            case 8
                return 0x571b38
            case 9
                return 0x571b50
    
    sub_44e4d0(eax, &data_5559b1, "Halt", "c:\ax2017\engine\ui2.cpp", 0x2269, "FieldGetSymbols")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
