//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FD6B0.hpp"
#include "fn_801FC398.hpp"



void fn_8021C194(PPC::Runtime::GCContext* context)
{
/*8021C194 00218F94*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8021C198 00218F98*/ PPC::Runtime::ASM::mflr(context->r0);
/*8021C19C 00218F9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021C1A0 00218FA0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8021C1A4 00218FA4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021C1A8 00218FA8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8021C1AC 00218FAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r3));
/*8021C1B0 00218FB0*/ PPC::Runtime::ASM::bl(fn_801FD6B0);
/*8021C1B4 00218FB4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E26F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021C1B8 00218FB8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021C1BC 00218FBC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E26FC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021C1C0 00218FC0*/ PPC::Runtime::ASM::li(context->r4, 0x16);
/*8021C1C4 00218FC4*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8021C1C8 00218FC8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8021C1CC 00218FCC*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*8021C1D0 00218FD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021C1D4 00218FD4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021C1D8 00218FD8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021C1DC 00218FDC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8021C1E0 00218FE0*/ PPC::Runtime::ASM::blr();
}