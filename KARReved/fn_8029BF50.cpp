//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029BF50(PPC::Runtime::GCContext* context)
{
/*8029BF50 00298D50*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8029BF54 00298D54*/ PPC::Runtime::ASM::mflr(context->r0);
/*8029BF58 00298D58*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8029BF5C 00298D5C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8029BF60 00298D60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029BF64 00298D64*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7798 @ Get_MemoryOffset_SDA21);
/*8029BF68 00298D68*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7790 @ Get_MemoryOffset_SDA21);
/*8029BF6C 00298D6C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8029BF70 00298D70*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8029BF74 00298D74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029BF78 00298D78*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8029BF7C 00298D7C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8029BF80 00298D80*/ PPC::Runtime::ASM::blr();
}