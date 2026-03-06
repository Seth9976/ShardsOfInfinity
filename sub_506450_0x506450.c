// 函数名称: sub_506450
// 虚拟地址: 0x506450
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

LRESULT __stdcallsub_506450(HWND arg1, uint32_t arg2, WPARAM arg3, LPARAM arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    HANDLE ecx_1 = GetPropA(GetParent(arg1), "lpInsData")
    data_e47264 = ecx_1
    
    if (arg2 u> 0x100)
        if (arg2 - 0x111 u> 0xf6)
            return CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, arg2, arg3, arg4)
        
        uint32_t eax_20 = zx.d(*(arg2 + 0x5066db))
        
        switch (eax_20)
            case 0
                HANDLE var_1c_3 = ecx_1
                sub_5048b0(eax_20, zx.d(arg3.w), arg1, arg4)
                return 0
            case 1
                HANDLE var_1c_7 = ecx_1
                int32_t eax_38 = sx.d((arg4 u>> 0x10).w)
                sub_503ac0(eax_38, sx.d(arg4.w), arg1, eax_38.w)
                return 0
            case 2
                HANDLE var_1c_4 = ecx_1
                int32_t eax_25 = sx.d(arg4.w)
                sub_503550(eax_25, 0, arg1, eax_25, (arg4 u>> 0x10).w)
                return 0
            case 3
                HANDLE var_1c_6 = ecx_1
                int32_t eax_34 = sx.d((arg4 u>> 0x10).w)
                sub_503870(eax_34, sx.d(arg4.w), arg1, eax_34.w)
                return 0
            case 4
                HANDLE var_1c_5 = ecx_1
                int32_t eax_30 = sx.d(arg4.w)
                sub_503550(eax_30, 1, arg1, eax_30, (arg4 u>> 0x10).w)
                return 0
            case 5
            label_506692:
                *(ecx_1 + 0x38) = 1
                void* eax_40 = data_e47264
                void* edx_6 = *(eax_40 + 4)
                
                if (edx_6 != 0)
                    int32_t ecx_13 = *(edx_6 + 0x14)
                    
                    if (ecx_13 != 3)
                        if (ecx_13 == 8)
                            *(edx_6 + 8) = &data_59cf5c
                        else
                            HWND hWnd = *(eax_40 + 0x1c)
                            
                            if (ecx_13 == 0xc)
                                ShowWindow(hWnd, SW_HIDE)
                                ShowWindow(*(data_e47264 + 0x20), SW_HIDE)
                            else
                                ShowWindow(hWnd, SW_HIDE)
                        
                        eax_40 = data_e47264
                
                *(eax_40 + 0x3c) = 1
                return CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, arg2, arg3, arg4)
            case 6
                return CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, arg2, arg3, arg4)
    else
        if (arg2 == 0x100)
            uint32_t var_1c_2 = arg4 u>> 0x10
            int32_t eax_17 = sx.d(arg4.w)
            sub_5041b0(eax_17, arg3, arg1, ecx_1.w, eax_17.w)
            return 0
        
        if (arg2 - 2 u> 0x9f)
            return CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, arg2, arg3, arg4)
        
        switch (arg2 + &jump_table_506714[6]:2)
            case &lookup_table_506730
                SetWindowLongA(arg1, 0xfffffffc, GetPropA(arg1, "Wprc"))
                RemovePropA(arg1, "Wprc")
                return 0
            case &lookup_table_506730[1], &lookup_table_506730[2], &lookup_table_506730[3], 
                    &lookup_table_506730[4], &lookup_table_506730[7], &lookup_table_506730[8], 
                    &lookup_table_506730[9], &lookup_table_506730[0xa], &lookup_table_506730[0xb], 
                    &lookup_table_506730[0xc], &lookup_table_506730[0xd], &lookup_table_506730[0xe], 
                    &lookup_table_506730[0xf], &lookup_table_506730[0x10], &lookup_table_506730[0x11], 
                    &lookup_table_506730[0x12], &lookup_table_506730[0x13], &lookup_table_506730[0x14], 
                    &lookup_table_506730[0x15], &lookup_table_506730[0x16], &lookup_table_506730[0x17], 
                    &lookup_table_506730[0x18], &lookup_table_506730[0x19], &lookup_table_506730[0x1a], 
                    &lookup_table_506730[0x1b], &lookup_table_506730[0x1c], &lookup_table_506730[0x1d], 
                    &lookup_table_506730[0x1f], &lookup_table_506730[0x20], &lookup_table_506730[0x21], 
                    &lookup_table_506730[0x22], &lookup_table_506730[0x23], &lookup_table_506730[0x24], 
                    &lookup_table_506730[0x25], &lookup_table_506730[0x26], &lookup_table_506730[0x27], 
                    &lookup_table_506730[0x28], &lookup_table_506730[0x29], &lookup_table_506730[0x2a], 
                    &lookup_table_506730[0x2b], &lookup_table_506730[0x2c], &lookup_table_506730[0x2d], 
                    &lookup_table_506730[0x2e], &lookup_table_506730[0x2f], &lookup_table_506730[0x30], 
                    &lookup_table_506730[0x31], &lookup_table_506730[0x32], &lookup_table_506730[0x33], 
                    &lookup_table_506730[0x34], &lookup_table_506730[0x35], &lookup_table_506730[0x36], 
                    &lookup_table_506730[0x37], &lookup_table_506730[0x38], &lookup_table_506730[0x39], 
                    &lookup_table_506730[0x3a], &lookup_table_506730[0x3b], &lookup_table_506730[0x3c], 
                    &lookup_table_506730[0x3d], &lookup_table_506730[0x3e], &lookup_table_506730[0x3f], 
                    &lookup_table_506730[0x40], &lookup_table_506730[0x41], &lookup_table_506730[0x42], 
                    &lookup_table_506730[0x43], &lookup_table_506730[0x44], &lookup_table_506730[0x45], 
                    &lookup_table_506730[0x46], &lookup_table_506730[0x47], &lookup_table_506730[0x48], 
                    &lookup_table_506730[0x49], &lookup_table_506730[0x4a], &lookup_table_506730[0x4b], 
                    &lookup_table_506730[0x4c], &lookup_table_506730[0x4d], &lookup_table_506730[0x4e], 
                    &lookup_table_506730[0x4f], &lookup_table_506730[0x50], &lookup_table_506730[0x51], 
                    &lookup_table_506730[0x52], &lookup_table_506730[0x53], &lookup_table_506730[0x54], 
                    &lookup_table_506730[0x55], &lookup_table_506730[0x56], &lookup_table_506730[0x57], 
                    &lookup_table_506730[0x58], &lookup_table_506730[0x59], &lookup_table_506730[0x5a], 
                    &lookup_table_506730[0x5b], &lookup_table_506730[0x5c], &lookup_table_506730[0x5d], 
                    &lookup_table_506730[0x5e], &lookup_table_506730[0x5f], &lookup_table_506730[0x60], 
                    &lookup_table_506730[0x61], &lookup_table_506730[0x62], &lookup_table_506730[0x63], 
                    &lookup_table_506730[0x64], &lookup_table_506730[0x65], &lookup_table_506730[0x66], 
                    &lookup_table_506730[0x67], &lookup_table_506730[0x68], &lookup_table_506730[0x69], 
                    &lookup_table_506730[0x6a], &lookup_table_506730[0x6b], &lookup_table_506730[0x6c], 
                    &lookup_table_506730[0x6d], &lookup_table_506730[0x6e], &lookup_table_506730[0x6f], 
                    &lookup_table_506730[0x70], &lookup_table_506730[0x71], &lookup_table_506730[0x72], 
                    &lookup_table_506730[0x73], &lookup_table_506730[0x74], &lookup_table_506730[0x75], 
                    &lookup_table_506730[0x76], &lookup_table_506730[0x77], &lookup_table_506730[0x78], 
                    &lookup_table_506730[0x79], &lookup_table_506730[0x7a], &lookup_table_506730[0x7b], 
                    &lookup_table_506730[0x7c], &lookup_table_506730[0x7d], &lookup_table_506730[0x7e], 
                    &lookup_table_506730[0x7f], &lookup_table_506730[0x80], &lookup_table_506730[0x81], 
                    &lookup_table_506730[0x82], &lookup_table_506730[0x83], &lookup_table_506730[0x84], 
                    &lookup_table_506730[0x86], &lookup_table_506730[0x87], &lookup_table_506730[0x88], 
                    &lookup_table_506730[0x89], &lookup_table_506730[0x8a], &lookup_table_506730[0x8b], 
                    &lookup_table_506730[0x8c], &lookup_table_506730[0x8d], &lookup_table_506730[0x8e], 
                    &lookup_table_506730[0x8f], &lookup_table_506730[0x90], &lookup_table_506730[0x91], 
                    &lookup_table_506730[0x92], &lookup_table_506730[0x93], &lookup_table_506730[0x94], 
                    &lookup_table_506730[0x95], &lookup_table_506730[0x96], &lookup_table_506730[0x97], 
                    &lookup_table_506730[0x98], &lookup_table_506730[0x99], &lookup_table_506730[0x9a], 
                    &lookup_table_506730[0x9b], &lookup_table_506730[0x9c], &lookup_table_506730[0x9d], 
                    &lookup_table_506730[0x9e]
                return CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, arg2, arg3, arg4)
            case &lookup_table_506730[5]
                *(ecx_1 + 0x38) = 1
                RedrawWindow(*(data_e47264 + 0x14), nullptr, nullptr, 
                    RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
                return 0
            case &lookup_table_506730[6]
                void* eax_4 = *(ecx_1 + 4)
                
                if (eax_4 != 0 && *(eax_4 + 0x14) == 8)
                    *(eax_4 + 8) = &data_59cf5c
                    ecx_1 = data_e47264
                
                int32_t eax_6
                
                if (arg3 == 0 || (*(ecx_1 + 0x14) != arg3 && *(ecx_1 + 0x1c) != arg3
                        && *(ecx_1 + 0x20) != arg3 && *(ecx_1 + 0x10) != arg3
                        && *(ecx_1 + 0xc) != arg3))
                    eax_6 = 0
                else
                    eax_6 = 1
                
                *(ecx_1 + 0x38) = eax_6
                void* eax_7 = data_e47264
                
                if (*(eax_7 + 0x38) == 0)
                    RedrawWindow(*(eax_7 + 0x14), nullptr, nullptr, 
                        RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
                
                return 0
            case &lookup_table_506730[0x1e]
                if (*(ecx_1 + 0x3c) != 0)
                    sub_503300(arg1)
                    *(data_e47264 + 0x3c) = 0
                
                return CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, arg2, arg3, arg4)
            case &lookup_table_506730[0x85]
                return 4
            case &lookup_table_506730[0x9f]
                goto label_506692
}
