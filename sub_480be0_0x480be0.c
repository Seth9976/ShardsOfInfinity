// 函数名称: sub_480be0
// 虚拟地址: 0x480be0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_480be0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, void* arg5)
{
    // 第一条实际指令: int32_t edi = 0
    int32_t edi = 0
    int32_t var_c = arg2
    
    if (arg4 s> 0)
        void* esi_2 = arg5 + 8
        
        do
            int32_t ecx = *(arg2 + (edi << 2))
            int32_t eax = ecx * 0x32c
            *(esi_2 - 8) = ecx
            *(esi_2 - 4) = 2
            char** edx_2 = arg3 + 0xc + eax
            *esi_2 = edx_2
            
            if (ecx u> 0x1e)
                sub_44e4d0(eax, &data_5559b1, "Halt", "c:\ax2017\engine\controller.cpp", 0xa3, 
                    "ClickStateAlloc")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            char const* const eax_1
            
            switch (ecx)
                case 0
                    eax_1 = "mouse left"
                case 1
                    eax_1 = "mouse right"
                case 2
                    eax_1 = "mouse scroll up"
                case 3
                    eax_1 = "mouse scroll down"
                case 4
                    eax_1 = "keyboard space"
                case 5
                    eax_1 = "keyboard enter"
                case 6
                    eax_1 = "keyboard esc"
                case 7
                    eax_1 = "keyboard tab"
                case 8
                    eax_1 = "keyboard left"
                case 9
                    eax_1 = "keyboard right"
                case 0xa
                    eax_1 = "gamepad a"
                case 0xb
                    eax_1 = "gamepad b"
                case 0xc
                    eax_1 = "gamepad x"
                case 0xd
                    eax_1 = "gamepad y"
                case 0xe
                    eax_1 = "gamepad back"
                case 0xf
                    eax_1 = "gamepad select"
                case 0x10
                    eax_1 = "gamepad left dpad"
                case 0x11
                    eax_1 = "gamepad left shoulder"
                case 0x12
                    eax_1 = "gamepad right dpad"
                case 0x13
                    eax_1 = "gamepad right shoulder"
                case 0x14
                    eax_1 = "oc remote enter"
                case 0x15
                    eax_1 = "oc remote back"
                case 0x16
                    eax_1 = "oc remote up"
                case 0x17
                    eax_1 = "oc remote down"
                case 0x18
                    eax_1 = "oc remote left"
                case 0x19
                    eax_1 = "oc remote right"
                case 0x1a
                    eax_1 = "gear remote trigger"
                case 0x1b
                    eax_1 = "gear remote touchpad"
                case 0x1c
                    eax_1 = "gear remote back"
                case 0x1d
                    eax_1 = "gear touchpad"
                case 0x1e
                    eax_1 = "gear back"
            
            edi += 1
            *edx_2 = eax_1
            arg2 = var_c
            esi_2 += 0xc
        while (edi s< arg4)
    
    return arg4
}
