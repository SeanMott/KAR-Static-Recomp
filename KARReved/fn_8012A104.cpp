//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80112058.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"



void fn_8012A104(PPC::Runtime::GCContext* context)
{
/*8012A104 00126F04*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8012A108 00126F08*/ PPC::Runtime::ASM::mflr(context->r0);
/*8012A10C 00126F0C*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1109 @ Get_MemoryOffset_HighBit);
/*8012A110 00126F10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8012A114 00126F14*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8012A118 00126F18*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8012A11C 00126F1C*/ PPC::Runtime::ASM::addi(context->r30, context->r3, MemoryOffset_1109 @ Get_MemoryOffset_LowBit);
/*8012A120 00126F20*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012A124 00126F24*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8012A128 00126F28*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0xd5c);
/*8012A12C 00126F2C*/ PPC::Runtime::ASM::bl(fn_80112058);
/*8012A130 00126F30*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8012A134 00126F34*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*8012A138 00126F38*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8012A13C 00126F3C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8012A140 00126F40*/ PPC::Runtime::ASM::beq(.L_8012A170);
/*8012A144 00126F44*/ PPC::Runtime::ASM::bge(.L_8012A18C);
/*8012A148 00126F48*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8012A14C 00126F4C*/ PPC::Runtime::ASM::bge(.L_8012A154);
/*8012A150 00126F50*/ PPC::Runtime::ASM::b(.L_8012A18C);
RUNTIME_PPC_JUMP_LABEL(.L_8012A154, 0x8012A154) //this is a jump label
/*8012A154 00126F54*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8012A158 00126F58*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8012A15C 00126F5C*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x0);
/*8012A160 00126F60*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8012A164 00126F64*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8012A168 00126F68*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8012A16C 00126F6C*/ PPC::Runtime::ASM::b(.L_8012A1A4);
RUNTIME_PPC_JUMP_LABEL(.L_8012A170, 0x8012A170) //this is a jump label
/*8012A170 00126F70*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8012A174 00126F74*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8012A178 00126F78*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x1c);
/*8012A17C 00126F7C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8012A180 00126F80*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8012A184 00126F84*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8012A188 00126F88*/ PPC::Runtime::ASM::b(.L_8012A1A4);
RUNTIME_PPC_JUMP_LABEL(.L_8012A18C, 0x8012A18C) //this is a jump label
/*8012A18C 00126F8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8012A190 00126F90*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8012A194 00126F94*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x38);
/*8012A198 00126F98*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8012A19C 00126F9C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8012A1A0 00126FA0*/ PPC::Runtime::ASM::bl(fn_80059520);
RUNTIME_PPC_JUMP_LABEL(.L_8012A1A4, 0x8012A1A4) //this is a jump label
/*8012A1A4 00126FA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8012A1A8 00126FA8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8012A1AC 00126FAC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8012A1B0 00126FB0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012A1B4 00126FB4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8012A1B8 00126FB8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8012A1BC 00126FBC*/ PPC::Runtime::ASM::blr();
}