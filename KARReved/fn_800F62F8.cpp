//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800D6A70.hpp"



void fn_800F62F8(PPC::Runtime::GCContext* context)
{
/*800F62F8 000F30F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800F62FC 000F30FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F6300 000F3100*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F6304 000F3104*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800F6308 000F3108*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*800F630C 000F310C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*800F6310 000F3110*/ PPC::Runtime::ASM::beq(.L_800F631C);
/*800F6314 000F3114*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1c);
/*800F6318 000F3118*/ PPC::Runtime::ASM::bl(fn_800D6A70);
RUNTIME_PPC_JUMP_LABEL(.L_800F631C, 0x800F631C) //this is a jump label
/*800F631C 000F311C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F6320 000F3120*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F6324 000F3124*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800F6328 000F3128*/ PPC::Runtime::ASM::blr();
}