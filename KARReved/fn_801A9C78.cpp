//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022847C.hpp"
#include "fn_randomAbility_removeGlow.hpp"



void fn_801A9C78(PPC::Runtime::GCContext* context)
{
/*801A9C78 001A6A78*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A9C7C 001A6A7C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A9C80 001A6A80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A9C84 001A6A84*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A9C88 001A6A88*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801A9C8C 001A6A8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f0, context->r3));
/*801A9C90 001A6A90*/ PPC::Runtime::ASM::bl(fn_8022847C);
/*801A9C94 001A6A94*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A9C98 001A6A98*/ PPC::Runtime::ASM::li(context->r4, 0x29);
/*801A9C9C 001A6A9C*/ PPC::Runtime::ASM::bl(fn_randomAbility_removeGlow);
/*801A9CA0 001A6AA0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A9CA4 001A6AA4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A9CA8 001A6AA8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A9CAC 001A6AAC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A9CB0 001A6AB0*/ PPC::Runtime::ASM::blr();
}