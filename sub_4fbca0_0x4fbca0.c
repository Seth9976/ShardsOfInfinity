// 函数名称: sub_4fbca0
// 虚拟地址: 0x4fbca0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_4fbca0(int32_t arg1 @ edi)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_5467ec
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    float eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    float var_198[0x16]
    float* eax_3 = sub_4fbbc0(&var_198)
    bool cond:0 = data_d77c72 == 0
    int128_t var_c8 = *eax_3
    int128_t var_b8 = *(eax_3 + 0x10)
    int128_t var_a8 = *(eax_3 + 0x20)
    int128_t var_98 = *(eax_3 + 0x30)
    int32_t eax_4 = eax_3[0x14]
    int32_t var_78 = eax_4
    int128_t var_88 = *(eax_3 + 0x40)
    
    if (cond:0)
        uint32_t (* edx_2)[0x4] = data_659ae0
        
        if (edx_2 != 0xffffffff)
            sub_488b00(data_d76c64, edx_2)
            data_659ae0 = 0xffffffff
    else
        if (data_d77c6c != 1)
            sub_44e4d0(eax_4, &data_5559b1, "gUI.s.activeSetCount == 1", 
                "c:\ax2017\engine\editor\uieditor.cpp", 0x174, "UIEditorDraw")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        uint32_t (* eax_5)[0x4] = sub_4fba30(data_d76c6c)
        uint32_t (* edx)[0x4] = data_659ae0
        uint32_t (* esi_1)[0x4] = eax_5
        
        if (esi_1 != edx && edx != 0xffffffff)
            eax_5 = sub_488b00(data_d76c64, edx)
            data_659ae0 = 0xffffffff
        
        sub_489f50(eax_5, esi_1, data_d76c64, sub_4fbc40)
        data_659ae0 = esi_1
    
    data_d76c64
    void* eax_6 = sub_4899c0(0x3f800000, eax_2, arg1)
    int32_t* ecx_6 = data_d76c60
    
    if (ecx_6[1] != 0x1e)
        sub_44e4d0(eax_6, &data_5559b1, "ptr->assetType == ASSET_TYPE_UI", 
            "c:\ax2017\engine\uidef.cpp", 0x10d, "UIDefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* eax_7
    int32_t edx_3
    eax_7, edx_3 = sub_4459f0(ecx_6)
    int32_t* esi_2 = eax_7
    int32_t i = 0
    int32_t* var_2c = esi_2
    float var_100[0x4]
    float var_e0
    int128_t var_70
    int128_t var_48
    
    if (esi_2[1] s> 0)
        int32_t ecx_7 = data_d77c6c
        int32_t eax_8 = 0
        var_70:0xc.d = 0
        
        do
            int32_t* esi_4 = *esi_2 + eax_8
            int32_t eax_9 = 0
            
            if (ecx_7 s> 0)
                edx_3 = *esi_4
                
                do
                    if ((&data_d76c6c)[eax_9] == edx_3)
                        var_e0.o = *sub_4857b0(&var_100, &var_c8, esi_4, &var_100, 0)
                        int32_t* edx_5
                        
                        if (data_d76c6c != *esi_4)
                            edx_5 = &data_571954
                        else
                            edx_5 = &var_48:0xc
                            var_48:0xc.d = 0xff62cbf6
                        
                        edx_3 = sub_47d750(&var_e0, edx_5, 1f)
                        ecx_7 = data_d77c6c
                        break
                    
                    eax_9 += 1
                while (eax_9 s< ecx_7)
            
            esi_2 = var_2c
            i += 1
            eax_8 = var_70:0xc.d + 0x118
            var_70:0xc.d = eax_8
        while (i s< esi_2[1])
    
    int32_t xmm2 = esi_2[3]
    int32_t xmm1 = esi_2[5]
    int32_t var_d4 = xmm2
    var_e0 = -10000f
    int32_t var_d8 = 0x461c4000
    int128_t xmm0_6 = var_e0.o
    var_e0 = -10000f
    int32_t var_dc = xmm1
    int128_t var_38 = xmm0_6
    int32_t var_d8_1 = 0x461c4000
    int32_t var_dc_1 = xmm2
    float var_58[0x4] = var_e0.o
    int32_t var_d8_2 = esi_2[2]
    int32_t var_d4_1 = xmm1
    int128_t xmm0_9 = var_e0.o
    int32_t var_e4_1
    __builtin_memcpy(&var_e4_1, 
        "\x00\x00\x00\x7f\x00\x40\x1c\xc6\x00\x40\x1c\xc6\x00\x40\x1c\x46\x00\x40\x1c\x46", 0x14)
    int32_t var_dc_2 = xmm2
    var_48 = xmm0_9
    var_e0 = esi_2[4]
    int32_t var_d4_2 = xmm1
    var_70 = var_e0.o
    var_e0.o = *sub_4fb7b0(&var_100, edx_3, &var_38, &var_100)
    float var_f0[0x4]
    var_e0.o = *sub_4fb7b0(&var_100, sub_47d680(&var_e0, &var_f0[3]), &var_48, &var_100)
    var_e0.o = *sub_4fb7b0(&var_100, sub_47d680(&var_e0, &var_f0[3]), &var_70, &var_100)
    var_58 = *sub_4fb7b0(&var_100, sub_47d680(&var_e0, &var_f0[3]), &var_58, &var_100)
    int32_t edx_13 = sub_47d680(&var_58, &var_f0[3])
    float xmm1_1 = -1f f/ data_df847c
    var_e0 = -1000f
    int32_t var_d8_3 = 0x457a0000
    int32_t var_d4_3 = 0
    float var_dc_3 = xmm1_1
    var_58 = var_e0.o
    var_58 = *sub_4fb7b0(&var_100, edx_13, &var_58, &var_100)
    int32_t edx_14 = sub_47d680(&var_58, &data_571948)
    float var_dc_4 = -1000f
    float var_d8_4 = 0f
    float var_d4_4 = 4000f
    var_e0 = -1f f/ data_df847c
    var_58 = var_e0.o
    void var_140
    var_58 = *sub_4fb7b0(&var_140, edx_14, &var_58, &var_140)
    int32_t eax_26 = sub_47d680(&var_58, &data_571948)
    void var_110
    
    if (data_d77c72 == 0)
    label_4fc3a4:
        void var_130
        
        if (data_d77c70.b != 0)
            if (data_d77c6c s<= 0)
                sub_44e4d0(eax_26, &data_5559b1, "gUI.s.activeSetCount > 0", 
                    "c:\ax2017\engine\editor\uieditor.cpp", 0x1e4, "UIEditorDraw")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            void* eax_35 = sub_4fbab0(data_d76c6c, nullptr)
            int32_t esi_5 = 1
            var_e0.o = *sub_4857b0(eax_35, &var_c8, eax_35, &var_58, 0)
            
            if (data_d77c6c s> 1)
                while (true)
                    void* eax_37 = sub_4fbab0((&data_d76c6c)[esi_5], nullptr)
                    int128_t* eax_38 = sub_4857b0(eax_37, &var_c8, eax_37, &var_130, 0)
                    float xmm2_3 = var_e0
                    var_48 = *eax_38
                    
                    if (var_d8_4 < xmm2_3 || var_d4_4 < var_dc_4)
                        sub_44e4d0(eax_38, &data_5559b1, "RectIsNormalized(r0)", 
                            "c:\ax2017\engine\rect.cpp", 0xdb, "RectUnion")
                        
                        if (IsDebuggerPresent() != 1)
                            sub_44e680()
                            noreturn
                        
                        breakpoint
                    
                    int32_t xmm4_7 = var_48.d
                    
                    if (xmm4_7 f<= xmm2_3)
                        var_38.d = xmm4_7
                    else
                        var_38.d = xmm2_3
                    
                    int32_t xmm2_4 = var_48:8.d
                    
                    if (var_d8_4 f<= xmm2_4)
                        var_38:8.d = xmm2_4
                    else
                        var_38:8.d = var_d8_4
                    
                    int32_t xmm2_5 = var_48:4.d
                    
                    if (xmm2_5 f<= var_dc_4)
                        var_38:4.d = xmm2_5
                    else
                        var_38:4.d = var_dc_4
                    
                    int32_t xmm1_9 = var_48:0xc.d
                    
                    if (var_d4_4 f<= xmm1_9)
                        int32_t var_2c_4 = xmm1_9
                    else
                        float var_2c_3 = var_d4_4
                    
                    esi_5 += 1
                    var_e0.o = var_38
                    
                    if (esi_5 s>= data_d77c6c)
                        break
                    
                    continue
            
            int32_t i_1 = 0
            float xmm4_8 = var_e0
            float xmm2_7 = var_d8_4 - xmm4_8
            float xmm5_5 = var_dc_4
            __builtin_memcpy(&var_b8, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x"
            "80\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00"
            "00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
                0x40)
            float xmm3_9 = var_d4_4 - xmm5_5
            float var_2c_5 = xmm2_7
            var_48:0xc.d = xmm3_9
            var_70:8.d = 0x41000000
            var_70:0xc.d = 0x41000000
            
            do
                float xmm0_35 = *(&var_b8:4 + (i_1 << 3)) * xmm3_9 + xmm5_5
                var_f0[2] = *(&var_b8 + (i_1 << 3)) * xmm2_7 + xmm4_8
                float var_e4_2 = xmm0_35
                var_100 = *sub_45c380(&var_110, &var_70:8, &var_f0[2], &var_110)
                sub_47d750(&var_100, &data_571944, 2f)
                xmm2_7 = var_2c_5
                i_1 += 1
                xmm3_9 = var_48:0xc.d
                xmm4_8 = var_e0
                xmm5_5 = var_dc_4
            while (i_1 s< 8)
        else if (data_d77c70:1.b != 0)
            float xmm1_13[0x4] = *(esi_2 + 8)
            int32_t i_2 = 0
            __builtin_memcpy(&var_b8, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x"
            "80\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00"
            "00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
                0x40)
            float xmm3_11 = _mm_shuffle_ps(xmm1_13, xmm1_13, 0xaa)
            float xmm4_10 = _mm_shuffle_ps(xmm1_13, xmm1_13, 0xff)
            int128_t xmm3_12 = xmm3_11 f- xmm1_13
            float xmm5_7[0x4] = _mm_shuffle_ps(xmm1_13, xmm1_13, 0x55)
            int128_t xmm4_11 = xmm4_10 f- xmm5_7
            var_58 = xmm1_13
            var_e0.o = xmm3_12
            var_f0 = xmm5_7
            var_70 = xmm4_11
            var_38:8.d = 0x41000000
            int32_t var_2c_6 = 0x41000000
            
            do
                var_48:8.d =
                    (*(&var_b8 + (i_2 << 3)) f* xmm3_12 f+ xmm1_13 f- data_df8480) f* data_df847c
                var_48:0xc.d =
                    (*(&var_b8:4 + (i_2 << 3)) f* xmm4_11 f+ xmm5_7 f- data_df8484) f* data_df847c
                var_100 = *sub_45c380(&var_130, &var_38:8, &var_48:8, &var_130)
                sub_47d750(&var_100, &data_571944, 2f)
                xmm1_13 = var_58
                i_2 += 1
                xmm3_12 = var_e0.o
                xmm4_11 = var_70
                xmm5_7 = var_f0
            while (i_2 s< 8)
    else
        eax_26 = GetKeyState(0x11)
        void var_120
        
        if ((0x8000 & eax_26.w) != 0)
            if (data_d77c72 == 0)
                goto label_4fc3a4
            
            eax_26 = GetKeyState(0x11)
            
            if ((0x8000 & eax_26.w) == 0)
                goto label_4fc3a4
            
            if (data_d77c6c != 1)
                sub_44e4d0(eax_26, &data_5559b1, "gUI.s.activeSetCount == 1", 
                    "c:\ax2017\engine\editor\uieditor.cpp", 0x1ca, "UIEditorDraw")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            void* eax_31 = sub_4fbab0(data_d76c6c, nullptr)
            int128_t* eax_32 = sub_4857b0(eax_31, &var_c8, eax_31, &var_110, 1)
            __builtin_memcpy(&var_b8, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x"
            "80\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00"
            "00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
                0x40)
            int32_t i_3 = 0
            float xmm2_2[0x4] = *eax_32
            float xmm3_5 = _mm_shuffle_ps(xmm2_2, xmm2_2, 0xaa)
            float xmm4_5 = _mm_shuffle_ps(xmm2_2, xmm2_2, 0xff)
            float xmm5_4[0x4] = _mm_shuffle_ps(xmm2_2, xmm2_2, 0x55)
            int128_t xmm3_6 = xmm3_5 f- xmm2_2
            int128_t xmm4_6 = xmm4_5 f- xmm5_4
            var_58 = xmm2_2
            var_e0.o = xmm3_6
            var_f0 = xmm5_4
            var_70 = xmm4_6
            var_38:8.d = 0x41000000
            int32_t var_2c_2 = 0x41000000
            
            do
                var_48:8.d = *(&var_b8 + (i_3 << 3)) f* xmm3_6 f+ xmm2_2
                var_48:0xc.d = *(&var_b8:4 + (i_3 << 3)) f* xmm4_6 f+ xmm5_4
                var_100 = *sub_45c380(&var_120, &var_38:8, &var_48:8, &var_120)
                sub_47d750(&var_100, &data_571944, 2f)
                xmm2_2 = var_58
                i_3 += 1
                xmm3_6 = var_e0.o
                xmm4_6 = var_70
                xmm5_4 = var_f0
            while (i_3 s< 8)
        else
            if (data_d77c6c != 1)
                sub_44e4d0(eax_26, &data_5559b1, "gUI.s.activeSetCount == 1", 
                    "c:\ax2017\engine\editor\uieditor.cpp", 0x1b0, "UIEditorDraw")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            void* eax_27 = sub_4fbab0(data_d76c6c, nullptr)
            int128_t* eax_28 = sub_4857b0(eax_27, &var_c8, eax_27, &var_120, 0)
            __builtin_memcpy(&var_b8, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x"
            "80\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00"
            "00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
                0x40)
            int32_t i_4 = 0
            float xmm2_1[0x4] = *eax_28
            float xmm3_2 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xaa)
            float xmm4_2 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xff)
            float xmm5_2[0x4] = _mm_shuffle_ps(xmm2_1, xmm2_1, 0x55)
            int128_t xmm3_3 = xmm3_2 f- xmm2_1
            float xmm4_3[0x4] = xmm4_2 f- xmm5_2
            var_e0.o = xmm2_1
            var_70 = xmm3_3
            var_100 = xmm5_2
            var_f0 = xmm4_3
            var_38:8.d = 0x41000000
            int32_t var_2c_1 = 0x41000000
            
            do
                var_48:8.d = *(&var_b8 + (i_4 << 3)) f* xmm3_3 f+ xmm2_1
                var_48:0xc.d = *(&var_b8:4 + (i_4 << 3)) f* xmm4_3 f+ xmm5_2
                var_58 = *sub_45c380(&var_110, &var_38:8, &var_48:8, &var_110)
                sub_47d750(&var_58, &data_571944, 2f)
                xmm2_1 = var_e0.o
                i_4 += 1
                xmm3_3 = var_70
                xmm4_3 = var_f0
                xmm5_2 = var_100
            while (i_4 s< 8)
    char* esi_6 = &data_5559b1
    char* eax_44 = *(data_d76c60 + 0x20)
    
    if (eax_44 != 0)
        esi_6 = eax_44
    
    if (data_e49dc4 s> *(*fsbase->ThreadLocalStoragePointer + 4))
        __Init_thread_header(&data_e49dc4)
        
        if (data_e49dc4 == 0xffffffff)
            int32_t var_14_1 = 0
            data_e49dc8 = sub_48d5b0("sys/debugfont.font", 0x12)
            int32_t var_14_2 = 0xffffffff
            __Init_thread_footer(&data_e49dc4)
    
    void* eax_48 = data_65ae00
    int32_t* edx_23 = data_e49dc8
    var_e0 = 0f
    int32_t var_dc_5 = 0
    int32_t var_1ac_7 = 0x3fc00000
    int32_t var_d8_5 = _mm_cvtepi32_ps(zx.o(*(eax_48 + 0x14)))
    int32_t var_d4_5 = _mm_cvtepi32_ps(zx.o(*(eax_48 + 0x18)))
    var_100 = var_e0.o
    int32_t* result = sub_4ae130(&var_100, edx_23, esi_6, &var_100)
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
