//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_playSoundFX_errorNoise.hpp"



void fn_800ADAF8(PPC::Runtime::GCContext* context)
{
/*800ADAF8 000AA8F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800ADAFC 000AA8FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*800ADB00 000AA900*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*800ADB04 000AA904*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800ADB08 000AA908*/ PPC::Runtime::ASM::bne(.L_800ADB10);
/*800ADB0C 000AA90C*/ PPC::Runtime::ASM::bl(fn_playSoundFX_errorNoise);
RUNTIME_PPC_JUMP_LABEL(.L_800ADB10, 0x800ADB10) //this is a jump label
/*800ADB10 000AA910*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800ADB14 000AA914*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800ADB18 000AA918*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800ADB1C 000AA91C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800ADB20 000AA920*/ PPC::Runtime::ASM::blr();
}