//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FC398.hpp"
#include "fn_8018CBC8.hpp"



void fn_80215EF0(PPC::Runtime::GCContext* context)
{
/*80215EF0 00212CF0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80215EF4 00212CF4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80215EF8 00212CF8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E25F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80215EFC 00212CFC*/ PPC::Runtime::ASM::li(context->r4, 0xf);
/*80215F00 00212D00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80215F04 00212D04*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80215F08 00212D08*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80215F0C 00212D0C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E25F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80215F10 00212D10*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80215F14 00212D14*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80215F18 00212D18*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*80215F1C 00212D1C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80215F20 00212D20*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb48, context->r31));
/*80215F24 00212D24*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x410, context->r31));
/*80215F28 00212D28*/ PPC::Runtime::ASM::bl(fn_8018CBC8);
/*80215F2C 00212D2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80215F30 00212D30*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80215F34 00212D34*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80215F38 00212D38*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80215F3C 00212D3C*/ PPC::Runtime::ASM::blr();
}