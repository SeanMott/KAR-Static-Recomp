//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_menuGetNextMenuID.hpp"
#include "fn_800064F0.hpp"
#include "fn_80008220.hpp"



void fn_800AF7AC(PPC::Runtime::GCContext* context)
{
/*800AF7AC 000AC5AC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800AF7B0 000AC5B0*/ PPC::Runtime::ASM::mflr(context->r0);
/*800AF7B4 000AC5B4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*800AF7B8 000AC5B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AF7BC 000AC5BC*/ PPC::Runtime::ASM::bne(.L_800AF7D0);
/*800AF7C0 000AC5C0*/ PPC::Runtime::ASM::li(context->r3, 0x12);
/*800AF7C4 000AC5C4*/ PPC::Runtime::ASM::bl(fn_menuGetNextMenuID);
/*800AF7C8 000AC5C8*/ PPC::Runtime::ASM::bl(fn_800064F0);
/*800AF7CC 000AC5CC*/ PPC::Runtime::ASM::bl(fn_80008220);
RUNTIME_PPC_JUMP_LABEL(.L_800AF7D0, 0x800AF7D0) //this is a jump label
/*800AF7D0 000AC5D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AF7D4 000AC5D4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800AF7D8 000AC5D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800AF7DC 000AC5DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800AF7E0 000AC5E0*/ PPC::Runtime::ASM::blr();
}