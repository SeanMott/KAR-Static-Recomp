//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F446C.hpp"
#include "fn_8010025C.hpp"



void fn_80100224(PPC::Runtime::GCContext* context)
{
/*80100224 000FD024*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80100228 000FD028*/ PPC::Runtime::ASM::mflr(context->r0);
/*8010022C 000FD02C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80100230 000FD030*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80100234 000FD034*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80100238 000FD038*/ PPC::Runtime::ASM::li(context->r3, 0x33);
/*8010023C 000FD03C*/ PPC::Runtime::ASM::bl(fn_800F446C);
/*80100240 000FD040*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80100244 000FD044*/ PPC::Runtime::ASM::bl(fn_8010025C);
/*80100248 000FD048*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010024C 000FD04C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80100250 000FD050*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80100254 000FD054*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80100258 000FD058*/ PPC::Runtime::ASM::blr();
}