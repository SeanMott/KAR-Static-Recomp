//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FC398.hpp"



void fn_80218260(PPC::Runtime::GCContext* context)
{
/*80218260 00215060*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80218264 00215064*/ PPC::Runtime::ASM::mflr(context->r0);
/*80218268 00215068*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2660 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021826C 0021506C*/ PPC::Runtime::ASM::li(context->r4, 0xf);
/*80218270 00215070*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80218274 00215074*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80218278 00215078*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8021827C 0021507C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2664 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80218280 00215080*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*80218284 00215084*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80218288 00215088*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021828C 0021508C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80218290 00215090*/ PPC::Runtime::ASM::blr();
}