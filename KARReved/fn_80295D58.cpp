//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80295D58(PPC::Runtime::GCContext* context)
{
/*80295D58 00292B58*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80295D5C 00292B5C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80295D60 00292B60*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80295D64 00292B64*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80295D68 00292B68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80295D6C 00292B6C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7620 @ Get_MemoryOffset_SDA21);
/*80295D70 00292B70*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7618 @ Get_MemoryOffset_SDA21);
/*80295D74 00292B74*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80295D78 00292B78*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80295D7C 00292B7C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80295D80 00292B80*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80295D84 00292B84*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80295D88 00292B88*/ PPC::Runtime::ASM::blr();
}