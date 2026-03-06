// 函数名称: sub_480e00
// 虚拟地址: 0x480e00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_480e00(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t eax = *arg1
    int32_t eax = *arg1
    
    if (eax == 0)
        return sub_480be0(eax, 0x586f3c, arg1, 0xa, arg2)
    
    if (eax == 1)
        return sub_480be0(eax - 1, &data_586ee8, arg1, 0x15, arg2)
    
    void* eax_3 = eax - 2
    int32_t var_20
    char const* const var_1c
    char* ecx
    
    if (eax == 2)
        int32_t edi_1 = arg1[2]
        void* ecx_1 = arg2 + 8
        int32_t var_8_1 = edi_1
        void* const esi_1 = &data_586ecc
        
        while (true)
            int32_t edx = *esi_1
            *(ecx_1 - 8) = edx
            *(ecx_1 - 4) = edi_1
            
            if (edx s< 0x1f)
                var_1c = "ClickStateAllocHand"
                var_20 = 0xac
                ecx = "ButtonSourceIsHanded(source)"
                break
            
            eax_3 = (edx - 0x1f) * 0x32c
            
            if (edi_1 != 0)
                eax_3 = eax_3 + 0x7894 + arg1
                *ecx_1 = eax_3
                
                if (edx - 0x1f u> 6)
                    var_1c = "ClickStateAllocHand"
                    var_20 = 0xca
                    ecx = "Halt"
                    break
                
                switch (edx)
                    case 0x1f
                        *eax_3 = "rh oc touch a"
                    case 0x20
                        *eax_3 = "rh oc touch b"
                    case 0x21
                        *eax_3 = "rh oc touch trigger"
                    case 0x22
                        *eax_3 = "rh vive trigger"
                    case 0x23
                        *eax_3 = "rh vive grip"
                    case 0x24
                        *eax_3 = "rh vive trackpad"
                    case 0x25
                        *eax_3 = "rh vive menu"
            else
                void* edi_3 = &arg1[0x1898] + eax_3
                *ecx_1 = edi_3
                
                if (edx - 0x1f u> 6)
                    var_1c = "ClickStateAllocHand"
                    var_20 = 0xbc
                    ecx = "Halt"
                    break
                
                switch (edx)
                    case 0x1f
                        *edi_3 = "lh oc touch a"
                        edi_1 = var_8_1
                    case 0x20
                        *edi_3 = "lh oc touch b"
                        edi_1 = var_8_1
                    case 0x21
                        *edi_3 = "lh oc touch trigger"
                        edi_1 = var_8_1
                    case 0x22
                        *edi_3 = "lh vive trigger"
                        edi_1 = var_8_1
                    case 0x23
                        *edi_3 = "lh vive grip"
                        edi_1 = var_8_1
                    case 0x24
                        *edi_3 = "lh vive trackpad"
                        edi_1 = var_8_1
                    case 0x25
                        *edi_3 = "lh vive menu"
                        edi_1 = var_8_1
            
            esi_1 += 4
            ecx_1 += 0xc
            
            if (esi_1 s>= &data_586ee8)
                return sub_480be0(arg2 + 0x54, 0x586eb4, arg1, 6, arg2 + 0x54) + 7
    else
        var_1c = "ControllerGetClickState"
        var_20 = 0x13c
        ecx = "Halt"
    
    sub_44e4d0(eax_3, &data_5559b1, ecx, "c:\ax2017\engine\controller.cpp", var_20, var_1c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
