//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_giveStat.hpp"
#include "fn_80193718.hpp"



void fn_8019125C(PPC::Runtime::GCContext* context)
{
/*8019125C 0018E05C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80191260 0018E060*/ PPC::Runtime::ASM::mflr(context->r0);
/*80191264 0018E064*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80191268 0018E068*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019126C 0018E06C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80191270 0018E070*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x74c);
/*80191274 0018E074*/ PPC::Runtime::ASM::bl(fn_giveStat);
/*80191278 0018E078*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8019127C 0018E07C*/ PPC::Runtime::ASM::bl(fn_80193718);
/*80191280 0018E080*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80191284 0018E084*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80191288 0018E088*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019128C 0018E08C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80191290 0018E090*/ PPC::Runtime::ASM::blr();
}