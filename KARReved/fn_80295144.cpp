//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80295144(PPC::Runtime::GCContext* context)
{
/*80295144 00291F44*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80295148 00291F48*/ PPC::Runtime::ASM::mflr(context->r0);
/*8029514C 00291F4C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80295150 00291F50*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80295154 00291F54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80295158 00291F58*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7A5C @ Get_MemoryOffset_SDA21);
/*8029515C 00291F5C*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7A54 @ Get_MemoryOffset_SDA21);
/*80295160 00291F60*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80295164 00291F64*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80295168 00291F68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029516C 00291F6C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80295170 00291F70*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80295174 00291F74*/ PPC::Runtime::ASM::blr();
}