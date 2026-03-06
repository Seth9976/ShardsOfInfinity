// 函数名称: sub_441db0
// 虚拟地址: 0x441db0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_441db0(int32_t arg1)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    
    if (data_e486d4 s> *(*fsbase->ThreadLocalStoragePointer + 4))
        __Init_thread_header(&data_e486d4)
        
        if (data_e486d4 == 0xffffffff)
            int32_t eax_1 = data_cdf41c
            data_e486dc = eax_1
            data_e486d8 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_e486e8 = "order_ally_08"
            data_e486ec = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_e486e4 = data_cdf418
            data_e48704 = eax_1 + 2
            data_e48718 = eax_1 + 3
            data_e4872c = eax_1 + 4
            data_e48740 = eax_1 + 5
            data_e48754 = eax_1 + 6
            data_e48768 = eax_1 + 7
            data_e4877c = eax_1 + 8
            data_e48790 = eax_1 + 9
            data_e487a4 = eax_1 + 0xa
            data_e487b8 = eax_1 + 0xb
            data_e487cc = eax_1 + 0xc
            data_e487e0 = eax_1 + 0xd
            data_e487f4 = eax_1 + 0xe
            data_e48808 = eax_1 + 0xf
            data_e486fc = "homodeus_ally_01"
            data_e486f0 = eax_1 + 1
            data_e486f8 = &data_e486d8
            data_e48700 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_e48710 = "order_ally_01"
            data_e4870c = &data_e486ec
            data_e48714 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_e48724 = "order_ally_02"
            data_e48720 = &data_e48700
            data_e48728 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_e48738 = "order_ally_05"
            data_e48734 = &data_e48714
            data_e4873c = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_e4874c = "order_ally_P1"
            data_e48748 = &data_e48728
            data_e48750 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_e48760 = "order_champion_02"
            data_e4875c = &data_e4873c
            data_e48764 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_e48774 = "order_champion_03"
            data_e48770 = &data_e48750
            data_e48778 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_e48788 = "undergrowth_ally_01"
            data_e48784 = &data_e48764
            data_e4878c = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_e4879c = "undergrowth_ally_03"
            data_e48798 = &data_e48778
            data_e487a0 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_e487b0 = "undergrowth_ally_04"
            data_e487ac = &data_e4878c
            data_e487b4 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_e487c4 = "undergrowth_ally_07"
            data_e487c0 = &data_e487a0
            data_e487c8 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_e487d8 = "voidborn_ally_01"
            data_e487d4 = &data_e487b4
            data_e487dc = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_e487ec = "voidborn_ally_03"
            data_e487e8 = &data_e487c8
            data_e487f0 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_e48800 = "voidborn_ally_07"
            data_e487fc = &data_e487dc
            data_e48804 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_e48814 = "voidborn_champion_01"
            data_e4881c = eax_1 + 0x10
            data_e48830 = eax_1 + 0x11
            data_e48844 = eax_1 + 0x12
            data_e48810 = &data_e487f0
            data_e48818 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_e48828 = "AI_Eas"
            data_e48824 = &data_e48804
            data_e4882c = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_e4883c = "AI_Med"
            data_e48838 = &data_e48818
            data_e48840 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_e48850 = "AI_Har"
            data_cdf41c = eax_1 + 0x13
            data_e4884c = &data_e4882c
            data_cdf418 = &data_e48840
            __Init_thread_footer(&data_e486d4)
    
    if (arg1 - 0xc8 u> 0x12)
        return &data_e486d8
    
    if (arg1 - 0xc8 u< 0x13)
        return &(&data_e486d8)[(arg1 - 0xc8) * 5]
    
    sub_44e4d0(arg1 - 0xc8, &data_5559b1, "idx < ARRAYSIZE(decs)", 
        "c:\ax2017\jams\shards\code\shardsclient.cpp", 0x2379, "GameSpecific_GetAvatar")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
