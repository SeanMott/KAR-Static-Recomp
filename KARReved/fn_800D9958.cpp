//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80062CA4.hpp"
#include "fn_8024AC68.hpp"
#include "fn_800D95DC.hpp"
#include "fn_800A98F4.hpp"
#include "fn_80071810.hpp"
#include "fn_800A98F8.hpp"
#include "fn_8007133C.hpp"
#include "fn_800D95DC.hpp"



void fn_800D9958(PPC::Runtime::GCContext* context)
{
/*800D9958 000D6758*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xd0, context->r1));
/*800D995C 000D675C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D9960 000D6760*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r1));
/*800D9964 000D6764*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*800D9968 000D6768*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1)0, context->qr0);
/*800D996C 000D676C*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r1));
/*800D9970 000D6770*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1)0, context->qr0);
/*800D9974 000D6774*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*800D9978 000D6778*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1)0, context->qr0);
/*800D997C 000D677C*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*800D9980 000D6780*/ PPC::Runtime::ASM::psq_st(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*800D9984 000D6784*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x90);
/*800D9988 000D6788*/ PPC::Runtime::ASM::bl(_savegpr_17);
/*800D998C 000D678C*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*800D9990 000D6790*/ PPC::Runtime::ASM::mr(context->r17, context->r5);
/*800D9994 000D6794*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*800D9998 000D6798*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*800D999C 000D679C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D99A0 000D67A0*/ PPC::Runtime::ASM::mr(context->r28, context->r6);
/*800D99A4 000D67A4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800D99A8 000D67A8*/ PPC::Runtime::ASM::mr(context->r29, context->r7);
/*800D99AC 000D67AC*/ PPC::Runtime::ASM::lwz(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x700, context->r3));
/*800D99B0 000D67B0*/ PPC::Runtime::ASM::mr(context->r30, context->r8);
/*800D99B4 000D67B4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800D99B8 000D67B8*/ PPC::Runtime::ASM::lwz(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x704, context->r3));
/*800D99BC 000D67BC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*800D99C0 000D67C0*/ PPC::Runtime::ASM::li(context->r31, -0x1);
/*800D99C4 000D67C4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800D99C8 000D67C8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*800D99CC 000D67CC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800D99D0 000D67D0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800D99D4 000D67D4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800D99D8 000D67D8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*800D99DC 000D67DC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*800D99E0 000D67E0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800D99E4 000D67E4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800D99E8 000D67E8*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*800D99EC 000D67EC*/ PPC::Runtime::ASM::fmr(context->f28, context->f1);
/*800D99F0 000D67F0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*800D99F4 000D67F4*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800D99F8 000D67F8*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*800D99FC 000D67FC*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800D9A00 000D6800*/ PPC::Runtime::ASM::mr(context->r4, context->r17);
/*800D9A04 000D6804*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x2c);
/*800D9A08 000D6808*/ PPC::Runtime::ASM::bl(fn_8024AC68);
/*800D9A0C 000D680C*/ PPC::Runtime::ASM::lfs(context->f30, STRUCT_FLOAT_COUNT_1805DF628 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D9A10 000D6810*/ PPC::Runtime::ASM::li(context->r20, 0x0);
/*800D9A14 000D6814*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805DF680 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D9A18 000D6818*/ PPC::Runtime::ASM::li(context->r21, 0x0);
/*800D9A1C 000D681C*/ PPC::Runtime::ASM::b(.L_800D9B94);
RUNTIME_PPC_JUMP_LABEL(.L_800D9A20, 0x800D9A20) //this is a jump label
/*800D9A20 000D6820*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r26));
/*800D9A24 000D6824*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800D9A28 000D6828*/ PPC::Runtime::ASM::lwzx(context->r18, context->r3, context->r21);
/*800D9A2C 000D682C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r18));
/*800D9A30 000D6830*/ PPC::Runtime::ASM::fsubs(context->f2, context->f1, context->f0);
/*800D9A34 000D6834*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f30);
/*800D9A38 000D6838*/ PPC::Runtime::ASM::bge(.L_800D9A40);
/*800D9A3C 000D683C*/ PPC::Runtime::ASM::fneg(context->f2, context->f2);
RUNTIME_PPC_JUMP_LABEL(.L_800D9A40, 0x800D9A40) //this is a jump label
/*800D9A40 000D6840*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r18));
/*800D9A44 000D6844*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*800D9A48 000D6848*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*800D9A4C 000D684C*/ PPC::Runtime::ASM::fadds(context->f0, context->f31, context->f0);
/*800D9A50 000D6850*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*800D9A54 000D6854*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*800D9A58 000D6858*/ PPC::Runtime::ASM::bne(.L_800D9ADC);
/*800D9A5C 000D685C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r18));
/*800D9A60 000D6860*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800D9A64 000D6864*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF628 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D9A68 000D6868*/ PPC::Runtime::ASM::fsubs(context->f3, context->f2, context->f1);
/*800D9A6C 000D686C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*800D9A70 000D6870*/ PPC::Runtime::ASM::bge(.L_800D9A78);
/*800D9A74 000D6874*/ PPC::Runtime::ASM::fneg(context->f3, context->f3);
RUNTIME_PPC_JUMP_LABEL(.L_800D9A78, 0x800D9A78) //this is a jump label
/*800D9A78 000D6878*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r18));
/*800D9A7C 000D687C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*800D9A80 000D6880*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF680 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D9A84 000D6884*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*800D9A88 000D6888*/ PPC::Runtime::ASM::fadds(context->f0, context->f2, context->f0);
/*800D9A8C 000D688C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*800D9A90 000D6890*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*800D9A94 000D6894*/ PPC::Runtime::ASM::bne(.L_800D9ADC);
/*800D9A98 000D6898*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r18));
/*800D9A9C 000D689C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800D9AA0 000D68A0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF628 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D9AA4 000D68A4*/ PPC::Runtime::ASM::fsubs(context->f3, context->f2, context->f1);
/*800D9AA8 000D68A8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*800D9AAC 000D68AC*/ PPC::Runtime::ASM::bge(.L_800D9AB4);
/*800D9AB0 000D68B0*/ PPC::Runtime::ASM::fneg(context->f3, context->f3);
RUNTIME_PPC_JUMP_LABEL(.L_800D9AB4, 0x800D9AB4) //this is a jump label
/*800D9AB4 000D68B4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r18));
/*800D9AB8 000D68B8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*800D9ABC 000D68BC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF680 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D9AC0 000D68C0*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*800D9AC4 000D68C4*/ PPC::Runtime::ASM::fadds(context->f0, context->f2, context->f0);
/*800D9AC8 000D68C8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*800D9ACC 000D68CC*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*800D9AD0 000D68D0*/ PPC::Runtime::ASM::bne(.L_800D9ADC);
/*800D9AD4 000D68D4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800D9AD8 000D68D8*/ PPC::Runtime::ASM::b(.L_800D9AE0);
RUNTIME_PPC_JUMP_LABEL(.L_800D9ADC, 0x800D9ADC) //this is a jump label
/*800D9ADC 000D68DC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800D9AE0, 0x800D9AE0) //this is a jump label
/*800D9AE0 000D68E0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800D9AE4 000D68E4*/ PPC::Runtime::ASM::beq(.L_800D9B8C);
/*800D9AE8 000D68E8*/ PPC::Runtime::ASM::addi(context->r24, context->r1, 0x14);
/*800D9AEC 000D68EC*/ PPC::Runtime::ASM::li(context->r19, 0x0);
/*800D9AF0 000D68F0*/ PPC::Runtime::ASM::li(context->r25, 0x0);
/*800D9AF4 000D68F4*/ PPC::Runtime::ASM::b(.L_800D9B80);
RUNTIME_PPC_JUMP_LABEL(.L_800D9AF8, 0x800D9AF8) //this is a jump label
/*800D9AF8 000D68F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r18));
/*800D9AFC 000D68FC*/ PPC::Runtime::ASM::fmr(context->f1, context->f28);
/*800D9B00 000D6900*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*800D9B04 000D6904*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800D9B08 000D6908*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r25);
/*800D9B0C 000D690C*/ PPC::Runtime::ASM::mr(context->r6, context->r26);
/*800D9B10 000D6910*/ PPC::Runtime::ASM::subf(context->r0, context->r4, context->r0);
/*800D9B14 000D6914*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 6);
/*800D9B18 000D6918*/ PPC::Runtime::ASM::stw(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800D9B1C 000D691C*/ PPC::Runtime::ASM::addze(context->r17, context->r0);
/*800D9B20 000D6920*/ PPC::Runtime::ASM::mr(context->r8, context->r28);
/*800D9B24 000D6924*/ PPC::Runtime::ASM::mr(context->r7, context->r17);
/*800D9B28 000D6928*/ PPC::Runtime::ASM::mr(context->r9, context->r29);
/*800D9B2C 000D692C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*800D9B30 000D6930*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x2c);
/*800D9B34 000D6934*/ PPC::Runtime::ASM::addi(context->r10, context->r1, 0x10);
/*800D9B38 000D6938*/ PPC::Runtime::ASM::bl(fn_800D95DC);
/*800D9B3C 000D693C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800D9B40 000D6940*/ PPC::Runtime::ASM::beq(.L_800D9B78);
/*800D9B44 000D6944*/ PPC::Runtime::ASM::cmpwi(context->r31, -0x1);
/*800D9B48 000D6948*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800D9B4C 000D694C*/ PPC::Runtime::ASM::beq(.L_800D9B58);
/*800D9B50 000D6950*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f29);
/*800D9B54 000D6954*/ PPC::Runtime::ASM::bge(.L_800D9B78);
RUNTIME_PPC_JUMP_LABEL(.L_800D9B58, 0x800D9B58) //this is a jump label
/*800D9B58 000D6958*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D9B5C 000D695C*/ PPC::Runtime::ASM::fmr(context->f29, context->f0);
/*800D9B60 000D6960*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800D9B64 000D6964*/ PPC::Runtime::ASM::mr(context->r31, context->r17);
/*800D9B68 000D6968*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800D9B6C 000D696C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800D9B70 000D6970*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800D9B74 000D6974*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_800D9B78, 0x800D9B78) //this is a jump label
/*800D9B78 000D6978*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x40);
/*800D9B7C 000D697C*/ PPC::Runtime::ASM::addi(context->r19, context->r19, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800D9B80, 0x800D9B80) //this is a jump label
/*800D9B80 000D6980*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r18));
/*800D9B84 000D6984*/ PPC::Runtime::ASM::cmpw(context->r19, context->r0);
/*800D9B88 000D6988*/ PPC::Runtime::ASM::blt(.L_800D9AF8);
RUNTIME_PPC_JUMP_LABEL(.L_800D9B8C, 0x800D9B8C) //this is a jump label
/*800D9B8C 000D698C*/ PPC::Runtime::ASM::addi(context->r21, context->r21, 0x4);
/*800D9B90 000D6990*/ PPC::Runtime::ASM::addi(context->r20, context->r20, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800D9B94, 0x800D9B94) //this is a jump label
/*800D9B94 000D6994*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r26));
/*800D9B98 000D6998*/ PPC::Runtime::ASM::cmpw(context->r20, context->r0);
/*800D9B9C 000D699C*/ PPC::Runtime::ASM::blt(.L_800D9A20);
/*800D9BA0 000D69A0*/ PPC::Runtime::ASM::bl(fn_800A98F4);
/*800D9BA4 000D69A4*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*800D9BA8 000D69A8*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*800D9BAC 000D69AC*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x2c);
/*800D9BB0 000D69B0*/ PPC::Runtime::ASM::bl(fn_80071810);
/*800D9BB4 000D69B4*/ PPC::Runtime::ASM::bl(fn_800A98F8);
/*800D9BB8 000D69B8*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*800D9BBC 000D69BC*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*800D9BC0 000D69C0*/ PPC::Runtime::ASM::bl(fn_8007133C);
/*800D9BC4 000D69C4*/ PPC::Runtime::ASM::addi(context->r24, context->r1, 0x14);
/*800D9BC8 000D69C8*/ PPC::Runtime::ASM::b(.L_800D9C34);
RUNTIME_PPC_JUMP_LABEL(.L_800D9BCC, 0x800D9BCC) //this is a jump label
/*800D9BCC 000D69CC*/ PPC::Runtime::ASM::fmr(context->f1, context->f28);
/*800D9BD0 000D69D0*/ PPC::Runtime::ASM::stw(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800D9BD4 000D69D4*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800D9BD8 000D69D8*/ PPC::Runtime::ASM::mr(context->r6, context->r26);
/*800D9BDC 000D69DC*/ PPC::Runtime::ASM::mr(context->r7, context->r25);
/*800D9BE0 000D69E0*/ PPC::Runtime::ASM::mr(context->r8, context->r28);
/*800D9BE4 000D69E4*/ PPC::Runtime::ASM::mr(context->r9, context->r29);
/*800D9BE8 000D69E8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*800D9BEC 000D69EC*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x2c);
/*800D9BF0 000D69F0*/ PPC::Runtime::ASM::addi(context->r10, context->r1, 0x10);
/*800D9BF4 000D69F4*/ PPC::Runtime::ASM::bl(fn_800D95DC);
/*800D9BF8 000D69F8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800D9BFC 000D69FC*/ PPC::Runtime::ASM::beq(.L_800D9C34);
/*800D9C00 000D6A00*/ PPC::Runtime::ASM::cmpwi(context->r31, -0x1);
/*800D9C04 000D6A04*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800D9C08 000D6A08*/ PPC::Runtime::ASM::beq(.L_800D9C14);
/*800D9C0C 000D6A0C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f29);
/*800D9C10 000D6A10*/ PPC::Runtime::ASM::bge(.L_800D9C34);
RUNTIME_PPC_JUMP_LABEL(.L_800D9C14, 0x800D9C14) //this is a jump label
/*800D9C14 000D6A14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D9C18 000D6A18*/ PPC::Runtime::ASM::fmr(context->f29, context->f0);
/*800D9C1C 000D6A1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800D9C20 000D6A20*/ PPC::Runtime::ASM::mr(context->r31, context->r25);
/*800D9C24 000D6A24*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800D9C28 000D6A28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800D9C2C 000D6A2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800D9C30 000D6A30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_800D9C34, 0x800D9C34) //this is a jump label
/*800D9C34 000D6A34*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x194, context->r22));
/*800D9C38 000D6A38*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800D9C3C 000D6A3C*/ PPC::Runtime::ASM::bne(.L_800D9C48);
/*800D9C40 000D6A40*/ PPC::Runtime::ASM::li(context->r25, -0x1);
/*800D9C44 000D6A44*/ PPC::Runtime::ASM::b(.L_800D9DF0);
RUNTIME_PPC_JUMP_LABEL(.L_800D9C48, 0x800D9C48) //this is a jump label
/*800D9C48 000D6A48*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x196, context->r22));
/*800D9C4C 000D6A4C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r23));
/*800D9C50 000D6A50*/ PPC::Runtime::ASM::slwi(context->r3, context->r3, 1);
/*800D9C54 000D6A54*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r23));
/*800D9C58 000D6A58*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/* 800D9C5C 000D6A5C  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*800D9C60 000D6A60*/ PPC::Runtime::ASM::lhzx(context->r3, context->r22, context->r3);
/*800D9C64 000D6A64*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 2);
/*800D9C68 000D6A68*/ PPC::Runtime::ASM::lwzx(context->r3, context->r4, context->r0);
/*800D9C6C 000D6A6C*/ PPC::Runtime::ASM::beq(.L_800D9C78);
/*800D9C70 000D6A70*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r3));
/*800D9C74 000D6A74*/ PPC::Runtime::ASM::b(.L_800D9C7C);
RUNTIME_PPC_JUMP_LABEL(.L_800D9C78, 0x800D9C78) //this is a jump label
/*800D9C78 000D6A78*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_800D9C7C, 0x800D9C7C) //this is a jump label
/*800D9C7C 000D6A7C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800D9C80 000D6A80*/ PPC::Runtime::ASM::bne(.L_800D9C94);
/*800D9C84 000D6A84*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x196, context->r22));
/*800D9C88 000D6A88*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*800D9C8C 000D6A8C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x196, context->r22));
/*800D9C90 000D6A90*/ PPC::Runtime::ASM::b(.L_800D9CB4);
RUNTIME_PPC_JUMP_LABEL(.L_800D9C94, 0x800D9C94) //this is a jump label
/*800D9C94 000D6A94*/ PPC::Runtime::ASM::lhz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x198, context->r22));
/*800D9C98 000D6A98*/ PPC::Runtime::ASM::cmpw(context->r25, context->r0);
/*800D9C9C 000D6A9C*/ PPC::Runtime::ASM::blt(.L_800D9CCC);
/*800D9CA0 000D6AA0*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x196, context->r22));
/*800D9CA4 000D6AA4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800D9CA8 000D6AA8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*800D9CAC 000D6AAC*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x196, context->r22));
/*800D9CB0 000D6AB0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x198, context->r22));
RUNTIME_PPC_JUMP_LABEL(.L_800D9CB4, 0x800D9CB4) //this is a jump label
/*800D9CB4 000D6AB4*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x196, context->r22));
/*800D9CB8 000D6AB8*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x194, context->r22));
/*800D9CBC 000D6ABC*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*800D9CC0 000D6AC0*/ PPC::Runtime::ASM::blt(.L_800D9C48);
/*800D9CC4 000D6AC4*/ PPC::Runtime::ASM::li(context->r25, -0x1);
/*800D9CC8 000D6AC8*/ PPC::Runtime::ASM::b(.L_800D9DF0);
RUNTIME_PPC_JUMP_LABEL(.L_800D9CCC, 0x800D9CCC) //this is a jump label
/*800D9CCC 000D6ACC*/ PPC::Runtime::ASM::addi(context->r0, context->r25, 0x1);
/*800D9CD0 000D6AD0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x198, context->r22));
/*800D9CD4 000D6AD4*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x196, context->r22));
/*800D9CD8 000D6AD8*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r23));
/*800D9CDC 000D6ADC*/ PPC::Runtime::ASM::slwi(context->r3, context->r0, 1);
/*800D9CE0 000D6AE0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r23));
/*800D9CE4 000D6AE4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/* 800D9CE8 000D6AE8  54 A0 07 FF */ clrlwi. context->r0 , context->r5 , 31
/*800D9CEC 000D6AEC*/ PPC::Runtime::ASM::lhzx(context->r3, context->r22, context->r3);
/*800D9CF0 000D6AF0*/ PPC::Runtime::ASM::slwi(context->r21, context->r3, 2);
/*800D9CF4 000D6AF4*/ PPC::Runtime::ASM::lwzx(context->r3, context->r4, context->r21);
/*800D9CF8 000D6AF8*/ PPC::Runtime::ASM::beq(.L_800D9D38);
/*800D9CFC 000D6AFC*/ PPC::Runtime::ASM::bne(.L_800D9D18);
/*800D9D00 000D6B00*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_928 @ Get_MemoryOffset_HighBit);
/*800D9D04 000D6B04*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_929 @ Get_MemoryOffset_HighBit);
/*800D9D08 000D6B08*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_928 @ Get_MemoryOffset_LowBit);
/*800D9D0C 000D6B0C*/ PPC::Runtime::ASM::li(context->r4, 0xf9);
/*800D9D10 000D6B10*/ PPC::Runtime::ASM::addi(context->r5, context->r5, MemoryOffset_929 @ Get_MemoryOffset_LowBit);
/*800D9D14 000D6B14*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800D9D18, 0x800D9D18) //this is a jump label
/*800D9D18 000D6B18*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r23));
/*800D9D1C 000D6B1C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r23));
/*800D9D20 000D6B20*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r21);
/*800D9D24 000D6B24*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*800D9D28 000D6B28*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r25);
/*800D9D2C 000D6B2C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 1);
/*800D9D30 000D6B30*/ PPC::Runtime::ASM::lhzx(context->r25, context->r4, context->r0);
/*800D9D34 000D6B34*/ PPC::Runtime::ASM::b(.L_800D9DB0);
RUNTIME_PPC_JUMP_LABEL(.L_800D9D38, 0x800D9D38) //this is a jump label
/*800D9D38 000D6B38*/ PPC::Runtime::ASM::cmpwi(context->r25, 0x0);
/*800D9D3C 000D6B3C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*800D9D40 000D6B40*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800D9D44 000D6B44*/ PPC::Runtime::ASM::ble(.L_800D9DAC);
/*800D9D48 000D6B48*/ PPC::Runtime::ASM::cmpwi(context->r25, 0x8);
/*800D9D4C 000D6B4C*/ PPC::Runtime::ASM::subi(context->r4, context->r25, 0x8);
/*800D9D50 000D6B50*/ PPC::Runtime::ASM::ble(.L_800D9D90);
/*800D9D54 000D6B54*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x7);
/*800D9D58 000D6B58*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 3);
/*800D9D5C 000D6B5C*/ PPC::Runtime::ASM::mtctr(context->r0);
/*800D9D60 000D6B60*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*800D9D64 000D6B64*/ PPC::Runtime::ASM::ble(.L_800D9D90);
RUNTIME_PPC_JUMP_LABEL(.L_800D9D68, 0x800D9D68) //this is a jump label
/*800D9D68 000D6B68*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*800D9D6C 000D6B6C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x8);
/*800D9D70 000D6B70*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800D9D74 000D6B74*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800D9D78 000D6B78*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800D9D7C 000D6B7C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800D9D80 000D6B80*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800D9D84 000D6B84*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800D9D88 000D6B88*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800D9D8C 000D6B8C*/ PPC::Runtime::ASM::bdnz(.L_800D9D68);
RUNTIME_PPC_JUMP_LABEL(.L_800D9D90, 0x800D9D90) //this is a jump label
/*800D9D90 000D6B90*/ PPC::Runtime::ASM::subf(context->r0, context->r3, context->r25);
/*800D9D94 000D6B94*/ PPC::Runtime::ASM::mtctr(context->r0);
/*800D9D98 000D6B98*/ PPC::Runtime::ASM::cmpw(context->r3, context->r25);
/*800D9D9C 000D6B9C*/ PPC::Runtime::ASM::bge(.L_800D9DAC);
RUNTIME_PPC_JUMP_LABEL(.L_800D9DA0, 0x800D9DA0) //this is a jump label
/*800D9DA0 000D6BA0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*800D9DA4 000D6BA4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*800D9DA8 000D6BA8*/ PPC::Runtime::ASM::bdnz(.L_800D9DA0);
RUNTIME_PPC_JUMP_LABEL(.L_800D9DAC, 0x800D9DAC) //this is a jump label
/*800D9DAC 000D6BAC*/ PPC::Runtime::ASM::lhz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_800D9DB0, 0x800D9DB0) //this is a jump label
/*800D9DB0 000D6BB0*/ PPC::Runtime::ASM::srawi(context->r4, context->r25, 3);
/*800D9DB4 000D6BB4*/ PPC::Runtime::ASM::slwi(context->r0, context->r25, 29);
/*800D9DB8 000D6BB8*/ PPC::Runtime::ASM::srwi(context->r3, context->r25, 31);
/*800D9DBC 000D6BBC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r23));
/*800D9DC0 000D6BC0*/ PPC::Runtime::ASM::addze(context->r5, context->r4);
/*800D9DC4 000D6BC4*/ PPC::Runtime::ASM::subf(context->r0, context->r3, context->r0);
/*800D9DC8 000D6BC8*/ PPC::Runtime::ASM::lbzx(context->r4, context->r6, context->r5);
/*800D9DCC 000D6BCC*/ PPC::Runtime::ASM::rotlwi(context->r0, context->r0, 3);
/*800D9DD0 000D6BD0*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r3);
/*800D9DD4 000D6BD4*/ PPC::Runtime::ASM::sraw(context->r0, context->r4, context->r3);
/* 800D9DD8 000D6BD8  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*800D9DDC 000D6BDC*/ PPC::Runtime::ASM::bne(.L_800D9C48);
/*800D9DE0 000D6BE0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800D9DE4 000D6BE4*/ PPC::Runtime::ASM::slw(context->r0, context->r0, context->r3);
/*800D9DE8 000D6BE8*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*800D9DEC 000D6BEC*/ PPC::Runtime::ASM::stbx(context->r0, context->r6, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_800D9DF0, 0x800D9DF0) //this is a jump label
/*800D9DF0 000D6BF0*/ PPC::Runtime::ASM::cmpwi(context->r25, -0x1);
/*800D9DF4 000D6BF4*/ PPC::Runtime::ASM::bne(.L_800D9BCC);
/*800D9DF8 000D6BF8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800D9DFC 000D6BFC*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1)0, context->qr0);
/*800D9E00 000D6C00*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*800D9E04 000D6C04*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1)0, context->qr0);
/*800D9E08 000D6C08*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r1));
/*800D9E0C 000D6C0C*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1)0, context->qr0);
/*800D9E10 000D6C10*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*800D9E14 000D6C14*/ PPC::Runtime::ASM::psq_l(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*800D9E18 000D6C18*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x90);
/*800D9E1C 000D6C1C*/ PPC::Runtime::ASM::lfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*800D9E20 000D6C20*/ PPC::Runtime::ASM::bl(_restgpr_17);
/*800D9E24 000D6C24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r1));
/*800D9E28 000D6C28*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D9E2C 000D6C2C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xd0);
/*800D9E30 000D6C30*/ PPC::Runtime::ASM::blr();
}