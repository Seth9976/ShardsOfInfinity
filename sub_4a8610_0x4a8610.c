// 函数名称: sub_4a8610
// 虚拟地址: 0x4a8610
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4a8610(int32_t* arg1)
{
    // 第一条实际指令: void* esi = data_ce189c
    void* esi = data_ce189c
    void* eax
    
    if (esi != 0)
        eax = *arg1
        void* eax_2
        
        if (eax == 1)
            eax = arg1[1]
            void* edx_1 = data_cdf428
            
            if (eax == 0x50 && (arg1[2].b & 0xa) != 0 && *(edx_1 + 0x20) != 0)
                void* eax_1 = sub_452df0()
                int32_t edx_2 = *(eax_1 + 0x1c)
                int32_t edx_3 = edx_2 | 0x80
                uint8_t ebx_2 = (edx_2 u>> 7).b & 1
                
                if (ebx_2 != 0)
                    edx_3 = edx_2 & 0xffffff7f
                
                *(eax_1 + 0x1c) = edx_3
                eax_2 = data_ce189c
                bool cond:0_1 = *(eax_2 + 0x5e2068c) != 0
                *(eax_2 + 0x5e20694) = ebx_2 ^ 1
                
                if (cond:0_1)
                    eax_2.b = 1
                    return eax_2
                
                *(eax_2 + 0x5e2068e) = 1
                eax_2.b = 1
                return eax_2
            
            if (*(esi + 0x5e20694) != 0 && *(edx_1 + 0x20) != 0)
                switch (eax)
                    case 0x1b
                        *(esi + 0x5e206b0) = 0
                        eax.b = 1
                        *(esi + 0x5e2069c) = 0
                        *(esi + 0x5e206a8) = 0
                        return eax
                    case 0x24
                        eax_2 = *(esi + 0x5e2069c)
                        
                        if (eax_2 s< 0)
                            eax_2.b = 1
                            return eax_2
                        
                        *(esi + 0x5e206b4) = *(esi + (eax_2 << 2) + 0x5e1c804)
                        int32_t eax_11
                        eax_11.b = 1
                        *(esi + 0x5e206b0) = 2
                        *(esi + 0x5e2069c) = 0
                        *(esi + 0x5e206a8) = 0
                        return eax_11
                    case 0x25
                        int32_t edi = *(esi + 0x5e206b4)
                        int32_t i = 0
                        
                        if (*(esi + 0x5e20684) s> 0)
                            void* ecx_3 = esi + 0x5e0129c
                            
                            do
                                *ecx_3 = 0
                                ecx_3 += 0x1c
                                i += 1
                            while (i s< *(esi + 0x5e20684))
                        
                        *(esi + 0x5e206b0) = 2
                        *(esi + 0x5e206b4) = edi
                        sub_4a7230(0)
                        void* edx_6 = data_ce189c
                        int32_t eax_10 = 0
                        int32_t esi_1 = *(edx_6 + 0x5e20684)
                        
                        if (esi_1 s> 0)
                            void* ecx_4 = edx_6 + 0x5e0129c
                            
                            do
                                if (*ecx_4 != 0 && eax_10 != edi)
                                    *(edx_6 + 0x5e206b4) = eax_10
                                    eax_10.b = 1
                                    *(edx_6 + 0x5e206b0) = 1
                                    return eax_10
                                
                                eax_10 += 1
                                ecx_4 += 0x1c
                            while (eax_10 s< esi_1)
                        
                        *(edx_6 + 0x5e206b0) = 0
                        eax_10.b = 1
                        return eax_10
                    case 0x26
                        eax_2 = *(esi + 0x5e2069c)
                        
                        if (eax_2 s>= 0)
                            *(esi + 0x5e2069c) = eax_2 - 1
                            
                            if (eax_2 - 1 s>= 0 && eax_2 - 1 s< *(esi + 0x5e206a8))
                                *(esi + 0x5e206a8) = eax_2 - 1
                                eax_2.b = 1
                                return eax_2
                        
                        eax_2.b = 1
                        return eax_2
                    case 0x27
                        eax_2 = *(esi + 0x5e2069c)
                        
                        if (eax_2 s< 0)
                            eax_2.b = 1
                            return eax_2
                        
                        *(esi + 0x5e206b4) = *(esi + (eax_2 << 2) + 0x5e1c804)
                        int32_t eax_12
                        eax_12.b = 1
                        *(esi + 0x5e206b0) = 1
                        *(esi + 0x5e2069c) = 0
                        *(esi + 0x5e206a8) = 0
                        return eax_12
                    case 0x28
                        int32_t ecx_2 = *(esi + 0x5e2069c)
                        
                        if (ecx_2 s< *(esi + 0x5e206ac) - 1)
                            *(esi + 0x5e2069c) = ecx_2 + 1
                            eax_2 = ecx_2 + 1 - *(esi + 0x5e206a4) + 1
                            
                            if (eax_2 s> *(esi + 0x5e206a8))
                                *(esi + 0x5e206a8) = eax_2
                                eax_2.b = 1
                                return eax_2
                        
                        eax_2.b = 1
                        return eax_2
                    case 0x43
                        *(esi + 0x5e2068e) = 1
                        eax.b = 1
                        return eax
                    case 0x48
                        eax.b = *(esi + 0x5e2068d) == 0
                        *(esi + 0x5e2068d) = eax.b
                        eax.b = 1
                        return eax
                    case 0x53
                        int32_t eax_6
                        eax_6.b = 1
                        *(esi + 0x5e20690) = mods.dp.d(sx.q(*(esi + 0x5e20690) + 1), 5)
                        return eax_6
        else if (eax == 0 && *(esi + 0x5e20694) != eax.b && *(data_cdf428 + 0x20) != 0)
            eax = arg1[1]
            
            if (eax == 0x5b)
                eax_2 = *(esi + 0x5e20698)
                
                if (eax_2 s<= 0)
                    eax_2.b = 1
                    return eax_2
                
                *(esi + 0x5e20698) = eax_2 - 1
                void* eax_13
                eax_13.b = 1
                return eax_13
            
            if (eax == 0x5d)
                eax_2 = *(esi + 0x5e20698)
                
                if (eax_2 s< 0x28)
                    *(esi + 0x5e20698) = eax_2 + 1
                
                eax_2.b = 1
                return eax_2
    
    eax.b = 0
    return eax
}
