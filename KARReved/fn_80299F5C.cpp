//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80299F5C(PPC::Runtime::GCContext* context)
{
/*80299F5C 00296D5C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80299F60 00296D60*/ PPC::Runtime::ASM::mflr(context->r0);
/*80299F64 00296D64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80299F68 00296D68*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80299F6C 00296D6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80299F70 00296D70*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7798 @ Get_MemoryOffset_SDA21);
/*80299F74 00296D74*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7790 @ Get_MemoryOffset_SDA21);
/*80299F78 00296D78*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80299F7C 00296D7C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80299F80 00296D80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80299F84 00296D84*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80299F88 00296D88*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80299F8C 00296D8C*/ PPC::Runtime::ASM::blr();
}