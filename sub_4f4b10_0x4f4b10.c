// 函数名称: sub_4f4b10
// 虚拟地址: 0x4f4b10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_4f4b10()
{
    // 第一条实际指令: void* result = data_ce26f8
    void* result = data_ce26f8
    
    if (result u> 3)
        sub_44e4d0(result, &data_5559b1, "Halt", "c:\ax2017\engine\editor\editorcontrols.cpp", 0x507, 
            "EditorControlsUpdate")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    switch (result)
        case nullptr, 3
            return result
        case 1
            return sub_4f2600()
        case 2
            float var_c_1 = 0f
            float var_8_1 = 0f
            POINT point
            
            if ((*(data_cdf450 + 0xc) & 2) == 0 || *(data_65ae04 + 0x18) == 0)
                if (data_ce2700 == 1)
                    data_ce2700 = 0
                    ShowCursor(1)
            else if (data_ce2700 != 0)
                if (GetCursorPos(&point) != 0)
                    int32_t x = point.x
                    int32_t y = point.y
                    int32_t esi_2 = x - data_ce2704
                    int32_t edx_2 = y - data_ce2708
                    data_ce2704 = x
                    data_ce2708 = y
                    var_8_1 = _mm_cvtepi32_ps(zx.o(esi_2)) + 0f
                    var_c_1 = _mm_cvtepi32_ps(zx.o(edx_2)) + 0f
            else if (GetCursorPos(&data_ce2704) != 0)
                data_ce2700 = 1
                ShowCursor(0)
            
            int32_t ecx_1 = data_ce275c
            data_ce271c = data_ce271c + var_8_1
            data_ce2720 = data_ce2720 + var_c_1
            void* eax_4 = sub_4c0f50(ecx_1)
            
            if (eax_4 != 0)
                *(eax_4 + 0x2c) = *(eax_4 + 0x2c) + var_8_1
                *(eax_4 + 0x3c) = *(eax_4 + 0x3c) + var_c_1
            
            result = sub_495430(data_ce2764)
            
            if (result == 0)
                return result
            
            float xmm0_16 = data_ce2768 f+ data_ce2794
            float xmm2 = -1f * 200f
            float xmm3 = -0f * 200f
            data_ce2768 = xmm0_16
            point.y = sub_4145d0(xmm0_16)
            float xmm0_19 = sub_4145b0(data_ce2768)
            point.y = 0
            *(result + 0x40) = _mm_unpacklo_ps(xmm2 * xmm0_19 - xmm3 f* point.y + data_ce276c + 200f, 
                xmm3 * xmm0_19 + xmm2 f* point.y + data_ce2770 + 0.00999999978f)
            *(result + 0x48) = 0
            return 0
}
