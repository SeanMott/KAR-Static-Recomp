//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8000C604.hpp"
#include "fn_playSoundFX_menuSound.hpp"



void fn_800AEB90(PPC::Runtime::GCContext* context)
{
/*800AEB90 000AB990*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800AEB94 000AB994*/ PPC::Runtime::ASM::mflr(context->r0);
/*800AEB98 000AB998*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*800AEB9C 000AB99C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AEBA0 000AB9A0*/ PPC::Runtime::ASM::bne(.L_800AEBAC);
/*800AEBA4 000AB9A4*/ PPC::Runtime::ASM::bl(fn_8000C604);
/*800AEBA8 000AB9A8*/ PPC::Runtime::ASM::bl(fn_playSoundFX_menuSound);
RUNTIME_PPC_JUMP_LABEL(.L_800AEBAC, 0x800AEBAC) //this is a jump label
/*800AEBAC 000AB9AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AEBB0 000AB9B0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800AEBB4 000AB9B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800AEBB8 000AB9B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800AEBBC 000AB9BC*/ PPC::Runtime::ASM::blr();
}