//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80167940(PPC::Runtime::GCContext* context)
{
/*80167940 00164740*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80167944 00164744*/ PPC::Runtime::ASM::mflr(context->r0);
/*80167948 00164748*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016794C 0016474C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80167950 00164750*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*80167954 00164754*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*80167958 00164758*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*8016795C 0016475C*/ PPC::Runtime::ASM::mr(context->r28, context->r5);
/*80167960 00164760*/ PPC::Runtime::ASM::mr(context->r29, context->r6);
/*80167964 00164764*/ PPC::Runtime::ASM::mr(context->r30, context->r7);
/*80167968 00164768*/ PPC::Runtime::ASM::mr(context->r31, context->r8);
/*8016796C 0016476C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80167970 00164770*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa5c, context->r3));
/*80167974 00164774*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80167978 00164778*/ PPC::Runtime::ASM::beq(.L_801679A8);
/*8016797C 0016477C*/ PPC::Runtime::ASM::extsb(context->r0, context->r26);
/*80167980 00164780*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80167984 00164784*/ PPC::Runtime::ASM::mulli(context->r3, context->r0, 0x60);
/*80167988 00164788*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8016798C 0016478C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r4));
/*80167990 00164790*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r3);
/*80167994 00164794*/ PPC::Runtime::ASM::stb(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*80167998 00164798*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x59, context->r3));
/*8016799C 0016479C*/ PPC::Runtime::ASM::stb(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5a, context->r3));
/*801679A0 001647A0*/ PPC::Runtime::ASM::stb(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r3));
/*801679A4 001647A4*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_801679A8, 0x801679A8) //this is a jump label
/*801679A8 001647A8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*801679AC 001647AC*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*801679B0 001647B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801679B4 001647B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801679B8 001647B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801679BC 001647BC*/ PPC::Runtime::ASM::blr();
}