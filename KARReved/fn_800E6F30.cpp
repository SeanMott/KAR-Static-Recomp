//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8006BAC8.hpp"
#include "fn_80062CA4.hpp"



void fn_800E6F30(PPC::Runtime::GCContext* context)
{
/*800E6F30 000E3D30*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x70, context->r1));
/*800E6F34 000E3D34*/ PPC::Runtime::ASM::mflr(context->r0);
/*800E6F38 000E3D38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*800E6F3C 000E3D3C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*800E6F40 000E3D40*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*800E6F44 000E3D44*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*800E6F48 000E3D48*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*800E6F4C 000E3D4C*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*800E6F50 000E3D50*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*800E6F54 000E3D54*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*800E6F58 000E3D58*/ PPC::Runtime::ASM::bl(_savegpr_24);
/*800E6F5C 000E3D5C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800E6F60 000E3D60*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*800E6F64 000E3D64*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*800E6F68 000E3D68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r6));
/*800E6F6C 000E3D6C*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800E6F70 000E3D70*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*800E6F74 000E3D74*/ PPC::Runtime::ASM::beq(.L_800E70D8);
/*800E6F78 000E3D78*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*800E6F7C 000E3D7C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*800E6F80 000E3D80*/ PPC::Runtime::ASM::lfs(context->f30, STRUCT_FLOAT_COUNT_1805DF738 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800E6F84 000E3D84*/ PPC::Runtime::ASM::mr(context->r27, context->r28);
/*800E6F88 000E3D88*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805DF73C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800E6F8C 000E3D8C*/ PPC::Runtime::ASM::li(context->r25, 0x0);
/*800E6F90 000E3D90*/ PPC::Runtime::ASM::b(.L_800E70C8);
RUNTIME_PPC_JUMP_LABEL(.L_800E6F94, 0x800E6F94) //this is a jump label
/*800E6F94 000E3D94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800E6F98 000E3D98*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*800E6F9C 000E3D9C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*800E6FA0 000E3DA0*/ PPC::Runtime::ASM::lwzx(context->r24, context->r3, context->r28);
/*800E6FA4 000E3DA4*/ PPC::Runtime::ASM::extrwi(context->r5, context->r0, 1, 24);
/*800E6FA8 000E3DA8*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*800E6FAC 000E3DAC*/ PPC::Runtime::ASM::bl(fn_8006BAC8);
/*800E6FB0 000E3DB0*/ PPC::Runtime::ASM::fmr(context->f29, context->f1);
/*800E6FB4 000E3DB4*/ PPC::Runtime::ASM::fcmpu(cr0, context->f30, context->f29);
/*800E6FB8 000E3DB8*/ PPC::Runtime::ASM::bne(.L_800E6FD4);
/*800E6FBC 000E3DBC*/ PPC::Runtime::ASM::lis(context->r3, String_Debug_ "grairflow." Get_MemoryOffset_HighBit);
/*800E6FC0 000E3DC0*/ PPC::Runtime::ASM::lis(context->r5, StructWithFuncPtrs_43 @ Get_MemoryOffset_HighBit);
/*800E6FC4 000E3DC4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_Debug_ "grairflow." Get_MemoryOffset_LowBit);
/*800E6FC8 000E3DC8*/ PPC::Runtime::ASM::li(context->r4, 0xae);
/*800E6FCC 000E3DCC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, StructWithFuncPtrs_43 @ Get_MemoryOffset_LowBit);
/*800E6FD0 000E3DD0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E6FD4, 0x800E6FD4) //this is a jump label
/*800E6FD4 000E3DD4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f29, context->f31);
/*800E6FD8 000E3DD8*/ PPC::Runtime::ASM::ble(.L_800E70BC);
/*800E6FDC 000E3DDC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF740 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800E6FE0 000E3DE0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f29, context->f0);
/*800E6FE4 000E3DE4*/ PPC::Runtime::ASM::bge(.L_800E70BC);
/*800E6FE8 000E3DE8*/ PPC::Runtime::ASM::fmr(context->f1, context->f29);
/*800E6FEC 000E3DEC*/ PPC::Runtime::ASM::mr(context->r4, context->r24);
/*800E6FF0 000E3DF0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*800E6FF4 000E3DF4*/ PPC::Runtime::ASM::bl(fn_splArcLengthPoint);
/*800E6FF8 000E3DF8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800E6FFC 000E3DFC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*800E7000 000E3E00*/ PPC::Runtime::ASM::bl(fn_803D22F4);
/*800E7004 000E3E04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r29));
/*800E7008 000E3E08*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r27);
/*800E700C 000E3E0C*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800E7010 000E3E10*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f5);
/*800E7014 000E3E14*/ PPC::Runtime::ASM::bge(.L_800E70BC);
/*800E7018 000E3E18*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800E701C 000E3E1C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*800E7020 000E3E20*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*800E7024 000E3E24*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800E7028 000E3E28*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800E702C 000E3E2C*/ PPC::Runtime::ASM::fsubs(context->f4, context->f0, context->f6);
/*800E7030 000E3E30*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800E7034 000E3E34*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800E7038 000E3E38*/ PPC::Runtime::ASM::fsubs(context->f3, context->f3, context->f0);
/*800E703C 000E3E3C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800E7040 000E3E40*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f4);
/*800E7044 000E3E44*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800E7048 000E3E48*/ PPC::Runtime::ASM::fdivs(context->f3, context->f1, context->f5);
/*800E704C 000E3E4C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800E7050 000E3E50*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*800E7054 000E3E54*/ PPC::Runtime::ASM::fadds(context->f29, context->f6, context->f3);
/*800E7058 000E3E58*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800E705C 000E3E5C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800E7060 000E3E60*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800E7064 000E3E64*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800E7068 000E3E68*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*800E706C 000E3E6C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800E7070 000E3E70*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800E7074 000E3E74*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800E7078 000E3E78*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f29);
/*800E707C 000E3E7C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f29);
/*800E7080 000E3E80*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f29);
/*800E7084 000E3E84*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800E7088 000E3E88*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800E708C 000E3E8C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800E7090 000E3E90*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800E7094 000E3E94*/ PPC::Runtime::ASM::fadds(context->f0, context->f2, context->f0);
/*800E7098 000E3E98*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800E709C 000E3E9C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800E70A0 000E3EA0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800E70A4 000E3EA4*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*800E70A8 000E3EA8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800E70AC 000E3EAC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800E70B0 000E3EB0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800E70B4 000E3EB4*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*800E70B8 000E3EB8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800E70BC, 0x800E70BC) //this is a jump label
/*800E70BC 000E3EBC*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x4);
/*800E70C0 000E3EC0*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0xc);
/*800E70C4 000E3EC4*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800E70C8, 0x800E70C8) //this is a jump label
/*800E70C8 000E3EC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*800E70CC 000E3ECC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800E70D0 000E3ED0*/ PPC::Runtime::ASM::cmpw(context->r25, context->r0);
/*800E70D4 000E3ED4*/ PPC::Runtime::ASM::blt(.L_800E6F94);
RUNTIME_PPC_JUMP_LABEL(.L_800E70D8, 0x800E70D8) //this is a jump label
/*800E70D8 000E3ED8*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*800E70DC 000E3EDC*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*800E70E0 000E3EE0*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*800E70E4 000E3EE4*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*800E70E8 000E3EE8*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*800E70EC 000E3EEC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*800E70F0 000E3EF0*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*800E70F4 000E3EF4*/ PPC::Runtime::ASM::bl(_restgpr_24);
/*800E70F8 000E3EF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*800E70FC 000E3EFC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800E7100 000E3F00*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x70);
/*800E7104 000E3F04*/ PPC::Runtime::ASM::blr();
}