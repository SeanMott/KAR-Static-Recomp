//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801F605C.hpp"
#include "fn_801C90DC.hpp"



void fn_801F5A84(PPC::Runtime::GCContext* context)
{
/*801F5A84 001F2884*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F5A88 001F2888*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F5A8C 001F288C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F5A90 001F2890*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F5A94 001F2894*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801F5A98 001F2898*/ PPC::Runtime::ASM::bl(fn_801F605C);
/*801F5A9C 001F289C*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*801F5AA0 001F28A0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f0, context->r31));
/*801F5AA4 001F28A4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*801F5AA8 001F28A8*/ PPC::Runtime::ASM::ble(.L_801F5AB0);
/*801F5AAC 001F28AC*/ PPC::Runtime::ASM::fmr(context->f2, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801F5AB0, 0x801F5AB0) //this is a jump label
/*801F5AB0 001F28B0*/ PPC::Runtime::ASM::fmr(context->f1, context->f0);
/*801F5AB4 001F28B4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F5AB8 001F28B8*/ PPC::Runtime::ASM::bl(fn_801C90DC);
/*801F5ABC 001F28BC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6e8, context->r31));
/*801F5AC0 001F28C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F5AC4 001F28C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F5AC8 001F28C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F5ACC 001F28CC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F5AD0 001F28D0*/ PPC::Runtime::ASM::blr();
}