//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80294E34(PPC::Runtime::GCContext* context)
{
/*80294E34 00291C34*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80294E38 00291C38*/ PPC::Runtime::ASM::mflr(context->r0);
/*80294E3C 00291C3C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80294E40 00291C40*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80294E44 00291C44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80294E48 00291C48*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7A4C @ Get_MemoryOffset_SDA21);
/*80294E4C 00291C4C*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7A44 @ Get_MemoryOffset_SDA21);
/*80294E50 00291C50*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80294E54 00291C54*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80294E58 00291C58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80294E5C 00291C5C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80294E60 00291C60*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80294E64 00291C64*/ PPC::Runtime::ASM::blr();
}