//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8007B954(PPC::Runtime::GCContext* context)
{
/*8007B954 00078754*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8007B958 00078758*/ PPC::Runtime::ASM::mflr(context->r0);
/*8007B95C 0007875C*/ PPC::Runtime::ASM::lis(context->r3, lbl_80552A30 @ Get_MemoryOffset_HighBit);
/*8007B960 00078760*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007B964 00078764*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80552A30 @ Get_MemoryOffset_LowBit);
/*8007B968 00078768*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*8007B96C 0007876C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8007B970 00078770*/ PPC::Runtime::ASM::beq(.L_8007B97C);
/*8007B974 00078774*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r3));
/*8007B978 00078778*/ PPC::Runtime::ASM::b(.L_8007B980);
RUNTIME_PPC_JUMP_LABEL(.L_8007B97C, 0x8007B97C) //this is a jump label
/*8007B97C 0007877C*/ PPC::Runtime::ASM::bl(fn_80487C48);
RUNTIME_PPC_JUMP_LABEL(.L_8007B980, 0x8007B980) //this is a jump label
/*8007B980 00078780*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007B984 00078784*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8007B988 00078788*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8007B98C 0007878C*/ PPC::Runtime::ASM::blr();
}