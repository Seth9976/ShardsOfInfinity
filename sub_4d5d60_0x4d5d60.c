// 函数名称: sub_4d5d60
// 虚拟地址: 0x4d5d60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4d5d60(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    void var_344
    int32_t var_c = __security_cookie ^ &var_344
    int32_t ebx
    int32_t var_348 = ebx
    int32_t esi
    int32_t var_34c = esi
    int32_t edi
    int32_t var_350 = edi
    int32_t ebx_1 = arg1[5]
    int32_t var_310 = ebx_1
    void* eax_3 = sub_45cd70(ebx_1)
    void* esi_1 = eax_3
    void* var_30c = eax_3
    void* edi_1 = nullptr
    int32_t var_334 = 0
    int32_t var_338 = arg1[6]
    int32_t var_340 = arg1[5]
    void var_2f8
    vorbis_info_init(&var_2f8)
    int32_t var_354_1 = 0x3ecccccd
    int32_t result = vorbis_encode_init_vbr(&var_2f8, arg1[2], *arg1, 0x3ecccccd)
    int32_t* esp_1 = &var_350
    
    if (result == 0)
        void var_308
        vorbis_comment_init(&var_308)
        wchar32 const* const var_358_1 = U"xyzv"
        char const* const var_35c_1 = "ENCODER"
        vorbis_comment_add_tag(&var_308, "ENCODER", U"xyzv")
        void var_2d8
        vorbis_analysis_init(&var_2d8, &var_2f8)
        void var_1e8
        vorbis_block_init(&var_2d8, &var_1e8)
        int32_t var_374_1 = 0
        void var_178
        ogg_stream_init(&var_178, common_time<int64_t>(nullptr))
        void var_248
        void var_228
        void var_208
        vorbis_analysis_headerout(&var_2d8, &var_308, &var_248, &var_228, &var_208)
        ogg_stream_packetin(&var_178, &var_248)
        ogg_stream_packetin(&var_178, &var_228)
        ogg_stream_packetin(&var_178, &var_208)
        int32_t* esp_2
        
        while (true)
            esp_2 = &var_350
            char* var_330
            
            if (ogg_stream_flush(&var_178, &var_330) == 0)
                break
            
            void* var_32c
            sub_51d5b0(esi_1, var_330, var_32c)
            void* esi_2 = esi_1 + var_32c
            char* var_328
            void* var_324
            sub_51d5b0(esi_2, var_328, var_324)
            esi_1 = esi_2 + var_324
            edi_1 = edi_1 + var_32c + var_324
        
        do
            void* eax_47
            char const* const ecx_13
            void* esp_5
            void* esp_46
            
            if (esp_2[4] != 0)
                void* ecx_2 = esp_2[5]
                int32_t eax_11
                int32_t edx_1
                edx_1:eax_11 = sx.q(*(ecx_2 + 4))
                int32_t eax_13 = (eax_11 + (edx_1 & 7)) s>> 3
                int32_t ecx_4 = *(ecx_2 + 8) * eax_13
                esp_2[0xf] = eax_13
                int32_t eax_16 = divs.dp.d(sx.q(esp_2[4]), ecx_4)
                
                if (eax_16 s> 0x400)
                    eax_16 = 0x400
                
                *(esp_2 - 4) = eax_16
                esp_2[0xd] = eax_16
                *(esp_2 - 8) = &esp_2[0x1e]
                esp_2[0xc] = vorbis_analysis_buffer()
                int32_t ebx_2 = 0
                int32_t eax_19 = esp_2[0xd]
                esp_2[0xe] = 0
                
                if (eax_19 s> 0)
                    int32_t ecx_6 = *(esp_2[5] + 8)
                    
                    do
                        int32_t edx_5 = 0
                        
                        if (ecx_6 s> 0)
                            do
                                eax_47 = esp_2[0xf]
                                int32_t eax_24
                                int32_t ecx_7
                                
                                if (eax_47 != 1)
                                    if (eax_47 != 2)
                                        *(esp_2 - 4) = "SoundConvertPcmToOgg"
                                        *(esp_2 - 8) = 0x9a
                                        esp_46 = esp_2 - 8
                                        ecx_13 = "Halt"
                                    label_4d6226:
                                        *(esp_46 - 4) = "c:\ax2017\engine\soundogg.cpp"
                                        sub_44e4d0(eax_47, &data_5559b1, ecx_13)
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_44e680()
                                        noreturn
                                    
                                    char* eax_25 = esp_2[6]
                                    ecx_7 = 0xfffffffe
                                    *(*(esp_2[0xc] + (edx_5 << 2)) + (ebx_2 << 2)) = _mm_cvtepi32_ps(zx
                                        .o(sx.d(zx.w(eax_25[1]) << 8 | zx.w(*eax_25)))) * 3.05175781e-05f
                                    eax_24 = 2
                                else
                                    ecx_7 = 0xffffffff
                                    *(*(esp_2[0xc] + (edx_5 << 2)) + (ebx_2 << 2)) =
                                        _mm_cvtepi32_ps(zx.o(sx.d(*esp_2[6]))) * 0.0078125f
                                    eax_24 = 1
                                
                                esp_2[4] += ecx_7
                                edx_5 += 1
                                void* ecx_9 = esp_2[5]
                                esp_2[6] += eax_24
                                ebx_2 = esp_2[0xe]
                                ecx_6 = *(ecx_9 + 8)
                            while (edx_5 s< ecx_6)
                            
                            esp_2[4] = esp_2[4]
                            eax_19 = esp_2[0xd]
                        
                        ebx_2 += 1
                        esp_2[0xe] = ebx_2
                    while (ebx_2 s< eax_19)
                
                *(esp_2 - 4) = eax_19
                *(esp_2 - 8) = &esp_2[0x1e]
                vorbis_analysis_wrote()
                esp_5 = esp_2
                ebx_1 = *(esp_5 + 0x48)
            else
                *(esp_2 - 4) = 0
                *(esp_2 - 8) = &esp_2[0x1e]
                vorbis_analysis_wrote()
                esp_5 = esp_2
            
            *(esp_5 + 4) = esp_5 + 0x170
            *esp_5 = esp_5 + 0x80
            esp_2 = esp_5 + 8
            
            if (vorbis_analysis_blockout() == 1)
                int32_t i
                
                do
                    *(esp_2 - 4) = 0
                    *(esp_2 - 8) = &esp_2[0x5a]
                    vorbis_analysis()
                    *(esp_2 - 0xc) = &esp_2[0x5a]
                    vorbis_bitrate_addblock()
                    *(esp_2 - 0x10) = &esp_2[0x3a]
                    *(esp_2 - 0x14) = &esp_2[0x1e]
                    void* esp_19 = esp_2
                    
                    if (vorbis_bitrate_flushpacket() != 0)
                        while (true)
                            *(esp_19 - 4) = esp_19 + 0xe8
                            *(esp_19 - 8) = esp_19 + 0x1d8
                            ogg_stream_packetin()
                            
                            if (*(esp_19 + 0x1c) == 0)
                                while (true)
                                    *(esp_19 - 4) = esp_19 + 0x20
                                    *(esp_19 - 8) = esp_19 + 0x1d8
                                    
                                    if (ogg_stream_pageout() == 0)
                                        goto label_4d6148
                                    
                                    int32_t ecx_10 = *(esp_19 + 0x24)
                                    eax_47 = *(esp_19 + 0x2c) + ecx_10 + edi_1
                                    
                                    if (eax_47 s>= ebx_1)
                                        *(esp_19 - 4) = "SoundConvertPcmToOgg"
                                        *(esp_19 - 8) = 0xb7
                                        esp_46 = esp_19 - 8
                                        ecx_13 =
                                            "usedBufferSize + og.header_len + og.body_len < bufferSize"
                                        break
                                    
                                    *(esp_19 - 4) = ecx_10
                                    *(esp_19 - 8) = *(esp_19 + 0x20)
                                    *(esp_19 - 0xc) = esi_1
                                    sub_51d5b0()
                                    *(esp_19 - 0x10) = *(esp_19 + 0x2c)
                                    void* esi_3 = esi_1 + *(esp_19 + 0x24)
                                    *(esp_19 - 0x14) = *(esp_19 + 0x28)
                                    void* edi_3 = edi_1 + *(esp_19 + 0x24)
                                    *(esp_19 - 0x18) = esi_3
                                    sub_51d5b0()
                                    esi_1 = esi_3 + *(esp_19 + 0x2c)
                                    edi_1 = edi_3 + *(esp_19 + 0x2c)
                                    *(esp_19 - 0x1c) = esp_19 + 0x20
                                    
                                    if (ogg_page_eos() != 0)
                                        *(esp_19 + 0x1c) = 1
                                        goto label_4d6148
                                
                                break
                            
                        label_4d6148:
                            *(esp_19 - 4) = esp_19 + 0xe8
                            *(esp_19 - 8) = esp_19 + 0x78
                            esp_19 = esp_19
                            
                            if (vorbis_bitrate_flushpacket() == 0)
                                goto label_4d6166
                        
                        goto label_4d6226
                    
                label_4d6166:
                    *(esp_19 - 4) = esp_19 + 0x168
                    *(esp_19 - 8) = esp_19 + 0x78
                    i = vorbis_analysis_blockout()
                    esp_2 = esp_19
                while (i == 1)
        while (esp_2[7] == 0)
        
        *(esp_2 - 4) = &esp_2[0x76]
        ogg_stream_clear()
        *(esp_2 - 8) = &esp_2[0x5a]
        vorbis_block_clear()
        *(esp_2 - 0xc) = &esp_2[0x1e]
        vorbis_dsp_clear()
        *(esp_2 - 0x10) = &esp_2[0x12]
        vorbis_comment_clear()
        *(esp_2 - 0x14) = &esp_2[0x16]
        vorbis_info_clear()
        void* ebx_3 = esp_2[5]
        esp_1 = esp_2
        int32_t eax_60 = *(ebx_3 + 0x18)
        
        if (eax_60 != 0)
            *(esp_1 - 4) = eax_60
            _aligned_free_base()
        
        result = esp_1[0x11]
        *(ebx_3 + 0x18) = result
        *(ebx_3 + 0x14) = edi_1
        *(ebx_3 + 0x10) = 2
    
    *esp_1
    esp_1[1]
    esp_1[2]
    @__security_check_cookie@4(esp_1[0xd1] ^ &esp_1[3])
    return result
}
