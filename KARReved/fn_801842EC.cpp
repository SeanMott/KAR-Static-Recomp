//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138AB0.hpp"
#include "fn_FuncDoesShit_5.hpp"



void fn_801842EC(PPC::Runtime::GCContext* context)
{
/*801842EC 001810EC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801842F0 001810F0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801842F4 001810F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801842F8 001810F8*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801842FC 001810FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1168, context->r3));
/*80184300 00181100*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80184304 00181104*/ PPC::Runtime::ASM::beq(.L_8018432C);
/*80184308 00181108*/ PPC::Runtime::ASM::bl(fn_80138AB0);
/*8018430C 0018110C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80184310 00181110*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1168, context->r3));
/*80184314 00181114*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80184318 00181118*/ PPC::Runtime::ASM::beq(.L_8018432C);
/*8018431C 0018111C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80184320 00181120*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*80184324 00181124*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
/*80184328 00181128*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlagsAll?);
RUNTIME_PPC_JUMP_LABEL(.L_8018432C, 0x8018432C) //this is a jump label
/*8018432C 0018112C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80184330 00181130*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80184334 00181134*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80184338 00181138*/ PPC::Runtime::ASM::blr();
}