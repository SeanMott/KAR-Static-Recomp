//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80397970(PPC::Runtime::GCContext* context)
{
/*80397970 00394770*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80397974 00394774*/ PPC::Runtime::ASM::mflr(context->r0);
/*80397978 00394778*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8039797C 0039477C*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC198 @ Get_MemoryOffset_SDA21);
/*80397980 00394780*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80397984 00394784*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC1A0 @ Get_MemoryOffset_SDA21);
/*80397988 00394788*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8039798C 0039478C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDAA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80397990 00394790*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80397994 00394794*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80397998 00394798*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8039799C 0039479C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803979A0 003947A0*/ PPC::Runtime::ASM::blr();
}