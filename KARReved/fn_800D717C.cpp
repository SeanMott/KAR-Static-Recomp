//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800D717C(PPC::Runtime::GCContext* context)
{
/*800D717C 000D3F7C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800D7180 000D3F80*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D7184 000D3F84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800D7188 000D3F88*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800D718C 000D3F8C*/ PPC::Runtime::ASM::bl(_savegpr_27);
/* 800D7190 000D3F90  7C BD 2B 79 */ mr. context->r29 , context->r5
/*800D7194 000D3F94*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*800D7198 000D3F98*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*800D719C 000D3F9C*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*800D71A0 000D3FA0*/ PPC::Runtime::ASM::mr(context->r31, context->r7);
/*800D71A4 000D3FA4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800D71A8 000D3FA8*/ PPC::Runtime::ASM::blt(.L_800D71B8);
/*800D71AC 000D3FAC*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x2);
/*800D71B0 000D3FB0*/ PPC::Runtime::ASM::bgt(.L_800D71B8);
/*800D71B4 000D3FB4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800D71B8, 0x800D71B8) //this is a jump label
/*800D71B8 000D3FB8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800D71BC 000D3FBC*/ PPC::Runtime::ASM::bne(.L_800D71D8);
/*800D71C0 000D3FC0*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_922 @ Get_MemoryOffset_HighBit);
/*800D71C4 000D3FC4*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_923 @ Get_MemoryOffset_HighBit);
/*800D71C8 000D3FC8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_922 @ Get_MemoryOffset_LowBit);
/*800D71CC 000D3FCC*/ PPC::Runtime::ASM::li(context->r4, 0x26e);
/*800D71D0 000D3FD0*/ PPC::Runtime::ASM::addi(context->r5, context->r5, MemoryOffset_923 @ Get_MemoryOffset_LowBit);
/*800D71D4 000D3FD4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800D71D8, 0x800D71D8) //this is a jump label
/*800D71D8 000D3FD8*/ PPC::Runtime::ASM::subi(context->r3, context->r29, 0x2);
/*800D71DC 000D3FDC*/ PPC::Runtime::ASM::subfic(context->r0, context->r29, 0x2);
/*800D71E0 000D3FE0*/ PPC::Runtime::ASM::nor(context->r3, context->r3, context->r0);
/*800D71E4 000D3FE4*/ PPC::Runtime::ASM::addi(context->r0, context->r29, 0x1);
/*800D71E8 000D3FE8*/ PPC::Runtime::ASM::srawi(context->r3, context->r3, 31);
/*800D71EC 000D3FEC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*800D71F0 000D3FF0*/ PPC::Runtime::ASM::slwi(context->r5, context->r28, 6);
/*800D71F4 000D3FF4*/ PPC::Runtime::ASM::slwi(context->r4, context->r29, 2);
/*800D71F8 000D3FF8*/ PPC::Runtime::ASM::andc(context->r0, context->r0, context->r3);
/*800D71FC 000D3FFC*/ PPC::Runtime::ASM::add(context->r3, context->r6, context->r5);
/*800D7200 000D4000*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*800D7204 000D4004*/ PPC::Runtime::ASM::lwzx(context->r4, context->r3, context->r4);
/*800D7208 000D4008*/ PPC::Runtime::ASM::lwzx(context->r5, context->r3, context->r0);
/*800D720C 000D400C*/ PPC::Runtime::ASM::cmplw(context->r4, context->r5);
/*800D7210 000D4010*/ PPC::Runtime::ASM::ble(.L_800D7220);
/*800D7214 000D4014*/ PPC::Runtime::ASM::mr(context->r0, context->r4);
/*800D7218 000D4018*/ PPC::Runtime::ASM::mr(context->r4, context->r5);
/*800D721C 000D401C*/ PPC::Runtime::ASM::mr(context->r5, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_800D7220, 0x800D7220) //this is a jump label
/*800D7220 000D4020*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800D7224 000D4024*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800D7228 000D4028*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800D722C 000D402C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800D7230 000D4030*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*800D7234 000D4034*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800D7238 000D4038*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*800D723C 000D403C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*800D7240 000D4040*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800D7244 000D4044*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800D7248 000D4048*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*800D724C 000D404C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800D7250 000D4050*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800D7254 000D4054*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*800D7258 000D4058*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800D725C 000D405C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D7260 000D4060*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800D7264 000D4064*/ PPC::Runtime::ASM::blr();
}