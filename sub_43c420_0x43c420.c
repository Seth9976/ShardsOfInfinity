// 函数名称: sub_43c420
// 虚拟地址: 0x43c420
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_43c420(int32_t arg1, int32_t arg2 @ esi)
{
    // 第一条实际指令: int32_t result = data_5bcca8
    int32_t result = data_5bcca8
    
    if (result != 0)
        uint32_t ecx = zx.d(result.w)
        
        if (ecx u< data_5bcd80)
            void* edi_2 = ecx * 0x568 + data_5bcd7c
            
            if (*(edi_2 + 0x564) == result)
                int32_t eax = sub_434470()
                int32_t var_10
                uint32_t eax_2
                
                if (*data_5c2e30 == 2)
                    if (eax == 0)
                        goto label_43c4ad
                    
                    eax_2 = eax - 1
                    
                    if (eax == 1)
                        goto label_43c4ad
                    
                    char const* const var_c = "DragUpdateDropTargets"
                    var_10 = 0x1651
                else if (eax == 0)
                label_43c4ad:
                    int32_t var_c_2 = 0xffffffff
                    sub_469930(arg1)
                    eax_2 = *(edi_2 + 0x518) - 6
                    
                    if (eax_2 u<= 0x10)
                        eax_2 = zx.d(lookup_table_43c5b8[eax_2])
                        
                        switch (eax_2)
                            case 0
                                return sub_43c4d9(arg1, arg2) __tailcall
                            case 1
                                return sub_43c557(arg1, arg2) __tailcall
                            case 2
                                return sub_43c4ed(arg1, arg2) __tailcall
                            case 3
                                return sub_43c543(arg1, arg2) __tailcall
                            case 4
                                return sub_43c501(arg1, edi_2, arg2) __tailcall
                    
                    char const* const var_c_3 = "DragUpdateDropTargets"
                    var_10 = 0x167c
                else
                    eax_2 = eax - 1
                    
                    if (eax == 1)
                        goto label_43c4ad
                    
                    char const* const var_c_1 = "DragUpdateDropTargets"
                    var_10 = 0x165f
                
                sub_44e4d0(eax_2, &data_5559b1, "Halt", "c:\ax2017\jams\shards\code\shardsclient.cpp", 
                    var_10, "DragUpdateDropTargets")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
    
    return result
}
