// 函数名称: sub_4cf000
// 虚拟地址: 0x4cf000
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

LRESULT __stdcallsub_4cf000(HWND arg1, uint32_t arg2, WPARAM arg3, LPARAM arg4)
{
    // 第一条实际指令: __alloca_probe(0x1048)
    __alloca_probe(0x1048)
    void paint
    int32_t eax_1 = __security_cookie ^ &paint
    
    if (arg2 == 0xf)
        sub_4c9c90(BeginPaint(arg1, &paint))
        EndPaint(arg1, &paint)
    else if (arg2 != 0x4e)
        if (arg2 != 0x111)
            LRESULT result = DefWindowProcA(arg1, arg2, arg3, arg4)
            @__security_check_cookie@4(eax_1 ^ &paint)
            return result
        
        if (arg3 u>> 0x10 == 1 && arg3.w == 0xab)
            HWND hWnd = GetDlgItem(arg1, 0xab)
            LRESULT esi_1 = SendMessageA(hWnd, 0x190, 0, 0)
            
            if (esi_1 s> 0)
                void lParam
                SendMessageA(hWnd, 0x191, 0x400, &lParam)
                
                if (esi_1 s> 0x400)
                    esi_1 = 0x400
                
                sub_4fa170(&lParam, esi_1)
            else if (data_d76c30 == 0)
                data_ce37a4 = 0
                sub_4f4fa0()
            
            sub_4cf940()
            SetFocus(data_ce1790)
            @__security_check_cookie@4(eax_1 ^ &paint)
            return 0
    else if (arg3 == 0xac && *(arg4 + 8) == 0x42a)
        sub_4cda80(*arg4, arg4)
        @__security_check_cookie@4(eax_1 ^ &paint)
        return 0
    
    @__security_check_cookie@4(eax_1 ^ &paint)
    return 0
}
