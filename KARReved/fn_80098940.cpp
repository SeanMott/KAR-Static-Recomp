//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80098548.hpp"
#include "fn_80098548.hpp"



void fn_80098940(PPC::Runtime::GCContext* context)
{
/*80098940 00095740*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80098944 00095744*/ PPC::Runtime::ASM::mflr(context->r0);
/*80098948 00095748*/ PPC::Runtime::ASM::li(context->r3, 0x25);
/*8009894C 0009574C*/ PPC::Runtime::ASM::li(context->r4, 0x3f);
/*80098950 00095750*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80098954 00095754*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80098958 00095758*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*8009895C 0009575C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80098960 00095760*/ PPC::Runtime::ASM::beq(.L_80098978);
/*80098964 00095764*/ PPC::Runtime::ASM::lis(context->r4, fn_80098548 @ Get_MemoryOffset_HighBit);
/*80098968 00095768*/ PPC::Runtime::ASM::li(context->r5, 0x21);
/*8009896C 0009576C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80098548 @ Get_MemoryOffset_LowBit);
/*80098970 00095770*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*80098974 00095774*/ PPC::Runtime::ASM::bl(fn_GObj_AddGXLink);
RUNTIME_PPC_JUMP_LABEL(.L_80098978, 0x80098978) //this is a jump label
/*80098978 00095778*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8009897C 0009577C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80098980 00095780*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80098984 00095784*/ PPC::Runtime::ASM::blr();
}