//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250954.hpp"
#include "fn_8025B498.hpp"
#include "fn_8025B518.hpp"



void fn_8025B434(PPC::Runtime::GCContext* context)
{
/*8025B434 00258234*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025B438 00258238*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025B43C 0025823C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025B440 00258240*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025B444 00258244*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025B448 00258248*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025B44C 0025824C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025B450 00258250*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025B454 00258254*/ PPC::Runtime::ASM::bl(fn_80250954);
/*8025B458 00258258*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x359, context->r31));
/* 8025B45C 0025825C  54 00 F7 7F */ extrwi. context->r0 , context->r0 , 3 , 27
/*8025B460 00258260*/ PPC::Runtime::ASM::bne(.L_8025B470);
/*8025B464 00258264*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025B468 00258268*/ PPC::Runtime::ASM::bl(fn_8025B498);
/*8025B46C 0025826C*/ PPC::Runtime::ASM::b(.L_8025B478);
RUNTIME_PPC_JUMP_LABEL(.L_8025B470, 0x8025B470) //this is a jump label
/*8025B470 00258270*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025B474 00258274*/ PPC::Runtime::ASM::bl(fn_8025B518);
RUNTIME_PPC_JUMP_LABEL(.L_8025B478, 0x8025B478) //this is a jump label
/*8025B478 00258278*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025B47C 0025827C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025B480 00258280*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025B484 00258284*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025B488 00258288*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025B48C 0025828C*/ PPC::Runtime::ASM::blr();
}