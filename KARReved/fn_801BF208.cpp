//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FBF4.hpp"
#include "fn_801BED04.hpp"



void fn_801BF208(PPC::Runtime::GCContext* context)
{
/*801BF208 001BC008*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BF20C 001BC00C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BF210 001BC010*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BF214 001BC014*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BF218 001BC018*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801BF21C 001BC01C*/ PPC::Runtime::ASM::bl(fn_8019FBF4);
/*801BF220 001BC020*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BF224 001BC024*/ PPC::Runtime::ASM::bl(fn_801BED04);
/*801BF228 001BC028*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801BF22C 001BC02C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BF230 001BC030*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BF234 001BC034*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BF238 001BC038*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BF23C 001BC03C*/ PPC::Runtime::ASM::blr();
}