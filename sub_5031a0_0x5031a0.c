// 函数名称: sub_5031a0
// 虚拟地址: 0x5031a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_5031a0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    
    if (arg1 != 0 && arg1[5] != 0x63)
        return 
    
    LPARAM ecx = arg1[6]
    int32_t eax_1
    eax_1.b = ecx == 0
    arg1[6] = eax_1
    LRESULT eax
    
    if (ecx != 0)
        int32_t edx
        eax = sub_503110(eax_1.b, edx, *(data_e47264 + 0x14), *arg1)
        LRESULT var_8_1 = eax
        
        if (eax != 0xffffffff)
            eax = SendMessageA(*(data_e47264 + 0x18), 0x18b, 0, 0)
            WPARAM wParam_1 = eax - 1
            
            if (eax - 1 s>= 0)
                WPARAM wParam_3
                
                do
                    LPARAM lParam_1 = SendMessageA(*(data_e47264 + 0x18), 0x199, wParam_1, 0)
                    
                    if (lParam_1 == 0xffffffff)
                        lParam_1 = 0
                    
                    eax = *lParam_1
                    
                    if (eax != 0 && __mbsicmp(eax, *arg1) == 0 && *(lParam_1 + 0x14) != 0x63)
                        SendMessageA(*(data_e47264 + 0x14), 0x181, var_8_1 + 1, lParam_1)
                    
                    wParam_3 = wParam_1
                    wParam_1 -= 1
                while (wParam_3 - 1 s>= 0)
    else
        eax = SendMessageA(*(data_e47264 + 0x14), 0x18b, ecx, ecx)
        WPARAM wParam = eax - 1
        
        if (eax - 1 s>= 0)
            WPARAM wParam_2
            
            do
                LRESULT esi_1 = SendMessageA(*(data_e47264 + 0x14), 0x199, wParam, 0)
                
                if (esi_1 != 0xffffffff && esi_1 != 0)
                    LRESULT lParam = __mbsicmp(*esi_1, *arg1)
                    
                    if (lParam == 0 && *(esi_1 + 0x14) != 0x63)
                        SendMessageA(*(data_e47264 + 0x14), 0x182, wParam, lParam)
                
                wParam_2 = wParam
                wParam -= 1
            while (wParam_2 - 1 s>= 0)
}
