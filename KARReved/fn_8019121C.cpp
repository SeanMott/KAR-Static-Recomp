//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80072664.hpp"



void fn_8019121C(PPC::Runtime::GCContext* context)
{
/*8019121C 0018E01C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80191220 0018E020*/ PPC::Runtime::ASM::mflr(context->r0);
/*80191224 0018E024*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80191228 0018E028*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019122C 0018E02C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80191230 0018E030*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c4, context->r3));
/*80191234 0018E034*/ PPC::Runtime::ASM::bl(fn_80072664);
/*80191238 0018E038*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c4, context->r31));
/*8019123C 0018E03C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80191240 0018E040*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80191244 0018E044*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80191248 0018E048*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8019124C 0018E04C*/ PPC::Runtime::ASM::blr();
}