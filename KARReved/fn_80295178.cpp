//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80295178(PPC::Runtime::GCContext* context)
{
/*80295178 00291F78*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8029517C 00291F7C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80295180 00291F80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80295184 00291F84*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80295188 00291F88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029518C 00291F8C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7A5C @ Get_MemoryOffset_SDA21);
/*80295190 00291F90*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7A54 @ Get_MemoryOffset_SDA21);
/*80295194 00291F94*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80295198 00291F98*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8029519C 00291F9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802951A0 00291FA0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802951A4 00291FA4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802951A8 00291FA8*/ PPC::Runtime::ASM::blr();
}