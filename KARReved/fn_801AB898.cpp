//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801ABB68.hpp"
#include "fn_801B4E2C.hpp"
#include "fn_801B8078.hpp"



void fn_801AB898(PPC::Runtime::GCContext* context)
{
/*801AB898 001A8698*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AB89C 001A869C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AB8A0 001A86A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AB8A4 001A86A4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AB8A8 001A86A8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801AB8AC 001A86AC*/ PPC::Runtime::ASM::bl(fn_801ABB68);
/*801AB8B0 001A86B0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AB8B4 001A86B4*/ PPC::Runtime::ASM::bl(fn_801B4E2C);
/*801AB8B8 001A86B8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AB8BC 001A86BC*/ PPC::Runtime::ASM::bne(.L_801AB8CC);
/*801AB8C0 001A86C0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AB8C4 001A86C4*/ PPC::Runtime::ASM::bl(fn_801B8078);
/*801AB8C8 001A86C8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801AB8CC, 0x801AB8CC) //this is a jump label
/*801AB8CC 001A86CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AB8D0 001A86D0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AB8D4 001A86D4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AB8D8 001A86D8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AB8DC 001A86DC*/ PPC::Runtime::ASM::blr();
}