//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8021F7DC.hpp"
#include "fn_8022514C.hpp"
#include "fn_8022514C.hpp"



void fn_80225194(PPC::Runtime::GCContext* context)
{
/*80225194 00221F94*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80225198 00221F98*/ PPC::Runtime::ASM::mflr(context->r0);
/*8022519C 00221F9C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2940 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802251A0 00221FA0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802251A4 00221FA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802251A8 00221FA8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802251AC 00221FAC*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*802251B0 00221FB0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2944 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802251B4 00221FB4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802251B8 00221FB8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802251BC 00221FBC*/ PPC::Runtime::ASM::bl(fn_8021F7DC);
/*802251C0 00221FC0*/ PPC::Runtime::ASM::lis(context->r3, fn_8022514C @ Get_MemoryOffset_HighBit);
/*802251C4 00221FC4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_8022514C @ Get_MemoryOffset_LowBit);
/*802251C8 00221FC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x160, context->r31));
/*802251CC 00221FCC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802251D0 00221FD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802251D4 00221FD4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802251D8 00221FD8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802251DC 00221FDC*/ PPC::Runtime::ASM::blr();
}