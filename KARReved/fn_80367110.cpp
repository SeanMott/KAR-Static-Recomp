//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802B57F4.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"



void fn_80367110(PPC::Runtime::GCContext* context)
{
/*80367110 00363F10*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80367114 00363F14*/ PPC::Runtime::ASM::mflr(context->r0);
/*80367118 00363F18*/ PPC::Runtime::ASM::lis(context->r4, lbl_804EBCB0 @ Get_MemoryOffset_HighBit);
/*8036711C 00363F1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80367120 00363F20*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80367124 00363F24*/ PPC::Runtime::ASM::addi(context->r31, context->r4, lbl_804EBCB0 @ Get_MemoryOffset_LowBit);
/*80367128 00363F28*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xc9c);
/*8036712C 00363F2C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80367130 00363F30*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80367134 00363F34*/ PPC::Runtime::ASM::bl(fn_802B57F4);
/*80367138 00363F38*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C1CA8 @ Get_MemoryOffset_HighBit);
/*8036713C 00363F3C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804C1CA8 @ Get_MemoryOffset_LowBit);
/*80367140 00363F40*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80367144 00363F44*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x10);
/*80367148 00363F48*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x58);
/*8036714C 00363F4C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80367150 00363F50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*80367154 00363F54*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*80367158 00363F58*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8036715C 00363F5C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80367160 00363F60*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80367164 00363F64*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1ac);
/*80367168 00363F68*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x4d4);
/*8036716C 00363F6C*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x4d8);
/*80367170 00363F70*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80367174 00363F74*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*80367178 00363F78*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*8036717C 00363F7C*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80367180 00363F80*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80367184 00363F84*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80367188 00363F88*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2b0);
/*8036718C 00363F8C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xc84);
/*80367190 00363F90*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x4dc);
/*80367194 00363F94*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80367198 00363F98*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*8036719C 00363F9C*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*803671A0 00363FA0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*803671A4 00363FA4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803671A8 00363FA8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4778 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803671AC 00363FAC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3b4);
/*803671B0 00363FB0*/ PPC::Runtime::ASM::addi(context->r6, context->r4, 0x4e0);
/*803671B4 00363FB4*/ PPC::Runtime::ASM::li(context->r4, lbl_805DB580 @ Get_MemoryOffset_SDA21);
/*803671B8 00363FB8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803671BC 00363FBC*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*803671C0 00363FC0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1b4);
/*803671C4 00363FC4*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x16c);
/*803671C8 00363FC8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r30));
/*803671CC 00363FCC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803671D0 00363FD0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803671D4 00363FD4*/ PPC::Runtime::ASM::bctrl();
/*803671D8 00363FD8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2b8);
/*803671DC 00363FDC*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x16c);
/*803671E0 00363FE0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b8, context->r30));
/*803671E4 00363FE4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803671E8 00363FE8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803671EC 00363FEC*/ PPC::Runtime::ASM::bctrl();
/*803671F0 00363FF0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3bc);
/*803671F4 00363FF4*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x16c);
/*803671F8 00363FF8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3bc, context->r30));
/*803671FC 00363FFC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*80367200 00364000*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80367204 00364004*/ PPC::Runtime::ASM::bctrl();
/*80367208 00364008*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8036720C 0036400C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80367210 00364010*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80367214 00364014*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80367218 00364018*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8036721C 0036401C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80367220 00364020*/ PPC::Runtime::ASM::blr();
}