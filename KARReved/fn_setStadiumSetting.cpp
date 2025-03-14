//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_8000AD48.hpp"
#include "fn_8000AE50.hpp"
#include "fn_8000AD48.hpp"



void fn_setStadiumSetting(PPC::Runtime::GCContext* context)
{
/*80045BF4 000429F4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80045BF8 000429F8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80045BFC 000429FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80045C00 00042A00*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80045C04 00042A04*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80045C08 00042A08*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80045C0C 00042A0C*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*80045C10 00042A10*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb88, context->r3));
/*80045C14 00042A14*/ PPC::Runtime::ASM::bl(fn_8000AD48);
/*80045C18 00042A18*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80045C1C 00042A1C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80045C20 00042A20*/ PPC::Runtime::ASM::bne(.L_80045C7C);
/*80045C24 00042A24*/ PPC::Runtime::ASM::bl(fn_8000AE50);
/*80045C28 00042A28*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80045C2C 00042A2C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x17);
/*80045C30 00042A30*/ PPC::Runtime::ASM::bne(.L_80045C7C);
/*80045C34 00042A34*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*80045C38 00042A38*/ PPC::Runtime::ASM::li(context->r5, 0x6);
/*80045C3C 00042A3C*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb88, context->r31));
/*80045C40 00042A40*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80045C44 00042A44*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*80045C48 00042A48*/ PPC::Runtime::ASM::li(context->r0, 0x8);
/*80045C4C 00042A4C*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb89, context->r31));
/*80045C50 00042A50*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8a, context->r31));
/*80045C54 00042A54*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8b, context->r31));
/*80045C58 00042A58*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8c, context->r31));
/*80045C5C 00042A5C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8e, context->r31));
/*80045C60 00042A60*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb90, context->r31));
/*80045C64 00042A64*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb91, context->r31));
/*80045C68 00042A68*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8d, context->r31));
/*80045C6C 00042A6C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8a, context->r31));
/*80045C70 00042A70*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x458, context->r31));
/*80045C74 00042A74*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8b, context->r31));
/*80045C78 00042A78*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45d, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80045C7C, 0x80045C7C) //this is a jump label
/*80045C7C 00042A7C*/ PPC::Runtime::ASM::bl(fn_8000AD48);
/*80045C80 00042A80*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*80045C84 00042A84*/ PPC::Runtime::ASM::beq(.L_80045C90);
/*80045C88 00042A88*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80045C8C 00042A8C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa9a, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80045C90, 0x80045C90) //this is a jump label
/*80045C90 00042A90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80045C94 00042A94*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80045C98 00042A98*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80045C9C 00042A9C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80045CA0 00042AA0*/ PPC::Runtime::ASM::blr();
}